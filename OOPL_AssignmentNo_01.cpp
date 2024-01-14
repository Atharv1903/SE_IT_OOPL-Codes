#include<iostream>
using namespace std;

class complex
{
	int real,imaginary;
public:
	complex(){
		cout<<"";
	}
	complex(int a, int b){
		real=a;
		imaginary=b;
	}
	friend void operator >>(istream & in ,complex & c){
		cout<<"Enter the complex number:"<<endl;
		cout<<"Enter the real part: ";
		in>>c.real;

		cout<<"Enter the imaginary part: ";
		in>>c.imaginary;

	}
	friend void operator <<(ostream & out,complex & c){
		if (c.imaginary>=0){
			out<<c.real<<"+"<<c.imaginary<<"i"<<endl;
				}
		if (c.imaginary<0){
			out<<c.real<<"-"<<(-1)*c.imaginary<<"i"<<endl;
				}
	}
	complex operator +(complex c2){
		complex c3;
		c3.real=real+c2.real;
		c3.imaginary=imaginary+c2.imaginary;
		return c3;
	}

	complex operator *(complex c2){
		complex c3;
		c3.real=(real*c2.real)-(imaginary*c2.imaginary);
		c3.imaginary=(real*c2.imaginary)+(imaginary*c2.real);
		return c3;
	}

};

int main()
{
	complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	cout<<c1;
	cout<<c2;

	int a;
	cout<<"Choose the following option: "<<endl;
	cout<<"1.Sum"<<endl;
	cout<<"2.Multiplication"<<endl;
	cin>>a;
	cout<<"\n";
	switch(a){
	case 1:
		c3=c1+c2;
		cout<<c3;
		break;

	case 2:
		c3=c1*c2;
		cout<<c3;
		break;

	}
}





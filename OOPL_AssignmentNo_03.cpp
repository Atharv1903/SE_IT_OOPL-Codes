#include<iostream>
#include<string>
using namespace std;
class tape;
class book;
class publication{
public:
	string title;
	float price;


};

class book :  publication{
	int pagecount;
	
public:
	void getdata(){
		cout<<"Enter the title of the book : "; cin>>title;
		cout<<"Enter price                 : "; cin>>price;
		cout<<"Enter no. of pages          : "; cin>>pagecount;
		cout<<endl;
	}
	void showdata(){
		cout<<"Title          : "<<title<<endl;
		cout<<"Price          : "<<price<<endl;
	    cout<<"Page count     : "<<pagecount<<endl;
	    cout<<endl;
	}


};

class tape :  publication{
	float time;
	
public:
	void getdata(){
		cout<<"Enter the title of the Tape : "; cin>>title;
		cout<<"Enter price                 : "; cin>>price;
		cout<<"Enter time(minutes)         : "; cin>>time;
		cout<<endl;
	}
	void showdata(){
		cout<<"Title          : "<<title<<endl;
		cout<<"Price          : "<<price<<endl;
		cout<<"Time(minutes)  : "<<time<<endl;
		cout<<endl;
	}


};



int main(){
//	string title1,title2;
//	float price1,price2,time;
//	int pgcnt;
//	cout<<"Enter the title of the book : "; cin>>title1;
//	cout<<"Enter price : "; cin>>price1;
//	cout<<"Enter no. of pages : "; cin>>pgcnt;
//	book b1(title1,price1,pgcnt);
	book b1,b2;
	tape t1,t2;
	b1.getdata();
	t1.getdata();
	b1.showdata();
	t1.showdata();





}

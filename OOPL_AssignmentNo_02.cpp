#include <iostream>
#include <string>
using namespace std;
class student
{
    string name, cl, dob, bldgrp, address;
    int rn, div, teleno, liscno;
    static int count;
    friend class data;

public:
    student(){};
    student(string a, string b, string c, string d, string e, int f, int g, int h, int i)
    {
        this->name = a;
        this->cl = b;
        this->dob = c;
        this->bldgrp = d;
        this->address = e;
        this->rn = f;
        this->div = g;
        this->teleno = h;
        this->liscno = i;
    }
    student(student &s1)
    {
        name = s1.name;
        cl = s1.cl;
        dob = s1.dob;
        bldgrp = s1.bldgrp;
        address = s1.address;
        rn = s1.rn;
        div = s1.div;
        teleno = s1.teleno;
        liscno = s1.liscno;
    }
    void showdob()
    {

        cout << dob[0] << dob[1] << "/" << dob[2] << dob[3] << "/" << dob[4] << dob[5] << dob[6] << dob[7];
    }
    inline static void studentno()
    {
        cout << "Details of student no. " << count << " are :";
        count++;
    }
};
int student::count = 1;

class data
{
    string a, b, c, d, e;
    int f, g, h, i;

public:
    void showdata(student s1)
    {
        cout << endl;
        s1.studentno();
        cout << endl;
        cout << "Name                : " << s1.name << endl;
        cout << "Roll No.            : " << s1.rn << endl;
        cout << "Class               : " << s1.cl << endl;
        cout << "Division            : " << s1.div << endl;
        cout << "Date of Birth       : ";
        s1.showdob();
        cout << endl;
        cout << "Blood Group         : " << s1.bldgrp << endl;
        cout << "Address             : " << s1.address << endl;
        cout << "Telephone No.       : " << s1.teleno << endl;
        cout << "Driving License No. : " << s1.liscno << endl;
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the no. of students : ";
    cin >> n;
    cout << endl;
    student *objs = new student[n];
    data *objd = new data[n];
    for (int k = 0; k < n; k++)
    {
        string a, b, c, d, e;
        int f, g, h, i;
        cout << "Enter the details of student no. " << k + 1 << endl;
        cout << "Enter Name                : ";
        cin >> a;
        cout << "Enter roll no.            : ";
        cin >> f;
        cout << "Enter class               : ";
        cin >> b;
        cout << "Enter division            : ";
        cin >> g;
        cout << "Enter dob(ddmmyyyy)       : ";
        cin >> c;
        cout << "Enter blood group         : ";
        cin >> d;
        cout << "Enter address             : ";
        cin >> e;
        cout << "Enter telephone no.       : ";
        cin >> h;
        cout << "Enter driving license No. : ";
        cin >> i;
        cout << endl;
        objs[k] = student(a, b, c, d, e, f, g, h, i);
        objd[k].showdata(objs[k]);
    }

    student s2(objs[0]);
    data d1;
    d1.showdata(s2);
    delete[] objs;
    delete[] objd;
}

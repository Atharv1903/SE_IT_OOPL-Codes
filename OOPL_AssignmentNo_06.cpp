#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class details
{
public:
    string name;
    string dob;
    int teleno;
    details() {}
    friend void operator<<(ostream &out, details &d)
    {
        out << "Name : " << d.name << endl;
        out << "DOB  : " << d.dob << endl;
        out << "Telephone no. : " << d.teleno << endl;
    }
    friend void operator>>(istream &in, details &d)
    {
        cout << "Name : ";
        in >> d.name;
        cout << "DOB : ";
        in >> d.dob;
        cout << "Telephone no. : ";
        in >> d.teleno;
    }
};

int main()
{
    int n;
    string nm;
    vector<details> data;
    vector<details>::iterator it;
    int opt;
    while (true)
    {
        cout << "Choose one of the following " << endl;
        cout << "1.Add information " << endl;
        cout << "2.display information " << endl;
        cout << "3.Sort (according to name)" << endl;
        cout << "4.Search" << endl;
        cout << "5.exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter no. of persons :";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter information of person " << i + 1 << " : " << endl;
                details d1;
                cin >> d1;
                data.push_back(d1);
                cout << endl;
            }
            break;

        case 2:
            for (auto it : data)
            {
                cout << it;
                cout << endl;
            }
            break;

        case 3:
            sort(data.begin(), data.end(), [](details &d4, details &d5)
                 { return (d4.name < d5.name); });
            break;

        case 4:

            cout << "Enter person name to search : ";
            cin >> nm;

            for (it = data.begin(); it != data.end(); it++)
            {
                if (it->name == nm)
                {
                    cout << "Person is present!" << endl;
                    cout << "Information of required person is: " << endl;
                    cout << *it;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "Person with name " << nm << " is not present " << endl;
                    break;
                }
            }

            break;

        case 5:
            exit(0);
        }
    }

    return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> stateinfo;
    map<int, string>::iterator it;
    int n;
    string stname;
    int population;
    int opt;
    while (true)
    {
        cout << "Choose one of the following " << endl;
        cout << "1.Add information" << endl;
        cout << "2.dispaly information" << endl;
        cout << "3.Exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter the no. of states : ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter name of state : ";
                cin >> stname;
                cout << "Enter population    : ";
                cin >> population;
                stateinfo[population] = stname;
            }
            cout << endl;
            break;

        case 2:
            cout << "State population information " << endl;

            for (it = (--stateinfo.end()); it != (--stateinfo.begin()); it--)
            {
                cout << it->second << " : " << it->first << endl;
            }
            cout << endl;
            break;

        case 3:
            exit(0);
            break;
        }
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file;
    string s1;
    cout << "Make a new file." << endl;
    cout << "Give a name to file : ";
    cin >> s1;

    file.open(s1, ios ::out);

    if (!file)
    {
        cout << "File is not created yet." << endl;
    }
    cout << "File is created successfully." << endl;
    cout << endl;

    cout << "Write a file " << endl;
    string s2;
    cout << "Enter the text to write in file : ";
    cin >> s2;
    file << s2;

    cout << "text added to the file." << endl;
    file.close();
    cout << endl;

    cout << "Read a file " << endl;

    ifstream file1;
    file1.open(s1, ios::in);
    string s3;
    cout << "Text written in file " << s1 << " is :" << endl;

    while (file1.eof() == 0)
    {
        getline(file1, s3); // file>>s3
        cout << s3 << endl;
    }
    file1.close();
    

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char str [100];
    cout<<"Enter a string: ";
    cin>>str;
    cout <<"You entered: "<<str<< endl;
    cout <<"\nEnter another string: ";
    cin.getline(str,100);
    cout <<"\nYou entered: "<<str<<endl;
    return 0;
    }
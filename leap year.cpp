#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year - " <<endl;
    cin>>year;
    if(year%4==0)
    {
        cout<<"leap year";
    }
    else if(year%100==0)
    {
        if(year%400==0)
        {
            cout<<"leap year";
        }
        else
        {
            cout<<"non - leap year";
        }
    }
    else
    {
        cout<<"non - leap year";
    }
    return 0;
}

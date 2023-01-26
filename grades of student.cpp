#include<iostream>
using namespace std;
int main()
{

    int a;
    cout<< "enter the marks to check grade" <<endl;
    cin>>a;
    if(a<0 && a>100)
    {
        cout<<"wrong value";
    }
    else if(a<100 && a>=90)
    {
        cout<<"A grade";
    }
    else if(a<90 && a>=80)
    {
        cout<<"B grade";
    }
    else if(a<80 && a>=70)
    {
        cout<<"C grade";
    }
    else if(a<70 && a>=60)
    {
        cout<<"D grade";
    }
    else if(a<60 && a>=0)
    {
        cout<<"fail";
    }
    return 0;
}

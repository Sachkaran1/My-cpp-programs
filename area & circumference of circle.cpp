#include<iostream>
using namespace std;
int main()
{
    int r;
    double pi=3.14 , c,a;
    cout<<"for finding the circumference and area of circle, enter the values of" <<endl;
    cout<<"radius = "<<endl;
    cin>>r;
    c=pi*r*2;
    a=pi*r*r;
    cout<<"Circumference = "<<c <<endl;
    cout<<"area = "<<a <<endl;
    return 0;
}

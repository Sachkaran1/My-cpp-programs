#include<iostream>
using namespace std;
int main()
{
    int m,n,r,sum=0;
    cout<<"enter the number to check whether it is armstrong number or not"<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum = sum + (r*r*r);
    }
    if(sum==m)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {
        cout<<"not armstrong number"<<endl;
    }
    return 0;
}

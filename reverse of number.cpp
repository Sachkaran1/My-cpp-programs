#include<iostream>
using namespace std;
int main()
{
    int i,r,n,rev=0;
    cout<<"enter the number to find its reverse - "<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    cout<<rev;
    return 0;
}

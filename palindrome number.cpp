#include<iostream>
using namespace std;
int main()
{
    int i,r,n,m,rev=0;
    cout<<"enter the number - "<<endl;
    cin>>m;
    n=m;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
        if(n==rev)
        {
            cout<<"palindrome number";
        }
        else
        {
            cout<<"non palindrome number";
        }
    return 0;
}

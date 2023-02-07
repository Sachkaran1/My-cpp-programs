#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number to find its factors" <<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i <<endl;
    }
    return 0;
}

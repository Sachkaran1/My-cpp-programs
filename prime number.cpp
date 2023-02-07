#include<iostream>
using namespace std;
int main()
{
    int i , n ,count=0;
    cout<<"enter the number to check whether it is prime or not "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
       {
           cout<<"prime number";
       }
    else
    {
        cout<<"not a prime number";
    }
    return 0;
}

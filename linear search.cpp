#include<iostream>
using namespace std;
int main()
{
    int A[10],i,key;
    cout<<"enter the numbers = "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the key = "<<endl;
    cin>>key;
    for(i=0;i<10;i++)
    {
        if(key==A[i])
        {
            cout<<"key found at = "<<i<<endl;
            return 0;
        }
    }
    cout<<"key not found"<<endl;
}

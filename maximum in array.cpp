#include<iostream>
using namespace std;
int main()
{
    int A[6]={};
    int i,max;
    max=A[0];
    cout<<"enter the numbers = "<<endl;
    for(i=0;i<6;i++)
    {
        cin>>A[6];
    }
    for(i=0;i<6;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<" the maximum number is = "<<max<<endl;
    return 0;
}

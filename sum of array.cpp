#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int A[5] = {1,2,3,4,5};
    for(auto x:A)
    {
        sum=sum+x;
    }
    cout<<"sum is - "<<sum<<endl;
    return 0;
}

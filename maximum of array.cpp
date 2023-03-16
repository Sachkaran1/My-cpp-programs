#include<iostream>
using namespace std;
int main()
{
    int A[7] = {4,8,6,9,5,2,7};
    int max,i;
    max=A[0];
    for(i=1;i<7;i++)
    {
    if( A[i] > max)
    {
        max=A[i];
    }
    }
    cout<<max;
    return 0;
}

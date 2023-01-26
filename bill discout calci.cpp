#include<iostream>
using namespace std;
int main()
{
    int bill;
    int discount=0;
    cout<<"welcome to the bill calculator" <<endl;
    cout<<"enter the bill amount"<<endl;
    cin>>bill;
    if(bill>0 && bill<=500)
    {
        discount==0;
        cout<<"bill amount is = "<<bill<<endl;
        cout<<"discount = "<<discount <<endl;
        cout<<"total amount = " <<bill-discount <<endl;
    }
    else if(bill>500 && bill<=1000)
    {
        discount=bill*10/100;
        cout<<"bill amount is = "<<bill<<endl;
        cout<<"discount is = "<<discount <<endl;
        cout<<"total amount = " <<bill-discount <<endl;
    }
    else if(bill>1000)
    {
        discount=bill*20/100;
        cout<<"bill amount is = "<<bill<<endl;
        cout<<"discount is = "<<discount <<endl;
        cout<<"total amount = " <<bill-discount <<endl;
    }
    return 0;
}

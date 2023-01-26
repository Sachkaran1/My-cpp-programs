#include<iostream>
using namespace std;
int main()
{
    int option;
    cout<<"enter the option to be performed"<<endl;
    cout<<"1-Addition" <<endl <<"2-Substraction" <<endl <<"3-Multiplication" <<endl <<"4-Division" <<endl;
    cin>>option;

    float a,b;
    cout<<"enter the 2 numbers - " <<endl;
    cin>>a;
    cin>>b;

    switch(option)
    {
        {
            case 1 : int c=a+b;
            cout<<"the sum " <<a <<" + " <<b <<" is " <<c <<endl;
            break;
        }
        {
            case 2 : int c=a-b;
            cout<<"the difference " <<a <<" - " <<b <<" is " <<c <<endl;
            break;
        }
        {
            case 3 : int c=a*b;
            cout<<"the product " <<a <<" * " <<b <<" is " <<c <<endl;
            break;
        }
        {
            case 4 : int c=a/b;
            cout<<"the division " <<a <<" / " <<b <<" is " <<c <<endl;
            break;
        }
        default : cout<<"wrong operation entered" <<endl;
    }
    return 0;
}

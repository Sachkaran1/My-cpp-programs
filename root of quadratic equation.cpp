#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int a,b,c;
     float r1,r2;
     cout<<"enter the coefficients of the quadratic equation to find its root" << endl;
     cout<<"the coefficient of x^2 is = " <<endl;
     cin>>a;
     cout<<"the coefficient of x is = " <<endl;
     cin>>b;
     cout<<"the constant part is = " <<endl;
     cin>>c;
     r1=(-b + sqrt((b*b) - (4*a*c)))/(2*a);
     r2=(-b - sqrt((b*b) - (4*a*c)))/(2*a);

     if(((b*b)-(4*a*c)) < 0)
     {
         cout<<"imaginary roots" <<endl;
     }
     else if(((b*b)-(4*a*c)) == 0)
     {
         cout<<"equal and opposite roots = " << r1 << "& " << r2 <<endl;
     }
     else if(((b*b)-(4*a*c)) > 0)
     {
         cout<<"real roots = " << r1 << "& " << r2 <<endl;
     }

     cout<<"Thank you for using my program to find roots of quadratic equation" <<endl;
     return 0;
}

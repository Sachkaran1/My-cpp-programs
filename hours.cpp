#include<iostream>
using namespace std;
int main()
{
   int hour;
   cout<<"enter hour" <<endl;
   cin>>hour;
   if(hour>=9 && hour<=18)
   {
      cout<<"working hour";
   }
   else if(hour>18 && hour<=20)
   {
    cout<<"playing hour";
   }
   else if(hour>20 && hour<23)
   {
     cout<<"dinner time" <<endl;
   }
   else if(hour==23 && hour<=7)
   {
   cout<<"sleep time" <<endl;
   }
   return 0;
}

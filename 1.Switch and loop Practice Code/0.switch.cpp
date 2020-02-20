#include <iostream>
using namespace std;
int main()
{
   int a,b,f;

   cout<<"1.Addition"<<endl;
   cout<<"2.Subtraction"<<endl;
   cout<<"3.Multiplication"<<endl;
   cout<<"4.Division"<<endl;
   cout<<"choose :";
   cin>>f;

   switch (f)
   {
       case 1:
           cout<<"Enter 1st integer value :";
           cin>>a;
           cout<<"Enter 2nd integer value :";
           cin>>b;
           cout<<"Addition :"<<a+b<<endl;
               break;
       case 2:
           cout<<"Enter 1st integer value :";
           cin>>a;
           cout<<"Enter 2nd integer value :";
           cin>>b;
           cout<<"Subtraction :"<<a-b<<endl;
                break;
       case 3:
           cout<<"Enter 1st integer value :";
           cin>>a;
           cout<<"Enter 2nd integer value :";
           cin>>b;
           cout<<"Multiplication :"<<a*b<<endl;
               break;
       case 4:
           cout<<"Enter 1st integer value :";
           cin>>a;
           cout<<"Enter 2nd integer value :";
           cin>>b;
           cout<<"Division :"<<a/b<<endl;
                break;
       default:
        cout<<"Error"<<endl;
   }




   return 0;
}

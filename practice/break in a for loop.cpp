#include<iostream>
using namespace std;
int main()
{
      int var;
      for (var=100;var>=10;var--)
      {
           cout<<"var : " <<var<<endl;
           if (var==99)
           {
               break;
           }
      }
     cout<<"Out of for-loop";
     return 0;
}

#include<iostream>
using namespace std;
int main(){
   int a=10;
   do {
      if(a==15){
         a=a+1;
         continue;
      }
      cout<<"value of a: " <<a<<endl;
      a++;
   }
   while(a<20);

   return 0;
}

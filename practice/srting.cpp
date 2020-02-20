#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int len1,len2,res;
    char str1[50],str2[50];
    cin>>str1;
    cin>>str2;
    ///////strlen///////
    len1=strlen(str1);
    len2=strlen(str2);
    cout<<"Length of string 1 is :"<<len1<<endl;
    cout<<"Length of string 2 is :"<<len2<<endl;
    ///////strcmp///////
    res=strcmp(str1,str2);
    if(res==0)
        cout<<"The strings are equal..."<<endl;
    else
        cout<<"The result of compare function is "<<res<<endl;
    ///////strcat///////
    strcat(str1,str2);
    cout<<"After concatenation : "<<str1<<endl;
   ////////strcpy///////
   strcpy(str1,str2);
   cout<<"After copying : "<<str1<<endl;
   cout<<"Befor coppying :"<<str2<<endl;s
   ////////strrev//////
   strrev(str1);
   cout<<"After reverse : "<<str1<<endl;
}

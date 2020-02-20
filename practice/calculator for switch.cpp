#include<iostream>
#include<string>
using namespace std;
int main(){
            int a,b,chose;
            string help;
            cout<<"ENTER NUMBER FOR a : ";
            cin>>a;
            cout<<endl;
            cout<<"ENTER NUMBER FOR b : ";
            cin>>b;
            cout<<endl<<endl;
                            cout<<"1) ADDITION "<<endl;
                            cout<<"2) SUBTRACTION "<<endl;
                            cout<<"3) MULTIPLICATION "<<endl;
                            cout<<"4) DIVISION "<<endl<<endl;
                            cout<<"WHAT YOU WANT : ";
                            cin>>chose;
                            cout<<endl;
          switch(chose){
                    case 1:
                        cout<<"ADDITION IS : "<<a+b;
                        break;
                    case 2:
                        cout<<"SUBTRACTION IS : "<<a-b;
                        break;
                    case 3:
                        cout<<"MULTIPLICATION IS : "<<a*b;
                        break;
                    case 4:
                        cout<<"DIVISION IS : "<<float(a+b);
                        break;
          }
          cout<<endl;
}

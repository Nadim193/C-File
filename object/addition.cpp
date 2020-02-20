#include<iostream>
using namespace std;

void start(){
          cout<<"USER INPUT START....";
}

void off(){
          cout<<"USER INPUT OFF....";
}

void out(){
          cout<<"OUTPUT....";
}

class addition{
                int a,b;
            public:
                int put_ab(int x,int y);
                int geta();
                int getb();
                int sum();
                int sub();
};

int addition::put_ab(int x,int y){
                                a=x;
                                b=y;
}

int addition::geta(){
                    return a;
}

int addition::getb(){
                    return b;
}

int addition::sum(){
                    return a+b;
}

int addition::sub(){
                    return a-b;
}

int main(){
            addition ob1;
            addition ob2;
            start();
            cout<<endl<<endl;
            int c,d;
            cout<<"ENTER VALUE FOR A : ";
            cin>>c;
            cout<<endl;
            cout<<"ENTER VALUE FOR B : ";
            cin>>d;
            cout<<endl;
            ob1.put_ab(c,d);
            out();
            cout<<endl<<endl;
            cout<<"ADDITION...."<<endl<<endl;
            cout<<"A IS : "<<ob1.geta()<<endl<<endl;
            cout<<"B IS : "<<ob1.getb()<<endl<<endl;
            cout<<"A+B IS : "<<ob1.sum()<<endl<<endl;
            cout<<"SUBTATION...."<<endl<<endl;
            cout<<"A IS : "<<ob1.geta()<<endl<<endl;
            cout<<"B IS : "<<ob1.getb()<<endl<<endl;
            cout<<"A-B IS : "<<ob1.sub()<<endl<<endl;
            off();
            cout<<endl<<endl;
            start();
            cout<<endl<<endl;
            int e,f;
            cout<<"ENTER VALUE FOR A : ";
            cin>>e;
            cout<<endl;
            cout<<"ENTER VALUE FOR B : ";
            cin>>f;
            cout<<endl;
            ob2.put_ab(e,f);
            out();
            cout<<endl<<endl;
            cout<<"ADDITION...."<<endl<<endl;
            cout<<"A IS : "<<ob2.geta()<<endl<<endl;
            cout<<"B IS : "<<ob2.getb()<<endl<<endl;
            cout<<"A+B IS : "<<ob2.sum()<<endl<<endl;
            cout<<"SUBTATION...."<<endl<<endl;
            cout<<"A IS : "<<ob2.geta()<<endl<<endl;
            cout<<"B IS : "<<ob2.getb()<<endl<<endl;
            cout<<"A-B IS : "<<ob2.sub()<<endl<<endl;
            off();
            cout<<endl<<endl;

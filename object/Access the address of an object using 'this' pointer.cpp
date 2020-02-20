#include<iostream>
using namespace std;

class example{
        public:
            example* address(){
                      return this;
            }
};

int main(){
            example x1,x2,x3;
            cout<<"ADDRESS OF EXAMPLE 1 : "<<x1.address()<<endl;
            cout<<"ADDRESS OF EXAMPLE 2 : "<<x2.address()<<endl;
            cout<<"ADDRESS OF EXAMPLE 3 : "<<x3.address()<<endl;
}

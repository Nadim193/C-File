#include<iostream>
using namespace std;

void test(){
        class test1{
                    int num;
                public:
                    int putnum(int n){
                                    num=n;
                    }
                    int getnum(){
                                return num;
                    }
}t1;
        cout<<"INSIDE TEST FUNCTION "<<endl;
        //test1 t1;
        t1.putnum(100);
        cout<<"VALUE OF t1 : "<<t1.getnum()<<endl;
}

int main(){
            class test2{
                    int num;
                public:
                    int putnum(int n){
                                    num=n;
                    }
                    int getnum(){
                                return num;
                    }
}t2;

        test();
        //test2 t2;
        t2.putnum(200);
        cout<<"INSIDE MAIN FUNCTION "<<endl;
        cout<<"VALUE OF t2 : "<<t2.getnum()<<endl;
}

#include<iostream>
using namespace std;

class person{
        private:
            int nid;
        protected:
            int contract;
        public:
            void setnid(int i){
                        nid=i;
            }
            void setcon(int c){
                            contract=c;
            }
            void showc(){
                        cout<<"contract : "<<contract<<endl;

            }
            void shown(){
                        cout<<"NID : "<<nid<<endl;

            }
};
class student:public person{
                        int id;
                    public:
                        void setid(int d){
                                    id=d;
                        }
                        void showl(){
                                    person::showc();
                                    person::shown();
                                    cout<<"ID NEMBER FOR STUDENT : "<<id<<endl;
                        }
};
int main(){
        student ob;
        ob.setnid(78907);
        ob.setcon(3546578);
        ob.setid(41770);
        ob.showl();
}

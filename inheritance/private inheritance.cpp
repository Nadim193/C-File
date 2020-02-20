#include<iostream>
#include<string>
using namespace std;

class person{
        private:
            int nid;
        protected:
            int contract;
        public:
            int setnid(int i){
                            nid=i;
            }
            int getnid(){
                        return nid;
            }
};
class student:private person{
                        int id;
                    public:
                        void setid(int d){
                                    id=d;
                        }
                        void showid(){
                                    cout<<"ID NEMBER FOR STUDENT : "<<id;
                        }
};
int main(){
        student ob;
        ob.setnid(78907);
        ob.setid(41770);
        cout<<"NID : "<<ob.getnid();
        ob.showid();
}

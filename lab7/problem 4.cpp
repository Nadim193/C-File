#include<iostream>
#include<string>
using namespace std;

class building{
            int floors ,rooms,area;
        public:
            building(int f,int r,int a){
                                floors=f;
                                rooms=r;
                                area=a;
            }
            void show(){
                        cout<<"BUILDING:"<<endl;
                        cout<<"NUMBER OF FLOORS : "<<floors<<endl;
                        cout<<"NUMBER OF ROOMS : "<<rooms<<endl;
                        cout<<"AREA OF BUILDING : "<<area<<endl;
            }
};

class house:public building{
                        int bedrooms,bathrooms;
                    public:
                        house(int b,int ba,int f,int r,int a):building(f,r,a){
                                          bedrooms=b;
                                          bathrooms=ba;
                        }
                        void show(){
                                    building::show();
                                    cout<<endl;
                                    cout<<"HOUSE:"<<endl;
                                    cout<<"NUMBER OF BEDROOMS : "<<bedrooms<<endl;
                                    cout<<"NUMBER OF BATHROOMS : "<<bathrooms<<endl;
                        }
};

class office:public building{
                    int fire,telephones;
                public:
                    office(int fi,int te,int f,int r,int a):building(f,r,a){
                                            fire=fi;
                                            telephones=te;
                    }
                    void show(){
                                cout<<endl;
                                cout<<"OFFICE:"<<endl;
                                cout<<"number of fire extinguishers : "<<fire<<endl;
                                cout<<"NUMBER OF TELEPHONE : "<<telephones<<endl;
                    }
};
int main(){
            house h(5,3,10,50,78);
            h.show();
            office f(3,5,10,50,78);
            f.show();
}

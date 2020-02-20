#include<iostream>
using namespace std;

class items{
            int itemcode;
            float itemprice;
        public:
            int setItemCode(int icode){
                                    itemcode=icode;
            }
            float setItemPrice(float iprice){
                                    itemprice=iprice;
            }
            void showItem(void){
                            cout<<"ITEM CODE : "<<itemcode<<endl;
                            cout<<"ITEM PRICE : "<<itemprice;
            }
};
int main(){
            items ob;
            ob.setItemCode(345);
            ob.setItemPrice(200);
            ob.showItem();

}

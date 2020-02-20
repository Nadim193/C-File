#include<iostream>
#include<string>
using namespace std;

int i;

struct student{
                int roll,age;
                char name[50];
};

struct student even_roll(struct student a[5]){
                                            for(i=0;i<5;i++){
                                                            if(a[i].roll%2==0){
                                                        cout<<"NAME : "<<a[i].name<<endl;
                                                            }
                                            }
                            return a[i];
}

struct student age(struct student a[5]){
                            for(i=0;i<5;i++){
                                        if(a[i].age==14){
                                                cout<<"ENTER NAME : "<<a[i].name<<endl;
                                        }
                            }
                            return a[i];
}
struct student detail(struct student a[5]){
                                    if(cin>>i){
                                        cout<<a[i].name<<endl;
                                        cout<<a[i].roll<<endl;
                                    }
                            return a[i];
}
int main(){
          struct student a[5];
                for(int i=0;i<5;i++){
                            cout<<"Enter the name of the student : "<<i+1<<endl;
                            cin>>a[i].name;
                            cout<<"Enter the roll number : "<<endl;
                            cin>>a[i].roll;
                            cout<<"Enter the age number : "<<endl;
                            cin>>a[i].age;
           }
        cout<<a[5].student age(student a[5]);
        cout<<a[5].student even_roll(student a[5]);
}



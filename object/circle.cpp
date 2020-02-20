#include <iostream>    // using IO functions
#include <string>      // using string
using namespace std;

class Circle {
            double radius;      // Data member (Variable)
            string color;       // Data member (Variable)

        public:
                        // Constructor with default values for data members
            Circle(double r = 1.5, string c = "red") {
            radius = r;
            color = c;
            }

   double getRadius(){  // Member function (Getter)
                    return radius;
   }

   string getColor(){   // Member function (Getter)
                    return color;
   }

   double getArea(){    // Member function
                    return radius*radius*3.1416;
   }
};   // need to end the class declaration with a semi-colon

// Test driver function
int main(){
   // Construct a Circle instance
   Circle c1(1.2, "blue");
   cout <<"Radius= "<<c1.getRadius()<<endl<<"Area= "<<c1.getArea()<<endl
        <<"Color="<<c1.getColor()<<endl<<endl;

   // Construct another Circle instance
   Circle c2(3.4); // default color
   cout <<"Radius=" << c2.getRadius()<<endl<<endl <<"Area=" << c2.getArea()<<endl<<endl
        <<"Color=" << c2.getColor()<<endl<< endl;

   // Construct a Circle instance using default no-arg constructor
   Circle c3;      // default radius and color
   cout <<"Radius=" << c3.getRadius()<<endl<<endl <<"Area=" << c3.getArea()<<endl<<endl
        <<"Color=" << c3.getColor()<<endl<< endl;
   return 0;
}

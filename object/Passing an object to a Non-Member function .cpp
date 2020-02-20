#include <iostream>
using namespace std;

class Number
{
	private:
		int num;

	public:
	void setNum(int n)
	{
		num = n;
	}

	int getNum(void)
	{
		return num;
	}
};

//a non member function
void myFunction(class Number N, int number)
{
	//calling setter function and asigning the number
	N.setNum(number) ;
	//calling getter function and printing the value
	cout<<"The value is: " << N.getNum() << endl;
}

//Main function
int main()
{
	//local variable of the main
	int num;
	//object to Number class
	Number objN;

	num = 10;

	//supplying this 'num' to the class by passing
	//the name to the class in a non memberfunction
	myFunction (objN, num);

	return 0;
}


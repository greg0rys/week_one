#include "main.h"
using namespace std;
int main()
{
	string greg;
	cout << "Please enter your name: ";
	getline(cin,greg);
	sayHello(greg);
	return EXIT_SUCCESS;
}

void sayHello(string name)
{
	cout << "hello world! " << endl;
	cout << "your name is: " << name << endl;
}

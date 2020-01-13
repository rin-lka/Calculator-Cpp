#include <iostream>
#include <Windows.h>
#include <string.h>

using namespace std;

int addNumbers(int num1, int num2)
{
	return num1 + num2;
}

int subtractNumbers(int num1, int num2)
{
	return num1 - num2;
}

int divideNumbers(int num1, int num2)
{
	return num1 / num2;
}

int multiplyNumbers(int num1, int num2) {
	return num1 * num2;
}

void PrintLog(int number) {
	cout << "Output: " << number << endl;
}

void PrintLog(string text) {
	cout << "Output: " << text << endl;
}


int main()
{

	int a;
	int b;
	char whatdo;

	cout << "Enter first number" << endl;
	cin >> a;


	cout << "Enter second number" << endl;
	cin >> b;

	do {
		//does this atleast once, regardless of if the while() is true or false
		cout << "Enter Character: +, -, /, *" << endl;
		cin >> whatdo;
	} while (whatdo != '+' && whatdo != '-' && whatdo != '/' && whatdo != '*');
	// if all are true statement is true - if JUST ONE is false then the whole argument is false

	//	&& -REQUIRES ALL TO BE TRUE
	//	|| -REQUIRES ATLEAST ONE TO BE TRUE 		

	//if user typed '+'
	if (whatdo == '+') {
		PrintLog(addNumbers(a, b));
	}
	//if user typed '-'
	else if (whatdo == '-') {
		PrintLog(subtractNumbers(a, b));
	}
	//if user typed '/'
	else if (whatdo == '/') {
		PrintLog(divideNumbers(a, b));
	}
	//if user typed '*'
	else {
		PrintLog(multiplyNumbers(a, b));
	}

	string useless = "";
	cin >> useless;

	return 0;
}

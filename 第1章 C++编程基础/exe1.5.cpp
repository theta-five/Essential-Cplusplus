#include<iostream>
using namespace std;
#include<cstring>
#include<string>

void TestOfCStyle() {

	const int length = 100;

	char name[length];

	cout << "Enter your name(C style): ";
	cin >> name;

	while (strlen(name) < 3) {
		
		cout << "Make sure the length of your name is greater 2 and enter your name again: ";
		cin >> name;
	}
	cout << "Your name is " << name << endl;
	cout << strlen(name) << endl;
}

void TestOfString() {

	string name;

	cout << "Enter your name(string): ";
	cin >> name;

	while (name.size() < 3) {

		cout << "Make sure the length of your name is greater 2 and enter your name again: ";
		cin >> name;
	}
	cout << "Your name is " << name << endl;
}

int main() {

	TestOfCStyle();

	TestOfString();

	system("pause");

	return 0;
}
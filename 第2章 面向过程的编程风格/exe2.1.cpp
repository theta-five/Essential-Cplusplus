#include<iostream>
using namespace std;
//输入键盘上ctrl + Z 退出循环
bool Fib(int pos, unsigned& elem);

int main() {

	int pos = 0;
	cout << "Enter a position: ";
	
	unsigned elem = 0;

	while (cin >> pos) {
		if (Fib(pos, elem)) {
			cout << "element # " << pos << " is " << elem << endl;
		}
		else {
			cout << "Sorry, could not calculate element # " << pos << endl;
		}
		cout << "Enter a position: ";
	}

	system("pause");

	return 0;
}

bool Fib(int pos, unsigned& elem) {

	if (pos <= 0 || pos > 1024) {
		elem = 0;
		return false;
	}

	elem = 1;
	int n2 = 1;
	int n1 = 1;

	for (int i = 3; i <= pos; i++) {
		elem = n2 + n1;
		n1 = n2;
		n2 = elem;
	}
	return true;
}
#include<iostream>
using namespace std;
#include<array>
#include<string>

const int SIZE = 4;

int main() {

	array<string, SIZE> arr = { "Great","try again","Come on, again", "Never give up" };
	int select = 0;

	cout << "Enter the count(0-3): ";
	cin >> select;

	switch (select){
	case 0: {
		cout << arr[0] << endl;
		break;
	}

	case 1:	{
		cout << arr[1] << endl;
		break;
	}
	case 2: {
		cout << arr[2] << endl;
		break;
	}
	case 3: {
		cout << arr[3] << endl;
		break;
	}

	default:
		break;
	}

	system("pause");

	return 0;
}
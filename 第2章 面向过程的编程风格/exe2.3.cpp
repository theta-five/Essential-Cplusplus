#include<iostream>
using namespace std;
#include<vector>

inline bool SizeOK(int size);

void PrintPen(const vector<int>* pen, const string& s = "int");

int main() {

	vector<int> pen;
	int size = 0;
	cout << "Enter size: ";
	cin >> size;

	if (SizeOK(size)) {
		for (int i = 0; i < size; i++) {
			pen.push_back((i + 1) * (3 * (i + 1) - 1) / 2);
		}
	}

	PrintPen(&pen);

	system("pause");

	return 0;
}

bool SizeOK(int size) {

	const unsigned SIZE = 1024;

	if (size >= 0 && size < SIZE) {
		return true;
	}

	return false;
}

void PrintPen(const vector<int>* pen, const string& s) {

	if (!(*pen).empty()) {

		cout << "The data type in vector pen is " << s << endl;

		for (int x : (*pen)) {
			cout << x << " ";
		}
		cout << endl;
	}
}
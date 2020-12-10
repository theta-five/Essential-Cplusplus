#include<iostream>
using namespace std;
#include<vector>

void PrintPen(const vector<int>* pen, const string& s = "int");

const vector<int>* Pen(int size);

int Elem(size_t pos, const vector<int>* pen);

int main4() {

	const vector<int>* pen;
	int size = 0;
	cout << "Enter size: ";
	cin >> size;

	pen = Pen(size);
	
	PrintPen(pen);

	int pos = 0;
	cout << "Enter the position: ";
	cin >> pos;
	cout << Elem(pos, pen) << endl;

	system("pause");

	return 0;
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

const vector<int>* Pen(int size) {

	const unsigned SIZE = 1024;

	if (size <= 0 || size > SIZE) {
		return 0;
	}

	static vector<int> pen;

	for (int i = pen.size(); i < size; i++) {

		pen.push_back((i + 1) * (3 * (i + 1) - 1) / 2);
	}

	return &pen;
}

int Elem(size_t pos, const vector<int>* pen) {

	if (pos < 0 || pos > (*pen).size()) {
		cerr << " false " << endl;
		exit(EXIT_FAILURE);
	}

	return (*pen)[pos - 1];
}
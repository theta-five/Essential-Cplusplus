#include<iostream>
using namespace std;
#include<vector>
#include<array>

template<class T>
const T& max1(const T& a, const T& b) {

	return a > b ? a : b;
}


template<class T>
T max1(vector<T>& v) {

	if (v.size() == 0) {
		cout << "No data in vector." << endl;
		exit(EXIT_FAILURE);
	}

	T tem = v[0];
	int size = v.size();
	for (int i = 0; i < size; i++) {
		if (v[i] > tem) {
			tem = v[i];
		}
	}
	return tem;
}

template<class T>
T max1(T arr[], const int size) {

	if (size <= 0) {
		cout << "No data in array." << endl;
		exit(EXIT_FAILURE);
	}

	T tem = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > tem) {
			tem = arr[i];
		}
	}
	return tem;

}

int main() {
	
	int a = 12;
	int b = 23;
	int c = 10;

	cout << max1(a, b) << endl;
	cout << max1(12, a) << endl;
	cout << max1(max1(a, b), c) << endl;
	cout << "**************" << endl;

	string s1 = "hello";
	string s2 = "C++";
	cout << max1(s1, s2) << endl;
	cout << max1("a", "m") << endl;
	cout << "**************" << endl;

	vector<int> v1 = { 1, 2, 9, 90 };
	cout << max1(v1) << endl;

	vector<string> v2 = { "main", "function", "class", "template" };
	cout << max1(v2) << endl;

	vector<double> v3 = { 1.2, 3.4, 36.5 };
	cout << max1(v3) << endl;
	cout << "***************" << endl;

	const int size = 10;
	int arr[size] = { 2, 4, 56, -8 };
	cout << max1(arr, size) << endl;

	string arr1[size] = { "C++", "head", "pointer", "reference" };
	cout << max1(arr1, size) << endl;

	system("pause");

	return 0;
}

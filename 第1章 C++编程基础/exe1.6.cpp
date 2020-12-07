#include<iostream>
using namespace std;
#include<vector>

int main6() {

	int num = 0;

	vector<int> v;
	int arr[100] = { 0 };
	int i = 0;
	cout << "Enter a series of numbers: ";

	while (cin >> num && i < 100){

		v.push_back(num);
		arr[i] = num;
		i++;
	}

	int sumOfVector = 0;
	int sumOfArray = 0;

	for (int x : v) {
		sumOfVector += x;
	}

	for (int y : arr) {
		sumOfArray += y;
	}

	cout << "The sum of vector is " << sumOfVector << ". The average of vector is " << 1.0 * sumOfVector / i << endl;
	cout << "The sum of array is " << sumOfArray << ". The average of array is " << 1.0 * sumOfArray / i << endl;

	system("pause");

	return 0;
}
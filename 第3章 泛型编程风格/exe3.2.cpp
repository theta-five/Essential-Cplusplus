#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>

bool longer(string& a, string& b) {

	return a.size() < b.size();

}

int main() {

	vector<string> str;

	ifstream fin("test.txt");

	if (fin.is_open()) {
		string s;
		while (fin >> s) {
			str.push_back(s);
		}
	}

	fin.close();

	//sort(str.begin(), str.end(), [](string& a, string& b) { return a.size() < b.size(); });// use lambda expression
	sort(str.begin(), str.end(), longer);

	for (string st : str) {
		cout << st << " ";
	}
	cout << endl;
	
	system("pause");

	return 0;
}
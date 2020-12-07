#include<iostream>
using namespace std;
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>


int main7() {

	ofstream fout("vector.txt");

	if (fout.is_open()) {
		fout << "Hello World" << endl;
		fout << "Come on" << endl;
	}

	fout.close();

	ifstream fin("vector.txt");
	if (!fin.is_open()) {
		cerr << "Can not open this file" << endl;
	}
	vector<string> res;
	string s;

	while (getline(fin, s)) {
		res.push_back(s);
	}

	fin.close();

	sort(res.begin(), res.end());

	ofstream resfile("res.txt");

	if (resfile.is_open()) {
		
		for (string st : res) {
			resfile << st << endl;
		}
		resfile << endl;
	}

	resfile.close();



	system("pause");

	return 0;
}
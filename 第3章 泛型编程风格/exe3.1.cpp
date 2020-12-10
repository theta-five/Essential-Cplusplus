#include<iostream>
using namespace std;
#include<map>
#include<set>
#include<fstream>
#include<string>
#include<vector>


int main() {

	set<string> exclusion = { "a", "an", "or", "the", "and", "but" };
	map<string, int> ms;

	ifstream fin("test.txt");

	if (fin.is_open()) {
		string str;
		while (fin >> str) {
			if (!exclusion.count(str)) {
				ms[str]++;
			}
		}
		
	}

	fin.close();

	cout << "Enter string you want to find(q to quit): ";
	string s;
	getline(cin, s);
	
	while (s != "q") {
		if (ms.count(s)) {
			cout << s << " is in the map." << endl;
		}
		else {
			cout << s << " is not in the map." << endl;
		}
		cout << "Enter string you want to find(q to quit): ";
		getline(cin, s);
	}

	for (auto x : ms) {
		cout << "string: "  << x.first << " \tcounts: " << x.second << endl;
	}

	system("pause");

	return 0;
}
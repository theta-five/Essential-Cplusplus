#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>


int main() {

	map<string, vector<string>> family;

	string firtName;
	vector<string> lastName;

	string arrayFirstName[5] = { "Li", "Zhao", "Qian", "Sun", "Zhou" };

	vector<string> arrayLastName[5] = { {"Ming", "Hai", "Joe"}, {"Min", "Hellen", "Jim", "Jack"}, {"Mike", "Alice", "Cindy"}, {"Mike"}, };

	for (int i = 0; i < 5; i++) {

		family.insert({ arrayFirstName[i], arrayLastName[i] });
	}

	cout << "Enter the first name you want to find: ";
	string fname;

	map<string, vector<string>>::iterator it;
	while (getline(cin, fname)) {

		it = family.find(fname);

		if (it != family.end()) {
			cout << "There is " << fname << " family in the Family." << endl;
			int count = it->second.size();
			if (count != 0) {
				cout << "And there are " << count << " children in " << fname << " family." << endl;
				for (int i = 0; i < count; i++) {
					cout << it->second[i] << ", ";
				}
				cout << endl;
			}
			else {
				cout << "But there are no children in " << fname << " family." << endl;
			}
		}
		else {
			cout << "There is no " << fname << " family in the Family." << endl;
		}

		cout << "Enter the first name you want to find: ";
		getline(cin, fname);
	}

	for (auto x : family) {
		cout << "FirstName: " << x.first << endl;
		int size = x.second.size();
		if (size == 0) {
			cout << x.first << " family has no child." << endl;
		}
		else {
			cout << x.first << " family has " << size << " children." << endl;
			for (int i = 0; i < size; i++) {
				cout << x.second[i] << ", ";
			}
			cout << endl << "***************" << endl;
		}
	}

	system("pause");

	return 0;
}
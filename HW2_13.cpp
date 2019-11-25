/*
TASK : HW2_13
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string id;
	string fname;
	string lname;
	cin >> id >> fname >> lname;
	cout << id.substr(0,2);
	cout << fname.substr(fname.length()-2);
	cout << lname.substr(lname.length()-3);
}

/*
TASK : HW2_14
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string word;
	getline(cin, word);
	while(word.find("dog") != string::npos){
		word.replace(word.find("dog"), 3, "cat");
	}
	cout << word;
}

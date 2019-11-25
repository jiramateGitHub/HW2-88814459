/*
TASK : HW2_15
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	int i,n;
	string word,reword;
	getline(cin,word);
	n = word.length();
	for(i=1;i<=n;i++){ 
		reword.insert(i-1,1,word[n-i]);
	}
	cout << reword << endl;
}

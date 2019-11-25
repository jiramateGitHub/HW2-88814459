/*
TASK : HW1_06
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	string subjects;
	int credit[n];
	double grade[n];
	double gpa,sum_g,sum_c;	
	for(int i=0;i<n;i++){
		cin >> subjects >> credit[i] >> grade[i];
	}
	for(int i=0;i<n;i++){
		sum_g += (credit[i] * grade[i]) ;
		sum_c += credit[i];
	}
	gpa = sum_g / sum_c;
	cout << fixed << setprecision(2) << gpa;
	return 0;
}
	

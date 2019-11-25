/*
TASK : HW2_07
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,sum=0;
	cin >> n;
	int num[n];
	for(int i=0;i<n;i++){
		cin >> num[i];
	}
	for(int i=0;i<n;i++){
		if (i % 2 == 1){
			sum += num[i];	
		}
		continue;
	}
	cout << sum;
	return 0;
}

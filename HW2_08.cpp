/*
TASK : HW2_08
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,check,set=0;
	int value;
	cin >> n;
	int setA[n];
	for(int i=0;i<n;i++){
		cin >> value;
		check = 0;
		for(int j=0;j<set;j++){
			if(setA[j] == value){
				check++;	
			}
		}
		if(check == 0){
			setA[set] = value;
			set++;
		}
	}
	for(int i=0;i<set;i++){
		cout << setA[i];
	}
}

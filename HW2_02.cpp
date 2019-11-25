/*
TASK : HW2_02
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int i,j,k,num;
	cin >> num;
	int l = num;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(j<=i){
				cout << "A" ;
			}
			else{
				cout << "-";
			}
		}
		for(k=0;k<num;k++){
			if(k+1>=l){
				cout << "A" ;
			}
			else{
				cout << "-";
			}
		}
		cout << endl;
		--l;
	}
	for(i=num-1;i>=1;i--){
		for(j=0;j<num;j++){
			if(j<i){
				cout << "A" ;
			}
			else{
				cout << "-";
			}
		}
		for(k=num;k>0;k--){
			if(i<k){
				cout << "-" ;
			}
			else{
				cout << "A";
			}
		}
		cout << endl;
	}
	return 0;
}

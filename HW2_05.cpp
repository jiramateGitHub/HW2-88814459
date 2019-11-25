/*
TASK : HW2_05
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int num,i,j;
	cin >> num;
	for(i=num;i>0;i--){
		for(j=0;j<num;j++){
			if(j>=i){
				cout<< " " ;
			} 
			else{
				cout << j+1;
			}
		}
		for(j=num-1;j>0;j--){
			if(j>i){
				cout <<" " ; 
			}
			else{
				cout << j;
			} 
		}
		cout << endl;
	}
	return 0;
}

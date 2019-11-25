/*
TASK : HW2_01
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
	for(i=0;i<=num;i++){
		for(j=0;j<i;j++){
			if(i==0 || j==0 || i==num || j==num || i==j+1){
				cout << "0" << " ";
			}else{
				cout << "1" << " ";
			}
		}
			cout  << endl;		
	}
	
}

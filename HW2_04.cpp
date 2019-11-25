/*
TASK : HW2_04
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	/*int n,i,j,num=1;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			cout << " ";
			if(i<=j){
				if(num<10){
					cout << "0" << num;
					num++;
				}else{
					cout << num;
					num++;
				}
			}
		}
	cout << endl;
	}
	return 0;*/
	
	int n,i,j,k,num=1;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=n;j>i;j--){
			cout << "   ";
		}
		for(k=0;k<j+1;k++){
			if(i<=j){
				cout << " ";
				if(num<10){
					cout << "0" << num;
					num++;
					num++;
				}else{
					cout << num;
					num++;
					num++;
				}
			}
		}
	cout << endl;
	}
	return 0;
}

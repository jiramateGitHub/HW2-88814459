/*
TASK : HW2_03
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int num,i,j,n;
	cin >> n;
	for(i=0;i<=n;i++){
		for(j=0;j<i;j++){
			num++;
			cout << num << " ";
		}
			cout  << endl;		
	}
	
}

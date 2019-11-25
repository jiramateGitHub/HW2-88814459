/*
TASK : HW2_12
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
using namespace std;
int main(){
	int i,j,m,n;
	cin >> m >> n;
	int setA[m][n],setB[m][n];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> setA[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> setB[i][j];
		}
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout << setA[i][j] + setB[i][j] << " ";	
		}
		cout << endl;
	}
	
}

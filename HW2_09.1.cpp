/*
TASK : HW2_09
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	int nA,nB,checkA,checkB,setOfA=0,setOfB=0;
	int valueA,valueB;
	cin >> nA;
	int setA[nA];
	for(int i=0;i<nA;i++){
		cin >> valueA;
		checkA = 0;
		for(int j=0;j<setOfA;j++){
			if(setA[j] == valueA){
				checkA++;	
			}
		}
		if(checkA == 0){
			setA[setOfA] = valueA;
			setOfA++;
		}
	}
	
	cin >> nB;
	int setB[nB];
	for(int i=0;i<nB;i++){
		cin >> valueB	;
		checkB = 0;
		for(int j=0;j<setOfB;j++){
			if(setB[j] == valueB){
				checkB++;	
			}
		}
		if(checkB == 0){
			setB[setOfB] = valueB;
			setOfB++;
		}
	}
	
	int checkAsubB=0,checkBsubA=0,checkAeqB=0,checkAnoB=0;
	
	if(setOfA == setOfB){
		for(int i=0;i<setOfA;i++){
			if(setA[i] == setB[i]){
				checkAeqB++;
			}
			if(setA[i] != setB[i]){
				checkAnoB++;
			}
		}
		if(checkAeqB == setOfA || checkAeqB == setOfB){
			cout << "A equal B" <<endl;
		}
		if(checkAnoB == setOfA || checkAnoB == setOfB){
			cout << "A Not equal B" <<endl;
		}
	}
	
	if(setOfA > setOfB){
		for(int i=0;i<setOfA;i++){
			if(setA[i] == setB[i]){
				checkBsubA++;
			}
			if(setA[i] != setB[i]){
				checkAnoB++;
			}
		}
		if(checkBsubA == setOfA ){
			cout << "B is a subset of A" <<endl;
		}
		if(checkAnoB == setOfA ){
			cout << "A Not equal B" <<endl;
		}
	}else if(setOfB > setOfA){
		for(int i=0;i<setOfB;i++){
			if(setA[i] == setB[i]){
				checkAsubB++;
			}
			if(setA[i] != setB[i]){
				checkAnoB++;
			}
		}
		if(checkAsubB == setOfB){
			cout << "A is a subset of B" <<endl;
		}
		if(checkAnoB == setOfB){
			cout << "A Not equal B" <<endl;
		}
	}
	
	for(int i=0;i<nA;i++){
		cout << setA[i] ;
	}
	cout << endl;
	for(int i=0;i<nB;i++){
		cout << setB[i];
	}
	
}

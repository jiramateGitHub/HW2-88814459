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
//-----------------------------------------------------	
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
//-----------------------------------------------------	
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
//-----------------------------------------------------	
/*	for(int i=0;i<setOfA;i++){
		cout << setA[i]; 
	}
	cout << endl;
	for(int i=0;i<setOfB;i++){
		cout << setB[i]; 
	}
	cout << endl; */
//-----------------------------------------------------		
	int count=0;
		for(int i=0;i<setOfA;i++){
		for(int j=0;j<setOfB;j++){
			 if(setA[i] == setB[j]){
				count++;
			}
		}
	}
	
	if(count == setOfA  && setOfA == setOfB){
		cout << "A equal B";
	}else if(setOfA < setOfB && setOfA == count){
		cout << "A is a subset of B";
	}else if(setOfB < setOfA && setOfB == count){
		cout << "B is a subset of A";
	}else{
		cout << "A not equal B";
	}
	
}

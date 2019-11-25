/*
TASK : HW2_11
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	int i,n,high=0,low=0;
	double average;
	cin >> n;
	int score[n];
	for (i=0;i<n;i++){
		cin >> score[i];
		average += score[i];	
		}
	average = average / n;
	for (i=0;i<n;i++){
		if(score[i] < average){
			low++;
		}else{
			high++;
		}
	}
	cout << "Average : " << fixed << setprecision(2	) << average << endl;
	cout << "Lower : " << low << endl;
	cout << "Higher : " << high << endl;
}

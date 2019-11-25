/*
TASK : HW2_10
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	int i,j,k,l=1,n=0;
 	string function[7];
 	string SevenSegment[3][3];
 	SevenSegment[0][0] = " ";
 	SevenSegment[0][1] = "_";  //0
 	SevenSegment[0][2] = " ";
 	SevenSegment[1][0] = "|";  //1
 	SevenSegment[1][1] = "_";  //2
 	SevenSegment[1][2] = "|";  //3
 	SevenSegment[2][0] = "|";  //4
 	SevenSegment[2][1] = "_";  //5
 	SevenSegment[2][2] = "|";  //6
 	
 	for(i=0;i<7;i++){
  		cin >> function[i];
  	}
  	
  	for(i=0;i<=7;i++){
    switch(i){
    case 0: if(function[i]=="off"){
           cout << "   " ;
           }
            else{
           cout << SevenSegment[0][0];
           cout << SevenSegment[0][1];
           cout << SevenSegment[0][2];
           }
          cout << endl;
          break;
    case 1: if(function[i]=="off"){
           cout << " " ;
           }
            else{
            cout << SevenSegment[1][0];
          }
          break;
    case 2: if(function[i]=="off"){
           cout << " " ;
           }
            else{
            cout << SevenSegment[1][1];
          }
          break;
    case 3: if(function[i]=="off"){
           cout << " " ;
           }
            else{
           cout <<  SevenSegment[1][2];
          }
          cout << endl;
          break;
    case 4: if(function[i]=="off"){
           cout << " " ;
           }
            else{
          cout <<  SevenSegment[2][0];
          }
          break;
    case 5: if(function[i]=="off"){
           cout << " " ;
           }
            else{
           cout <<  SevenSegment[2][1];
          }
          break;
    case 6: if(function[i]=="off"){
           cout << " " ;
           }
            else{
           cout <<  SevenSegment[2][2];
          }
          cout << endl;
          break;
    }
 }  
  	
  	
  	
  	
  	/*
  	for(i=0;i<3;i++){
  		for(j=0;j<3;j++){
  			l=1;
			n=0;
  			if(SevenSegment[i][j] == SevenSegment[0][0] || SevenSegment[i][j] == SevenSegment[0][2]){
  				
			  }else{
			  	for(k=0;k<7;k++){
			  		if(n<l){
			  			if(function[k] == "off"){
  							SevenSegment[i][j] = " ";
  							
					 	}
		 			}
		 			n++;
				}
				l++;
			  }
   		}
	}	
    for(i=0;i<3;i++){
  		for(j=0;j<3;j++){
			  	cout << SevenSegment[i][j];
		 }
		 cout << endl;
    }
 return 0;
 */
}

#include<iostream>
using namespace std;
int main(){
	int n=5;
  int i=1,j =1,k=1;

for(i=1;i < 2*n; i++){
     	if(i > n){
	   k--;
	} 
    for(j=1;j <= n-k;j++){
        cout << " ";
      }
   for(j=1;j <= k;j++){
        cout << "*";
      }
     cout <<"\n";
 if(i < n){    
     k++;
   }
}
}

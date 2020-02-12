#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int k=1;
	int num;
     for(int i=1;i <= 2*n-1;i++){
     	
	     if(i > n){
	        k=k-2;
	     }
              num =1;  	     
      	     for(int j=1;j <= k;j++){
	        cout << num++;    
	     }
	     if(i < n){
	        k=k+2;
	     }
	     cout << "\n";
     }	

}

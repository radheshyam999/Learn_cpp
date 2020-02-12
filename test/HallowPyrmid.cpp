#include<iostream>
using namespace std;
int main(){
	int n=5;
	int j=0;
    for(int i=1;i <= n;i++){
    	for(j=i;j < n;j++){
          cout << "  ";
	}

         for(j=1;j <= ((2*i)-1);j++){
		 if(j==1 || j == ((2*i)-1) || i==n){
	          cout << "*" <<" "; 
	      } else{
	      
	       cout << "  "; 

	      }
	 }



		cout<<"\n";

	}
    


return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int i=1,j = 0;
	for(i=1;i <= n; i++){
	    for(j=1;j < i;j++){
	         cout << " ";
	    }
	    for(j = i; j<=(2*n)-i;j++ ){
		    if(i==1|| j == i || j == (2*n)-i){
			    cout << "*";
		  }else{
		    cout << " "; 
		  }
	    }
          cout << "\n";
	}
return 0;

}


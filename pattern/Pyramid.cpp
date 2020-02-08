/*
    *
   ***   
  *****
 *******
*********
*/
#include<iostream>
using namespace std;
class Pyramid{
    public :
        int pattern(int n){
	for (int i = 1; i <= n; i++){
               /* for (size_t j = 0; j < n + n - 1; j++){
                  if(j>=n-i+1&&j <= n+i+1){    
                         cout << " * ";
                      }else{
                    cout<<"  ";
                }
                }*/
		 int j=0;   
                 while(j < n-i){
		   cout <<" " ;
		 j++;
		 }
                while(j <n+i-1){
		  cout << "*";
		 j++;
		}






                cout <<"\n";
            }
            return 0;}
};
int main(int argc, char const *argv[])
{
    Pyramid obj;
    int n;
    cin>>n;
    obj.pattern(n);
    return 0;
}


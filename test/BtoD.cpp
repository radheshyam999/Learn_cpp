#include<iostream>
using namespace std;

int power(int value,int n){
    if (value == 0){
        return 0;
        }
        int sum = 1;
        for(int i = 0; i < n; i++){
            sum *=   2 ;                
        }
return sum;
}
int binaryToDecimal(int x[]){
    int n = 4;
    int sum = 0;
    int k=0;
    for(int i = 3;  i >=0; i--){
         sum += power(x[i],k);
          k++;
        }
return sum;
}
int main(int argc, char const *argv[]){
int x[] = {1,1,1,1};
 cout << binaryToDecimal(x);
    return 0;
}

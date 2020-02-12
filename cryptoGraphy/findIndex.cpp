#include<iostream>
using namespace std;
int findpostion(int A[],int a,int n){
    int index = 0;
    for(int i=0;i < n; i++){
        if(A[i] > a){
           int j = n;
           while(j != i-1){
               A[j] = A[j-1];
               j--;
           }
           A[i] = a;
           index = i;
           break;
        }
    }
    for(int i=0;i < 10;i++){
           if(A[i]!=0){
                cout << A[i] << "\n";
              } 
        } 
    return index;
}
int main(){
    int A[10] = {1, 2, 3, 4, 6, 7};
    findpostion(A,5,10);
}
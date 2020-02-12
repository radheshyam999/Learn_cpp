#include<iostream>
using namespace std;
int RightMostbit(int n){
    int i = 0;
    while(n){
        if(n&1){ return i;}
         n = n << 1;
         i++;
      }
  return i;
}
int UniqueNumber(int *A,int n){
  int xorop = 0;
  for(int i = 0; i < n; i++){
     xorop ^= A[i];    
  }  
return xorop;
} 
int main(int argc, char const *argv[]){
    int A[] = {1, 1, 2, 3, 3, 4, 4, 5, 6, 6,5,8};
     int res  = UniqueNumber(A,12);
     int post = RightMostbit(res);
     int mask = 1 << post;
     int first_no = 0; 
     for(int i = 0; i < 12; i++){
         if(A[i] & mask != 0){
             first_no = first_no ^ A[i]; 
         }
     }
     int second_no = first_no ^ res;
     cout << first_no << "   "<< second_no;
    return 0;
}


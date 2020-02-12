#include<iostream>
using namespace std;

int countBitset(int n){
    int bitset = 0;
    while(n > 0){
        bitset += n&1; // Here i am adding bit set if it would be zero so it will increase otherwise nothing will happen  
        n = n >> 1; // i m shifting  a bit right towords  so i could remove one  bit from  that number  
    }
return bitset;}
int countBitsetTwo(int n){
    int bitset = 0;
    while (n){
        bitset ++;
        n = n & (n-1); //  perform & Operation with givne number then upading that Value    
    }
return bitset;
}
int countBitsetThree(int n){
    int bitset = 0;
    int p=0;
    while (n){
        
        p = n & (-n); 
        n= n -p;
        bitset++;
    }
    return bitset;
}
int main(int argc, char const *argv[]){
       int n=0;
       cin >>n;
       cout << countBitsetTwo(n) << "\n";
       cout << countBitset(n) << "\n";
       cout << countBitsetThree(n) << "\n";

       return 0;
}


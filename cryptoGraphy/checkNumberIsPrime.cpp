#include<iostream>
using namespace std;
bool isPrime(int n){
     if(n < 2){return false;}
     if (n == 2)
     {
         return 0;
     }
     int i = 2;
     while(i <= n/i){
        if(n % i == 0){
            return false;
        }
    i++; }
return true;
}
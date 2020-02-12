#include<iostream>
using namespace std;
int getIthBit(int n,int Ith){
   return  ((n &(1 << (Ith-1))) > 0 ? 1 : 0); 
   }
   void setIthBit(int &n, int Ith){

       n = n | (1 << (Ith - 1));
   }

   int main(int argc, char const *argv[]){
       int n, Ith;
       cout << "Enter A Number"
            << "\n";
       cin >> n;
       cout << "Which Bit do You want to find"
            << "\n";
       cin >> Ith;
       cout << "\n";
            cout << getIthBit(n, Ith);
            setIthBit(n,Ith);
       cout << "After Setting Bit at postion:" << Ith << "Value is:" << n;      
       return 0;
}

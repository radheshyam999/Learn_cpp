#include<iostream>
using namespace std;
/*
You given 17 Rupees.
 You need to find  minimum number of change  of coin 
 You can use five ruppes coin and 3 rupees coin and 1 ruppes coin
*/
int NumberOfCoin(int n,int coin[]){
    int i = 0,c = 0;

    while (n > 0){
        if(n - coin[i] >= 0){
            n = n - coin[i];
            c++;  
        }else{

           i++;
        }
    }
              
return c;
}
int main(int argc, char const *argv[]){
    int coin[] = {5,3,1};

   cout << NumberOfCoin(51,coin);
    
    return 0;
}

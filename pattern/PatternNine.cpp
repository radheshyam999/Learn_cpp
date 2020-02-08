#include<iostream>
using namespace std;
/*
EDCBA
EDCBA
EDCBA
EDCBA
EDCBA
*/
int main(int argc, char const *argv[]){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = 5; j >0; j--){
              cout <<(char)(j+65);
        }
        cout <<"\n";
    }
    

    return 0;
}
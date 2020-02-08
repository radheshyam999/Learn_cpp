#include<iostream>
using namespace std;
/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE

*/
int main(int argc, char const *argv[]){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n; j++){
              cout <<(char)(i+65);
        }
        cout <<"\n";
    }
    

    return 0;
}
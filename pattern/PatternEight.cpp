#include<iostream>
using namespace std;
/*
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA
*/
int main(int argc, char const *argv[]){
    int n = 5;
    for (int i = 5; i > 0; i--){
        for (int j = 0; j < n; j++){
              cout << (char)(i+65);
        }
        cout <<"\n";
    }
    

    return 0;
}
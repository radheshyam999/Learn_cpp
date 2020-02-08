#include<iostream>
using namespace std;
/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
int main(int argc, char const *argv[]){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
              cout <<(char)(j+65);
        }
        cout <<"\n";
    }
    

    return 0;
}
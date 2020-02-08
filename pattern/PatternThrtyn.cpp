#include<iostream>
using namespace std;
/*
A
BB
CCC
DDDD
EEEEE
*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++){
          cout << (char)(i+65);
        }
        cout <<"\n";
    }
    return 0;
}
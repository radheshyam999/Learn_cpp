#include<iostream>
using namespace std;
/*
A
AB
ABC
ABCD
ABCDE
*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++){
          cout <<(j+65);

        }
        cout <<"\n";
    }
    return 0;
}
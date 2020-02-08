#include<iostream>
using namespace std;
/*
11111
2222
333
44
5
*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n-i+1; j++){
           cout << i;
         }
        cout <<"\n";
    }
    return 0;
}
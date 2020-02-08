#include<iostream>
using namespace std;
/*
1
22
333
4444
55555
*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
          cout << i;
        }
        cout <<"\n";
    }
    return 0;
}
#include<iostream>
using namespace std;
/*
*****
****
***
**
*
*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++){
          cout << "*";
        }
        cout <<"\n";
    }
    return 0;
}
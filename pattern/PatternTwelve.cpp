#include<iostream>
using namespace std;
/*
*
**
***
****
*****
*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
          cout <<j;

        }
        cout <<"\n";
    }
    return 0;
}
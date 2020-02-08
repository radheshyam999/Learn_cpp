#include<iostream>
using namespace std;
/*

55555
4444
333
22
1

*/
int main(int argc, const char** argv) {
    int n=5;
    int l = 0;
    for (int i = n; i >0; i--)
    {
        for (int j = 0; j < n-l; j++){
             cout << i;
        }
        cout <<"\n";
        l++;
    }
    return 0;
}
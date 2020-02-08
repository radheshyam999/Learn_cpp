#include<iostream>
using namespace std;
/*

54321
5432
543
54
5

*/
int main(int argc, const char** argv) {
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--){
            cout << j;
        }
        cout <<"\n";
    }
    return 0;
}
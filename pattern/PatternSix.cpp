#include<iostream>
using namespace std;
/*
55555
44444
33333
22222
11111
*/
int main(int argc, char const *argv[]){
    int n = 5;
    for (int i = 5; i > 0; i--){
        for (int j = 0; j < n; j++){
              cout << i;
        }
        cout <<"\n";
    }
    

    return 0;
}
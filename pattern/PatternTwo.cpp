#include<iostream>
using namespace std;
/*
11111
22222
33333
44444
55555
*/
int main(int argc, char const *argv[])
{
    int n=5;
    for(int i=1;i<=n;i++){
        for (int j = 0; j <=i ; j++){
            cout << i;
        }
        cout <<"\n";
    }
    return 0;
}


#include<iostream>
using namespace std;
/*
*****
*****
*****
*****
*****
*/
int main(int argc, char const *argv[]){
    int n = 5;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++){
            cout <<"*";
        }
        cout << "\n";
    }
    
    return 0;
}

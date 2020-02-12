#include<iostream>
using namespace std;
void findintersection(int A[],int B[],int length){
    int x[length];
    int l = 0;
    for (int i = 0; i < length; i++){
        x[i] = 0;
    }
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (A[i] == B[j]){
                 cout << A[i] << "===" << B[j]<<"\n";
                x[l] = A[j];
                l++;
                break;
            }
        }
    }
    for (int i = 0; i < length; i++){
        if (x[i] != 0)
        {
            cout << x[i] << " ";
        }
    }
}
int main(int argc, char const *argv[]){
    int a[] = {1,2,3};
    int b[] = {4, 2, 3};
    findintersection(a,b,3);
    return 0;
}


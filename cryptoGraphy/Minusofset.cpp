#include<iostream>
using namespace std;
int *findMinus(int A[],int B[]){
    int nA  =3; // sizeof(A);
    int nB  = 3; //sizeof(B);
    cout << "nB" << nB << "nA"<<nA;
    cout <<"\n";
    int k = 0;  
      for(int i = 0; i < nA;i++){
         
         for(int j = 0;j < nB;j++){
             if (A[i] == B[j])
             {
                 A[i] = 0;
                 B[j] = 0;
                 k++;   
            }
         }
    }
    int x[nA+nB-k];
    int i=0,l=0;
    for(;i < nA;i++){
        if(A[i] != 0){
            x[l++] = A[i];
        }
    }
    i = 0;
    for (; i < nB; i++){
        if (B[i] != 0){
            x[l++] = B[i];
        }
    }
    cout << "k:"<< k << "\n";
    for (int i = 0; i < (nA+nB -k); i++){
        cout << x[i] << " ";
    }
    cout <<"\n";
    return x;
}
int main(int argc, char const *argv[]){
    int a[] = {1,2,3};
    int b[] = {4,2};
    int *A = findMinus(a,b);
    /*int size = sizeof(A);
    cout << size <<"\n";
    for(int i = 0;i < size;i++){
        cout << A[i] <<" ";
    }
    */
    return 0;
}

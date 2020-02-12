#include<iostream>
using namespace std;
template<typename T>
void sort(T *A,int size){
    
     for (size_t i = 1; i <size ; i++){
         for (size_t j = 0; j < size-i; j++){
             if (A[j] > A[j+1]){
                 T temp = A[j];
                 A[j] = A[j+1];
                 A[j+1] = temp; 
             }
         }
     }
}
int main(int argc, char const *argv[]){
    int num;
    cin >> num;
    int Array[num];
    int i = 0;
    while (i < num){
       cin >> Array[i];
      i++;
    }    
    sort(Array,num);
    for(auto var : Array){
        cout << var << "\t";
    }
    return 1;
}


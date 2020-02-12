#include<iostream>
using namespace std;
template<typename T>

void sort(T *Array,int size){
     int j = 0,key = 0;
     for(int i = 1;i < size;i++){
         j = i;
         key = Array[i]; 
         while (j > 0 && Array[j-1] > key){
             Array[j] = Array[j-1]; 
             j--;
         }
         Array[j] = key;
         
     } 
}
int main(int argc, char const *argv[]){
    int num;
    cin >> num;
    int Array[num];
    int i = 0;
    while (i < num)
    {
        cin >> Array[i];
        i++;
    }
    sort(Array, num);
    for (auto var : Array)
    {
        cout << var << "\t";
    }

    return 0;
}

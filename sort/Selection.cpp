#include<iostream>
using namespace std;
template<typename T> 
void sort(T *Array,int size){
     int j = 0,min =0;
     for (int i = 0; i < size; i++){
         j = i+1;
         min = i; 
         while (j < size){
             if ( Array[min] > Array[j] ){
                 min = j;
                  
                }
            j++;
         }
         if(i != min){
             T temp     = Array[i];
             Array[i]   = Array[min];
             Array[min] = temp;   
         }
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
 
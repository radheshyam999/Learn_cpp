#include<iostream>
using namespace std;
template<typename T>
class Mergsort
{
private:
    int merge(T *A,int temp[] int strat,int mid,int end,){
           while (){
               
           }
           
    }
    /*int breakIt(T *A, int strat, int end){
    
    }
    */
public:
    Mergsort(/* args */);
    ~Mergsort();

    int breakIt(T *A, int temp[],int start , int end){
        int mid = end+start;
        if(end > start){

            breakIt(A,temp,start,mid);
            breakIt(A, temp,mid+1, end);
            merge(A, start , mid, end);
            
        }
        

    }
};
int main(int argc, const char** argv) {

    int num;
    cin >> num;
    int Array[num];
    int i = 0;
    while (i < num){
        cin >> Array[i];
        i++;
    }
    //sort(Array, num);
    
    
    
    for (auto var : Array){
        
        cout << var << "\t";
    
    }
    return 1;
}

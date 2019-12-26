#include<iostream>
using namespace std;
class Number3
{
private:
    /* data 
    
    
10101
01010
10101
01010
10101


    
    */
public:
    Number3(/* args */){

    }
    int pattern(int n){
        for (size_t i = 1; i <= n; i++){
            for (size_t j = i; j < n+i; j++){
                  if(j%2!=0){
                      cout<<1;
                  }else{
                      cout <<0;
                  }           
                 
            }
            cout<<"\n";
            }
            return 0;}
/*
11011
11011
00000
11011   
11011
*/
     
     int pattern2(int n){
         for (size_t i = 0; i < n; i++){
             for (size_t j = 0; j < n ; j++){
                 if(i==n/2||j==n/2){
                      cout << 0;
                 }else{
                     cout<<1;
                 }
              
             }
             cout<<"\n";      
         }
         return 0;}
         
};
int main(int argc, char const *argv[]){
    Number3 obj;
    int n;
    
    cin >>n;
    obj.pattern(n);
    cout<<"\n";
    obj.pattern2(n);
    return 0;
}

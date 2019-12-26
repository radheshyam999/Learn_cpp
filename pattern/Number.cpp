/*
11111
00000
11111
00000
11111
*/
#include<iostream>
using namespace std;
class Number{
    public :
        Number(){}
        int pattern(int n){
           for (size_t i = 1; i <= n; i++){
               for (size_t j = 0; j < n; j++){
                   if(i%2!=0){
                      cout << 1;
                   }else{
                       cout << 0;
                   }
               }
               cout<< "\n";
           }
           
        return 0;}


};
int main(int argc, char const *argv[]){
    Number ob;
    int n;
    cin>> n;
    ob.pattern(n);
    return 0;
}


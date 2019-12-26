/*
11111
10001   
10001
10001
11111
*/
#include<iostream>
using namespace std;
class Number2
{
private:
    /* data */
public:
    Number2(/* args */){

    }
    int pattern(int n){
        for (size_t i = 0; i < n; i++){
            for (size_t j = 0; j < n; j++){
               if(j==0 || i==0|| j==n-1 || i==n-1){
                   cout<< 1;
               }else{
                   cout << 0;
               }
            
            }
            cout<<"\n";
        }
    
    return 0;}
/*
11111     
11111     
11011 
11111
11111
*/
int num2(int n){
    cout<<"\n";
    for (size_t i = 1; i <= n; i++){
        for (size_t j = 0; j < n; j++){
              if(i==3&&j==2) {cout<<0;}
             else cout << 1;
        }
        cout << "\n";
        }
        return 0;}

};
int main(int argc, char const *argv[]){
    Number2 obj;
    int n;
    cin>>n;
    obj.pattern(n);
    obj.num2(n);
    return 0;
}

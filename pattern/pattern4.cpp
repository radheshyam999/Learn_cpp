#include<iostream>
using namespace std;
/*
11111
22222
33333   DONE
44444
55555
*/
class pattern4
{
private:
    /* data */
public:
    pattern4(/* args */){

    }
    int Pattern(int n){
        for (size_t i = 1; i <= n; i++){
            for (size_t j = i; j <= n+i; j++){
               cout << i;
            
            }
            cout << "\n";
            }
            return 0;}
/*    
12345
23456
34567   DONE
45678
56789
*/
  int Pattern2(int n){
      cout <<"\n";
      for (size_t i = 1; i <= n; i++){
          for (size_t j = i; j <= n +i; j++){
              cout << j;
          }
          cout << "\n";
      }
  return 0;}
  int Pattern3(int n){
      cout << "\n";
      int k=0;
      for (size_t i = 0; i <n; i++){
          for (size_t j = 0; j <n; j++){
              cout << ++k<<"\t";
          }
          cout << "\n";
      }
      return 0;
  }
};
int main(int argc, char const *argv[])
{
    pattern4 obj;
    int n;
    cin >>n;
    obj.Pattern(n);
    obj.Pattern2(n);
    obj.Pattern3(n);
     return 0;
}


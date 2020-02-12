#include<iostream>
using namespace std;
void Transpose(int x[][4] , int A[][4]){
          for (int i = 0; i < 4; i++)
          {
              int sum=0;
               for (int j = 0; j < 4; j++){
                  sum = 0;
                  for (int k = 0; k < 4; k++){
                      sum += x[j][k] * A[k][i];
                  }
                      cout << sum <<" ";
              }
              cout <<"\n";   
          }
}
int main(int argc, char const *argv[]){
    int x[][4] = { 
                  {1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12}, 
                  {13, 14, 15, 16} 
                  };
    int A[][4] = {
                  {1, 0, 0, 0},
                  {0, 1, 0, 0},
                  {0, 0, 1, 0},
                  {0, 0, 0, 1}
                  };
              Transpose(x,A);
    return 0;

}

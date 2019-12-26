#include<stdio.h>
int Tringle(int n){
      for (size_t i = 0; i < n; i++){
          for (size_t j = 1; j <=n; j++){
            if(j>=n-i){
                printf("%d",j);
            }else{
                //printf("\t");
            }
          }
          printf("\n");
          
      }
      
return 0;}

/*
12345
2345
345
45
5
*/




int Tringle2(int n)
{
    for (size_t i = 1; i <= n; i++){
        for (size_t j = i; j <= n; j++){
            if (j <= n){
                printf("%d", j);
            }
            
        }
        printf("\n");
    }

    return 0;
}
int main(int argc, char const *argv[]){
       Tringle(5);
       printf("\n");
       Tringle2(5);
       return 0;
}

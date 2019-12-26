#include<stdio.h>
#include<stdlib.h>
void hgmtl(){
    FILE *fr, *feven, *fodd, *fprime;
   fr = fopen("number.text","r");
   feven = fopen("even.text", "a");
   fodd = fopen("odd.text", "a");
   fprime = fopen("Prime.text", "a");
while (!feof(fr)){
       char ch = fgetc(fr);
       int k =atoi(ch);
        if (isEven(k)){
           // it is even need to write file
           fputc(k,feven);
      }else{
          if (isPrime(k)){
              // it is prime so need to write it in prime file
              fputc(k,fprime);
          }else
          {
              //it is odd
              fputc(k,fodd);
          }
          
          
      }        
}


}
int isEven(int n){
    if(n%2==0){
         return 1;
    }else{
        return 0;
    }
}
int isPrime(int n){
    for (size_t i = 2; i >= n/1; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    
    
 return 1;   
}
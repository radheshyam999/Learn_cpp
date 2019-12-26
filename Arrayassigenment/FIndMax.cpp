#include<iostream>
class Max
{
public:
        int findMax(int A[]){
            int max =0;
             for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
                max =A[i];
                for(int j=i+1;j<sizeof(A)/sizeof(A[0]);j+){
                     if(max < A[j]){
                          max = A[j];
                     }
                }
             }
         
         
         return max;
        }
};


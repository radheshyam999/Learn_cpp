#include<iostream>
class AddMatrix{
    typedef int (*Type)[3][3];

public:
     Type Add(Type A, Type B)
    {
        int sizeA = sizeof(A) / sizeof(A[0]);
        int sizeB = sizeof(B) / sizeof(B[0]);
        Type C;
        
        for (size_t i = 0; i < sizeA; i++)
        {
            for (size_t j = 0; j < sizeB; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        return C;}
}; 


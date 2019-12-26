#include<iostream>
class BinaryBacktracking
{
private:
    /* data */
public:
    BinaryBacktracking(/* args */){}
    ~BinaryBacktracking(){}

void back(int n, int A[]){
   if(n<1){
     std::cout << A[n];
   }else{
       A[n-1] =0;
       back(n-1,A);
       A[n - 1] = 1;
       back(n - 1, A);
   }
}

};
int main(int argc, char const *argv[])
{
    BinaryBacktracking b;
    int A[5];
    b.back(5,A);

        return 0;
}



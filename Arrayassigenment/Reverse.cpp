#include<iostream>
using namespace std;
class Reverse
{
private:
    /* data */
public:
    Reverse(/* args */){

    }    
    ~Reverse(){

    }
     int* reverse(int X[]){
        int i=0,j,n,temp=0;
        j = sizeof(i);
        n =sizeof(X) / sizeof(X[0]);
        cout<< "size :"<< n << endl;
        while(j <= n/2){
           temp = X[i];
           X[i] = X[j];
           X[j] = temp;
           i++;
           j--;
           }
           for (int k = 0; k < sizeof(X); k++)
           {
               std::cout << X[k];
           }
     return X;
    }



};

int main(int argc, char const *argv[])
{       int A[]={5,4,3,2,1};
        Reverse b;
        b.reverse(A);
        return 0;
}



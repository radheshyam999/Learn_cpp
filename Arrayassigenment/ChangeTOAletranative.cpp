#include<iostream>
using namespace std;
class ChangeTOAletranative
{
private:
    /* data */
public:
    ChangeTOAletranative(/* args */){}
    ~ChangeTOAletranative(){}
     int alaternative(){
         int X[] = { 1,2,3,-4,-1,4 };
         for(int i=0;i<sizeof(X)/sizeof(X[0]);i++){
              if(i%2==0){
                  int j=i+1;
                  while (j < sizeof(X) / sizeof(X[0]) && X[j]>0) j++;
                  if(X[j] < 0){
                      int temp =X[j];
                           X[j] =X[i];
                           X[i] =temp;
                           }
                }
            }
         for (size_t i = 0; i < sizeof(X) / sizeof(X[0]); i++){
             cout << X[i] <<'\t';
         }
          return 0;} 


};
 int main(int argc, const char** argv) {
     ChangeTOAletranative object;
     object.alaternative(); 
      return 0;
}

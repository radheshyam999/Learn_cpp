   /*
   ***
  *****/ 



#include<iostream>
class Tringle
{
private:
    /* data */
public:
    Tringle(int x);
    ~Tringle();
            
   int pt(){
       int n=5;
       for (size_t i = 1; i <= n; i++){
           for (size_t j = 0; j < n; j++){
               if(j>n-i-2 && j <= n-3+i){
                   std::cout <<"*";
               }else
               {
                   std::cout << "  ";
               }
               
           }
           std::cout << "\n";
           
       }
       
   return 0;}


};

Tringle::Tringle(int x){
    std::cout <<" construcuter"<< x <<std::endl;
}

Tringle::~Tringle(){
    std::cout << " destrucuter" << std::endl;
}
int main(int argc, char const *argv[])
{ Tringle t =11 ;
    t.pt();
    return 0;
}

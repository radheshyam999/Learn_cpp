#include<iostream>
using namespace std;
class DemoLastfriend{
  public:
    friend class B;
    int df = 89;
    
}; 
class B{
    public:
        int demo(DemoLastfriend &b){
           cout << "show hello world" << b.df << "\n";
        return 0;
          }
};
int main(int argc, char const *argv[]){
    DemoLastfriend d;
    B b;
    b.demo(d);

    return 0;
}

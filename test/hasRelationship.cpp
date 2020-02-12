#include<iostream>
using namespace std;

class hasRelationShip{
    public:
        int add(int x,int y){ return x+y;}
};
class game{
    private :
        hasRelationShip *has;
    public:
     
     game(){
        has = new hasRelationShip();
     }
      void printAdd(){
          int x,y;
          cin >>x >>y;
          cout << has->add(x,y) << "\n";
      }
};
int main(int argc, char const *argv[]){
     game obj;
     obj.printAdd();
      
    return 0;
}

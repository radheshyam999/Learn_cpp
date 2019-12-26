#include<iostream>
#include "AVL.hpp"
class Main
{
private:
    /* data */
public:
    Main(/* args */);
    ~Main();
};
int main(int argc, char const *argv[]){
      AVL avl;
      Node *p;
      p=avl.insert(8, p);
      p=avl.insert(9, p);
      p=avl.insert(1, p);
      p=avl.insert(11, p);
      p=avl.insert(12, p);

      return 0;
}

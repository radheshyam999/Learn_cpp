#include<iostream>
#include "AVL.hpp"
//#include"stack.hpp"
//#include"NonRecursieTraversal.hpp"

int main(int argc, char const *argv[]){
      AVL avl;
      //NonRecursieTraversal<stack> tr; 
      int x = 5;
      while(x){
          std::cin >> x; 
          avl.insert(x);
          avl.traverse();
      }
      std::cout << "Traversal \n";
      return 1;
}

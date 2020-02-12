#ifndef NonRecursieTraversal__hpp
#define NonRecursieTraversal__hpp
#include <iostream>
#include "stack.hpp"
template <class T>
class NonRecursieTraversal{
private:
    /* data */
public:
    NonRecursieTraversal(/* args */) {}
    ~NonRecursieTraversal() {}
    void inOrder(Node *root){
         stack s;
         while (1){
            while (root)
            {
                s.push(root);
                root = root->left;
            }
            if (s.isEmpaty())
            {
                break;
            }
            root = s.pop();
            std::cout << root->value << "\t";
            s.push(p->right);
            root = root->right;
        }
    }
    void preOrder(Node *root)
    {
        stack s;
        while (1)
        {
            while (root != nullptr)
            {
                std::cout << root->value << "\t";
                s.push(root);
                root = root->left;
            }
            if (s.isEmpaty())
            {

                break;
            }

            root = s.pop();

            s.push(root->right);
            root = root->right;
        }
    }
    void postOrder(Node *root)
    {
        stack s;
        while (1){
            while (root != nullptr){
                s.push(root);
                root = root->left;
            }
            if (s.Emptay()){
                
                break;
            }

            root = s.pop();
            s.push(root->right);
            root = root->right;
        }
    }
};
#endif // 

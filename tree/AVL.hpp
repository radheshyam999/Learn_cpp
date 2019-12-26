#include<iostream>
class Node
{
private:
    
public:
    //int data;
    Node *R;
    Node *L;
    int data;
    int height;

public:
   
    Node(int data){
      this->data =data;
      height =1;
    }
    ~Node(){

    }
};


#ifndef AVL_hpp
#define AVL_hpp

class AVL
{
private:
    Node *insert(int num, Node *p)
    {
        if (p == NULL)
        {
            p = new Node(num);
            p->L = NULL;
            p->R = NULL;
        }
        else if (p->data > num)
        {
            p->L = insert(num, p->L);
        }
        else if (p->data < num)
        {
            p->R = insert(num, p->R);
        }

        
          p->height = max(Height(p->L), Height(p->R))+1;
          int b =Blance(p);
          if(b >1&&p->data >num){
              //LL problem
              return RightRotate(p);   
             }else if(b > 1 && p->R->data < num){
                 p->L = LeftRotate(p->L);
                 //LR problem
                 
                 return RightRotate(p);
             }else if(b <-1&&p->R->data < num){
                //RR
                return LeftRotate(p);
             }
             else if (b < -1 && p->R->data > num){
                     //RL
                      p->R=LeftRotate(p->L); 
                      return RightRotate(p);
                      }
        return p;
    }
    Node *LeftRotate(Node *p)
    {

        Node *b = p->L;
        Node *T2 = b->R;

        // rotate
        b->R = p;
        p->L = T2;
    }
    Node *AVL::RightRotate(Node *p)
    {
        Node *b = p->R;
        Node *T2 = p->L;

        // rotate
        b->L = p;
        p->R = T2;
    }
    int AVL::Blance(Node *p) { return !p ? Height(p->L) - Height(p->R) : 0; }
    void AVL::Delete(Node *p)
    {
    }
    int AVL::Height(Node *p) { return !p ? p->height : 0; }
    int max(int n, int m) { return n > m ? n : m; }
};
#endif //AVL_hp
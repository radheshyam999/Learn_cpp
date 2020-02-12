#ifndef B__hpp
#define B__hpp
class node{
    public: 
        node (*p)[4];
        int value;
        node(int value){
            node::value = value;
        }        
};
class B{
  public:
     node * insert(node *root, int value){
            if(root== nullptr){
               root = new node(value);
            }else if(root->p[1]->value){

            }else if (){
                
            }
     }


};

#endif
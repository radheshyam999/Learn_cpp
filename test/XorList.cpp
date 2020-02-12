#include<iostream>
#include<cstdlib>
using namespace std;
class node{
	public:
		node *link;
		int value;
		node(int value){
		  node::value = value;	
		}
};
class XorList{
	inline node* Xor(node *prev,node *next){return (node*)((unsigned int)(prev)^ (unsigned int)(next));}
   public:
       	node* head;
	void insert(int value){
	   node *p = new node(value);
	   node *next;
	   if(head == nullptr){
	      head = p;
	   }else{
		 
               // xor operation performing here 
		next  = Xor(head->link,nullptr);
		head->link = Xor(p,next);
	      
	   }
	
	}




};

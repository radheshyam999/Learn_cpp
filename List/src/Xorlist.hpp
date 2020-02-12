#ifndef XorList__hpp
#define XorList__hpp
#include<iostream>
#include<cstdlib>
using namespace std;
template<class T>
class XorList{
	class node{
		   public:
			node *link;
		
			T value;
			node(T value){
			node::value =value;

			};	
	};
	node *head;
	node* Xor(node *next,node *prev){

        return (node*)((unsigned int)(next)^(unsigned int));	
	}
	public:
	    int add(T value){
	    	  node *p = new node();
		  p->link = nullptr;
                  //p->prev =nullptr;
		 if(head == nullptr){
		     head = p;
		}else{
		node *temp = head;
	       	while(temp->link!=nullptr){
		    temp = temp->link;
		}
	        tail = temp->link = p;
		p->link = temp;	
		}
	   return 0; 
	    }
	public: void traverse(){
		   
		
		}  	   		

};
#endif

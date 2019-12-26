#ifndef queue__hpp
#define queue__hpp
#include<iostream>
template <typename T>
class queue{
	class node{
	public: 
		node *next;
		node *prev;
		T value;
		node(T value){
			node::value = value;
		}
	};
 node *head, *tail;
	void push(T value){
	      node *p = new node(value);
	      p->next = nullptr;
	      p->prev = nullptr;
             if(head==nullptr){ 
	       tail = head = p;
	     }else1{
	     tail->next = p;
	     p->tail = p; 
	     
	     }
	}
	T pop(){
	  T p = hea->value;
	   head = head->next;
   	   head->prev =nullptr;
	   		   
	  return p;}
	T peek(){return tail->value;}
 bool isEmpaty(){
      if(head==nullptr){
      return true;
      }
     return false
 }
};
#endif

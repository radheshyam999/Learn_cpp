#ifndef stack__hpp
#define stack__hpp
#include<iostream>
using namespace std;
template<typename T>
class stack{
	class node{
	   node *next;
	   node *prev;
	   T value;
	   node(T value){
		node::value = value;
	   }
	};
 public :
	 stack(){
	 }
	 node *head,*tail;
	  void push(T value){
		node *p = new node(value);
       		p->next = nullptr;
		p->next =nullptr;		
	      if(head == nullptr){
	      	 tail =head  = p;
	      }else{
	      	node *temp = head;
		while(temp->next != nullptr){
		  temp = temp->next;
		}
		temp->next = p;
		p->prev = temp;
	      }
	 
	 }
	 T pop(){
              int t= tail.value;
	      tail = tail->prev;
	      tail->next = nullptr;
	 
	     return t;
	 }
	 // this is for peeking data for stack
      T peek(){return tail->value;}
      bool isEmpety(){
              if(head == nullptr){return true;}
              return false;}

};
#endif

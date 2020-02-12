#ifndef Dlist__hpp
#define Circular__hpp
#include <iostream>
using namespace std;
template<typename T>
class Circular{
	public:
		Dlist(){
		
		
		}
	class node{
		   public:
			node *next;
			node prev;
			T value;
			node(T value){
			node::value =value;

			};	
	};
	node *head,*tail;
	public:
	    int add(T value){
	    	  node *p = new node();
		  p->next = head;
                  p->prev =nullptr;
		 if(head == nullptr){
		    tail = head = p;
		    p->next = head;
		    // 
		}else{
		node *temp = head;
	       	while(temp->next!=head){
		    temp = temp->next;
		}
	        tail = temp->next = p;
		p->prev = temp;	
		}
	   return 0; 
	    }
	    int add_First(T value){
		    node *p = new node(value);
		    //  i am Making  here  circuar 
		    p->next = head;
		    p->prev = nullptr;
	    	if(head==nullptr){
			head = p; 
			return 0;
		}
		head->prev = p;
	        p->next = head;
		head = p;
	    return 1;
	    }
	    int addAtIndex(T value,int index){
		    node *p = new node(value);
		    p->next = nullptr;
		    p->prev = nullptr;
	    	if(head == nullptr){
		  head = p;
		  
		}else{
		 /**
		  * Need to comple te this problem
		  * **/
		
		}
	    return 0;
	    }
		
int DeleteFirst(){
	//list :w
	//
    if(head ==nullptr){
    return 0;
    }else{
      head = head->next;
      head->prev = nullptr;
    
    }

return 1;}
		
int Delete_Last(){
    if(head ==nullptr){
    return 0;
    }else{
      tail = tail->prev;
      tail->next = nullptr;
    
    }

return 1;}

int DeleteIndex(int Index){
    if(head ==nullptr){
    return 0;
    }else{
	    // complete  programe here
    }

return 1;}
// for geting  iterator
inline node*geIterrater(){return head;}



};
/**
 *class is ended Here 
 *
 * **/

#endif

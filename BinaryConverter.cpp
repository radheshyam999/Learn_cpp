#include<iostream>
#include<string>
#include "library/BinaryConverter.h"
int BinaryConverter::dTob(int b){
        int x=1;
	if(b==1){
	    return x*10;
       	} 
   else{
	     x = b%2;
	     b = b/2;
         if(x==0){
	        x=dTob(b)*10;
         	}
	  else{
	     x = dTob(b-x) * 10 + 1;
	   }
   }	
return x;
}
int BinaryConverter::bTod(int num){
	/*
	num = num/10;
	if (num==){
		
	}
	*/



return num;
}
BinaryConverter::BinaryConverter(){
	std::cout<< "counstrucuter"<< std::endl;
}
BinaryConverter::~BinaryConverter(){
	
	//std::cout << "destrucuter" << std::endl;
}

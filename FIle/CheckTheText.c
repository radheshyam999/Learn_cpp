#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
 int writeEven(char c);
 int writeOdd(char c);
 int writeVowel(char c);
 int writeConsonent(char c);
 int writeSpecialChar(char c);
 int isVowel(char c);
 int isConsonent(char c);
 
void checkchar(FILE *f){
        while(!feof(f)){
	   char c = getc(f);
           if(!(c < '0') || (!(c > 9))){
	           
		   if((atoi(c) % 2) == 0){
		    // It is for Even Number
                      writeEven(c);
		 }else{
		     writeOdd(c); 
		 } 
	   
	   }
	   else{ 
	     if(isVowel(c)){
		 // writing  vowel here    
	         writeVowel(c);
	      }else if(isConsonent(c)){
		       // writing  Consonent
	               writeConsonent(c);  
	         }
	     else{
	         writeSpecialChar(c);
	     }	     
	   }
	}
}
int main(){
 char FileName[20];	 
 scanf("%s",FileName); 	 
 FILE *f = fopen(FileName,"w");
 checkchar(f);

}
// write Even Number here
int writeEven(char c){
FILE *f = fopen("FileEven.text","a");
      fputc(c,f);      
return 1;
}
  // write odd here
int writeOdd(char c){
FILE *f = fopen("FileOdd.text","a");
      fputc(c,f);      
return 1;
}
// write Vowel
int writeVowel(char c){
FILE *f = fopen("FileVowel.text","a");
      fputc(c,f);      
return 1;
}
// Write consonent 
int writeConsonent(char c){
FILE *f = fopen("FileConsonent.text","a");
      fputc(c,f);      
return 1;
}
int writeSpecialChar(char c){
      FILE *f = fopen("Filespecial.text","a");
      fputc(c,f);      

return 1;}
int isVowel(char c){
char vowel[] = {'a','e','i','o','u'};
int n = 5;
int count = 0;
    for(int i = 0;i<n;i++){
        if(vowel[i] == c){
	   count++;
	}
	if(count > 0){
	  return 1;
	}
    }
return 0;
}
int isConsonent(char c){
    char vowel[] = {'a','e','i','o','u'};
int n = 5;
int count = 0;
    for(int i = 0;i<n;i++){
        if(vowel[i] == c){
	   count++;
	}
	if(count > 0){
	  return 1;
	}
    }
      
}


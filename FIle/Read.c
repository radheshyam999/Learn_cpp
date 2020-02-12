#include<stdio.h>
 void ReadDisplay(FILE *f){
            while(!feof(f)){
	      printf("%c",getc(f));   
	    }

 } 
int main(){
   char fileName[20];	
   scanf("%s", &fileName);	
   FILE *f = fopen(fileName,"r");
   if(f == NULL){
      printf("failed to open \n");
      return 0;
   }else{
     ReadDisplay(f);
     printf("YOU MUST HAVE GOT SOME OUT PUT!");
   }
}

#include<cstdio>
#include<string>
class FileSystem
{ 
private:
public:
    FileSystem(){
             
    }
    ~FileSystem(){
            
    }
    char* Read(){
        char *s;
    FILE *f = fopen("letsplay.text","r");
    if(f!=NULL){
        while (!feof(f)){
            fgets(s,9,f);
        }
        
    }
        fflush(f);
        fclose(f);
    return "hello";}
};


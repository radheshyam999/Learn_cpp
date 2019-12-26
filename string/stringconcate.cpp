#include<iostream>
using namespace std;
class stringconcate
{
private:
    /* data */
public:
    stringconcate(/* args */){

    }
    string concate(string s,string s2){
        int Length = 0;
           while (s[Length] != '\0')Length++;
        
      for (size_t i = Length; s2[i-Length]!='\0'; i++){
                     s[i] =s2[i-Length];
        }
                 
    return s;}

};
#include<iostream>
using namespace std;
class UpperCase
{
private:
    /* data */
public:
    UpperCase(){

    }
     string strUpperCase(string s){
              int i=0;
              while (s[i]!='\0'){
                  s[i] = s[i] > 'a' || s[i] <= 'z' ? s[i] - 32 : s[i];
               i++;
              }
              
     return s;}

     string strLowerCase(string s){ //need to complete
         int i = 0;
         while (s[i] != '\0'){
             s[i] = s[i] > 'A' || s[i] <= 'Z' ? s[i] + 32 : s[i];
             i++;
         }

         return s;
     }
};

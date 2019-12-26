#include<iostream>
using namespace std;
class CopyString
{
private:
    /* data */
public:
    CopyString(/* args */){

    }
    string copy(string s,string target){
        for (size_t i = 0; s[i] !='\0'; i++){
                    target[i]=s[i];
        }
        
    return target;}
};
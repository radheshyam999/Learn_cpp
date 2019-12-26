#include<iostream>
using namespace std;
class LengthOfString
{
private:
    /* data */
public:
    LengthOfString(){

    }
    int lenght(string s){
        size_t i=0;
         for ( i = 0; s[i] != '\0'; i++){
             
         }
         
    
    return i;}
};
int main(int argc, char const *argv[]){
    LengthOfString obj;
    string s = "hello";
    cout << obj.lenght(s);
     return 0;
}

#include<string>
#include<iostream>
#include<stack>
using namespace  std;
class HackerEarth
{
private:
    /* data */
public:
    HackerEarth(){
       
    }
    int find(){
        int n;
        stack <char> st;//  =new stack();
         cin >>n;
         string s[n];
        for (size_t i = 0; i < n; i++){
            cin>> s[i];
        }
        for (size_t i = 0; i < n; i++){
            string temp = s[i];
             for (size_t j = 0; temp != "\0"; j++){
                  st.push(temp[i]);  
           }
         
    }
};
int main(int argc, char const *argv[]){
    
    return 0;
}


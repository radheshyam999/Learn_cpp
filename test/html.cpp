#include <iostream>  
using namespace std;  

int fun(int n){
row:
    
    if(n < 1){
        return 1;
        
    }
    if (n = 4)
    {
        cout << " hello i am  goto statment";
        n--;
        goto row;
    }
    return fun(n - 1);
}

int main() {  
ineligible:    
         cout<<"You are not eligible to vote!\n";    
      cout<<"Enter your age:\n";    
      int age;  
      cin>>age;  
      if (age < 18){ 
          fun(18);   
              goto ineligible;    
      }else{    
          cout<<"You are eligible to vote!";     
      }         
   return 0;
}  
#include<iostream>
#include<string>
using namespace std;
class naive{
 	public:
	    int start,end; 	
	    naive * match(const string s ,const string p){
		    int l=0,num=0,i=0,j=0;
	            for(i = 0; s[i] != '\0'; i++){
			 l = i;
			 num = p.length();
		     for(j = 0; p[j] != '\0'; j++){
		        if(s[l] != p[j]){
			  // cout << "it is failed" << "\n";	
		             break;   
		           }  
		        if(s[l] == p[j]){
			     num--;
		           }
		         l++;
		         }
		     if(num == 0){
		               start = i;
			       end = i+j;
			       	     
		               cout << " pattern match found " << "\n";
		             	       
		       return this;
		      }
		  
	            }
	        return nullptr; 
	    }	
};
int main(){
    naive obj;
    string p,s;
    
    cin >> s >> p; 
  naive *acess = obj .match(s , p);
 cout << "start" << acess->start << "\t end" << acess->end;


}

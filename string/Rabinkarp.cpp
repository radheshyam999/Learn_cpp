#include<iostream>
#include<string>
using namespace std;
class RabinKarp{
	/**
	 * This is Implemnatation of Rabin Karp algorthim
	 * 
	 * 
	 * **/
      public :
	      int start = 0,end = 0;
              RabinKarp* match(string s, string p){
		 int hashValue = HashIt(p); 
		 int length  = p.length();
		 int j = 0,l = 0,num = 0,len =-1;
	      	 for(int i = 0; s[i] != '\0'; i++){ 
	              num = length;
				  len++;  // len taking for  making substring
				  cout << s.substr(i,(i+length - len)) << "\n";		      
	            if(hashValue == HashIt(s.substr(i,(i+length-len)))){
			   // cout << hashValue  << HashIt(s.substr(i,i+length));
				j = 0;
	            l = i; 	       
		       while(j < length){
		           if(s[l]!=p[j]){
			           cout << "failed" << "\n";
			          break; 
			        }
                if(s[l]==p[j]){
			      cout << "matched" << "\n";
			      num--;   
			    } 			   
                    l++;
		            j++; 
		           }   // while loop is ending here 
			    }
						if (num == 0){
							start = i;
							end = i + l;
							return this;
						}
		   }
	     return this; 
	  }	 
         int HashIt(string c){ 
	    // This is Funcution  for Calculating  	 
            int hashValue = 0 , i = 0;
	    while(c[i] != '\0'){
	       hashValue += (int)c[i];   
	       i++;
	    }
          return hashValue;
	 }    
      
      
};
int main(){
RabinKarp obj;
string s,p;
cin >> s >>p;
RabinKarp *pointer = obj.match(s,p);
cout << "start" << pointer->start << "End" << pointer->end;

}

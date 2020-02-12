#include<iostream>
#include<string>
using namespace std;
class Encrypet{
public:
    Encrypet()
    {
    }

public:
    char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'w', 'x', 'y', 'z'};
    string s;
    void startEncrypetion(string s){
        cout << s <<"\n";
        cout << "i am out loop:\n";
        int i = 0,j=0,l=0;
        
        for(i= 0 ;s[i] != '\0';i++){
            j = search(s[i],0,25);
            if(j==27){
                cout <<" ";
            }
                    //cout << "i am inside for loop:" << j << "\n";
            if (j <= 22){
                 l = 0; 
                while (l < 3){
                    l++;
                    j++;
                }
            cout << c[j];
            }
            else
            {
                l = 3;
                while (l >= 0)
                {
                    l--;
                    j--;
                }
                cout << c[j];
                }
                }       
        }
    
    int search(char car,int start,int end){
            int mid = start + mid;
            int i = 0;
            int index = 27;
            bool find = false; 
             for (; c[i]<=  car ; i++)
            {
                if (c[i] == car)
                {
                    find = true;
                index = i; 
                }
            }
            for (; (!find) && mid < end; mid++){
                if (c[mid] == car){
                    find = false;
                    index  = mid;
                }
            }
    return index;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /* 
       It Will return hash Value of char 
       You Need to Assume that hash value as index of Array.
       if You Are getting That Value so its fine 
       if you Are not getting that char so we need  to search it After that index so 
       you will find  it
       */
    int hashIt(char c='a'){
        static int hashkey = 0;
        if(((int)c) <26){
            return ((int)c);
        }
        if(((int)c >=26)){
            c = c % 25;
        hashkey =  hashIt(c);
        }    
    return hashkey;
    }       
};
int main(int argc, char const *argv[]){
    Encrypet obj;
    string s;
    cout << "Pleas Enter A String:" <<"\n";
    cin >> s;
    cout << "Thanks" <<"\n";
   cout << s <<"\n";
    obj.startEncrypetion("what are you doing ");
    return 0;
}

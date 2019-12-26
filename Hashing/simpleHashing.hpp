#ifndef simpleHashing
#define simpleHashing__hpp
//#define size 11;
using namespace std;
class hash1{
public:
        int key=0;
        int value=0;
        hash1(int key,int value){
            hash1::key =key;
            hash1::value =value;
    }
};
class simpleHashing{
private:
    /* data */
public:
static const int size =11;
    hash1 *h[size];
    simpleHashing(){

    }
    ~simpleHashing(){

    }
    int HashIt(int num){
         int hashkey;
         hashkey = num % size;
    return hashkey;}
    int insert(int num){
        int hashkey;
        hashkey = HashIt(num);
        for (size_t i = 0; i < size-hashkey; i++){   
              //linear probing is doing here
              if (hashkey < size &&  h[hashkey+i]->value == 0){
                    h[hashkey+i] = new hash1(hashkey, num);
                    return 1;
                 }
        }
    return 0;}
    /**  int search(int hashkey){
        //int hashkey = num%size;
        
        
                if(h[hashkey+i]->value =!0){
                    return h[hashkey + i]->value;
                }          
        
        
        //h[hashkey]->value;
    return 0;}**/
    int search(int value){
        int hashkey = HashIt(value);
        int i=0;
        while (i < (size-hashkey)){
            if (h[hashkey + i]->value == value){
                    return hashkey + i;
                    }
                  i++;}
        return 0;
    }
};
#endif // !1
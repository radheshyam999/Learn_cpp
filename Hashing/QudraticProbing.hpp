#include <iostream>
#include <vector>
#ifndef QudraticProbing__hpp
#define QudraticProbing__hpp
using namespace std;
class QudraticBlock
{
private:
    /* data */
public:
    int key = 0;
    int value = 0;
    QudraticBlock(int key, int value)
    {
        QudraticBlock::key = key;
        QudraticBlock::value = value;
    }
};

class QudraticProbing
{
private:
    /* data */
public:
    std::vector<QudraticBlock*> hashqudratic;
    QudraticProbing();{

    ~QudraticProbing()
    {
    }
    int hashIt(int value){           
        int size =hashqudratic.size();
        int hashkey = value % size;
        if(hashkey > size) {
            hashIt(hashkey);
        }
        return hashkey;
    }
    int insert(int value){
         int hashkey=hashIt(value);
         int size =hashqudratic.size();
          for(int i=0;i<(size - hashkey);i++){
              /***
               * Qudritic probing 
               * **/
              if(hashqudratic[hashkey+(i*i)]==NULL){
                  hashqudratic[hashkey+(i*i)]=new QudraticBlock(hashkey,value);
               } 
            }  
     }
};
#endif // !
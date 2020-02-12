#include<iostream>
using namespace std;
class OperaterOverLoding{
    private:
    int nReal;
    int mReal;
public:
     OperaterOverLoding(){}
    OperaterOverLoding(int nReal,int mReal){
        this->mReal = mReal;
        this->nReal = nReal;
    } 
public:
    OperaterOverLoding operator +(const OperaterOverLoding & p){
        OperaterOverLoding sum;
        sum.mReal  = p.mReal+p.nReal;
        sum.nReal =  p.nReal + p.mReal;
    //cout <<"mReal :" << this->mReal << "\n nReal:" << this->nReal;
    return sum;
    }
    void show(){
        cout << "mReal :" << this->mReal << "\n nReal:" << this->nReal;
    }
};
int main(int argc, char const *argv[]){
    OperaterOverLoding a(5,6);
    OperaterOverLoding b(10, 20);
    OperaterOverLoding c;
    c = a+b;
    c.show();
    
    return 0;
}

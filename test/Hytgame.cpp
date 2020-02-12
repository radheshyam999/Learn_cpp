#include<iostream>
using namespace std;
class Aramy{
    public:
     virtual void display(){
          cout << "Display Game start here" << endl; 
     }

};


class  Gov: public Aramy{
 public:
    void display(){
        cout << "overrriding" <<"\n"; 
    }
};
int main(int argc, char const *argv[]){
    Aramy obj;
    Aramy *objP;
    Gov objG;
    objP = &objG;
    objP->display();
    obj.display();
    return 0;
}

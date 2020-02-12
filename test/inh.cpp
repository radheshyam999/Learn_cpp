#include<iostream>
using namespace std;
class inh{};
class A{
   public:
     int display(){
            cout << "i am display A" <<"\n"; 
        return 0; 
     }  
};
class B:public A{
    public:
    int display(){
        cout << "i am display B" << "\n";
        return 0;
    }
};
class D{
public:
    int display(){
        cout << "i am display D"<< "\n";
     return 0;
    }
};
class C:public B,public D{
    public:
        int display(){
            cout << "i am display C"<< "\n";
            return 0;
        }
};
int main(int argc, char const *argv[]){
   C obj;
   B *obB = &obj;
   A *obA = &obj;
   obB->display();
   cout << "\n";
   obj.display();
   cout << "\n";
   obA->display();
   return 1;
}

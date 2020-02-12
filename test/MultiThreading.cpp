#include<iostream>
#include<thread>
using namespace std;
class MultiThreading{
public:
    void play(){
        for (size_t i = 0; i < 20; i++){
            cout << "hello thread" << "\n";
        }
        
    }

    void go(){
        for (size_t i = 0; i < 20; i++){
            cout << "hello thread go" << "\n";
        }
    }
};
int main(int argc, char const *argv[]){
    MultiThreading ob;
   //ob.play();
     thread mul;
     thread mul1(ob.play);
    // mul.join();
    // mul1.join(); 
    return 0;
}

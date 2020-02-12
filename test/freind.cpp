#include<iostream>
using namespace std;
class Myfriend{
public:
    friend int demo(Myfriend);
    int hello = 0;
    double game = 12.9; 
};
class test{
    
};
int demo(Myfriend d)
{
    cout << d.game << "\n";
    cout << d.hello;
    return 0;

}
int main(int argc, char const *argv[]){
        Myfriend m;
        demo(m);
        return 0;
    }

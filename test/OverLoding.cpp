#include<iostream>
using namespace std;
/*
This is All about funcution Overloding  



*/
class OverLoding{
public:
    int display(int x,int y){
        cout << "X:" << x << "\n Y:" << y;
        return x+y;}

    int display(int x, int y,int z){
        cout << "X:" << x << "\n Y:" << y <<"\n Z" << z;
        return x+y+z;}

    int display(int x, int y,int A,int z){
        cout << "X:" << x <<"\n Y:" << y << "\n A:" << A << "\n Z" << z;
        return x+y+A+z;}
};
int main(int argc, char const *argv[]){
   OverLoding obj;
   obj.display(4,5);
   cout << "\n display" <<"\n";
   obj.display(4, 5,6);
   cout << "\n display"<< "\n";
   obj.display(4, 5,6,7);
   return 1;
}

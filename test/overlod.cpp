#include<iostream>
using namespace std;
int add(int a){
    cout << "I have one Argumnet" <<"\n";
return 0;
}
int add(int a,int b){
    cout << "I have two Argumnet" << "\n";
return 0;
}

int main(int argc, char const *argv[])
{
    /* code */
    
    add(5,7);
    add(5);
    
    return 0;
}

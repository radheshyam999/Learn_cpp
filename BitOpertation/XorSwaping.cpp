#include<iostream>
using namespace std;
/*
It is way of swaping which do not need extra memory also  it minmize time cost
just onely problem is it little bit tough to understand for newbab    
*/
void swap(int *x,int *y){
    *x = (*x)^(*y);
       *y = (*x) ^ (*y);
    *x = (*x) ^ (*y);
}


int main(int argc, char const *argv[]){
    int x = 5;
    int y = 10;
    cout <<"x:"<<x <<"\t y: "<<y;
     swap(&x,&y);
     cout <<"\n Afte swaping " <<"\n";
     cout << "x:" << x << "\t y: " << y;
     return 0;
}

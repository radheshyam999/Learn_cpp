#include<iostream>
#include "library/BinaryConverter.h"
using namespace std;
int main(){
	int num; 
	cin >>num; 
	BinaryConverter obj;
	num = obj.dTob(num);
    cout << num << endl;	


return 0;
}

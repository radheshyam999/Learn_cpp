#include<iostream>
#include<string>
using namespace std;

int divde(int n){
for (int i = 2; i < n ; i++){
    for (int j = i+1; j < n; j++){
        for (int k = j+1; k < n; k++){
            cout << "Breaking Programe \n";
            if(i*j*k == n){
                cout << i << j << k;  
                n = 0;
                break;
            }   
            if(((i * j * k) > n)){
                cout << "Breaking Programe \n";
                break;
            }   
        }
    }
}
return 0;
}
int main(int argc, char const *argv[]){
    int n = 0, num = 0;
    cin >> n;
    for(int i = 0;i<n;i++){
         cin >> num;
         divde(num);
    }
    return 0;
}

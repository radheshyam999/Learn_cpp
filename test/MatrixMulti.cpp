#include<iostream>
using namespace std;

void matrixMult(int x[][2], int y[][2], int size, int A[][2]){
    for (int i = 0; i < size; i++){
        int sum = 0;
        for (int j = 0; j < size; j++){
            sum = 0;
            for (int k = 0; k < size; k++){
                sum += x[j][k] * y[k][i];
            }
            A[i][j] = sum;
        }
}
for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
            cout << A[i][j] << " ";
    }
    cout << "\n";
}
}
    int main(int argc, char const *argv[]){
        int x[][2] = {{1, 2}, {3, 4}};
        int y[][2] = {{5, 6}, {7, 8}};
        int A[2][2] = {{0, 0}, {0, 0}};
        matrixMult(x, y, 2, A);
        return 0;
    }


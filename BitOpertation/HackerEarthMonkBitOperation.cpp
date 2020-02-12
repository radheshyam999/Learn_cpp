#include<iostream>
using namespace std;
int countBit(int n){
    int numberbit = 0;
    while(n){
         n = n&(n-1);
         numberbit++;
     }
   return numberbit;
}
int *sort(int *A,int n){
    int min = 0;
    for(int i = 0; i < n - 1;i++){
         min = i;
         int j = i + 1;
         for (; j < n; j++){
             if (A[min] > A[j])
                 min = j;
              } 
        if(min != i){
            /** Using Xor Swaping here to  done swaping task*/
           A[min] = A[min] ^ A[i];
           A[i]   = A[min] ^ A[i];
           A[min] = A[min] ^ A[i];
        }
    }
    // cout << " printing the bit \n";
    // for(int i = 0; i < n;i++){
    //     cout << A[i] << "\t";
    // }

    // cout << "\n";
    return A;
}

int main(int argc, char const *argv[]){
    int n,m,p;
    cin >> n;
    for(int i= 0;i<n;i++){
        int count = 0;
        cin >> m >>p;        
        int A[m];
        for(int j= 0;j < m;j++){
             cin >> A[j];
             A[j] = countBit(A[j]);
           }
           sort(A,m);
           for (int k = 0; k < p; k++){
                --m;
                count+= A[m];  
           }
         cout << "ANS" << count;
    }
return 0;
}

/*
Monk loves cakes! He visits the Binary Bakery to buy some of his favorite cheesecakes.
The owner of the bakery, Bob, is a clever man. He does not want Monk to finish all his cheesecakes. Hence, he plays a game.
The Monk is given N numbers and has to select K of these numbers. For each number that Monk chooses, he will get as many cheesecakes as the number of 1's in the Binary representation of the number i.e. the number of bits that are set.
Help Monk find the maximum number of cakes that he can have.

Input:
The first line of input contains T. T test cases follow.
First line of each test cases contains 2 space-separated integers N and K.
The next line contains N space-separated integers.

Output:
For each test cases, print the answer in a new line.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 103
0 ≤ K ≤ N
0 ≤ Numbers ≤ 105


input:
10
4 1
3 1 5 1
7 4
3 1 2 1 2 1 5
7 4
0 4 4 5 2 3 3
3 2
2 1 1
6 5
0 0 0 5 3 1
7 3
4 3 3 3 5 2 1
9 4
5 0 5 4 1 2 2 3 2
1 0
1
6 6
2 3 2 5 4 3
4 2
0 3 0 3
*/
/*

OutPut:
2
6
7
2
5
6
7
0
9
4

*/
/*
 * C++ Program to Find Permutations of Given Character String
 */

#include <iostream>
using namespace std;

/* Function to swap two characters */
void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

/* Function to obtain permutations of string characters */
void permutation(string s, int i, int n)
{
    int j;
    if (i == n)
        cout << s << "\t";
    else
    {
        for (j = i; j < s.length(); j++){
            
            swap(s[i], s[j]);
            permutation(s, i + 1, n);
            swap(s[i], s[j]);
        
        }
    }
    // cout << "\n";
    // for (size_t i = 0; i < s.length()-1; i++)
    // {
    //     for (size_t j = 0; j < s.length(); j++){
    //         cout << s[i];
    //     }
    //     cout << "\n";
    // }
    

}

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << endl
         << "The permutations of the given string : " << endl;
    permutation(s, 0, s.length() - 1);
    cout << endl;
}

// #include<iostream>
// using namespace std;
//     int findfactorila(int n){
//         if(n <= 1){
//             return 1;
//         }
//      return n*findfactorila(n -1);
//     }
// void permute(void *A){
//       int n = findfactorila(sizeof(A));
//       int size = sizeof(A);
//       cout << "Index" << size;
//       //exit(0);
//     for (size_t i = 0; i < size+1; i++){
//         i = i >= size-1 ? 0 : i;
//         for (size_t j = i; j < size+1; j++){
//              j = j > size ? i : j;
//                cout << ((int *)A)[j] <<" ";
//         }
//         cout << "Line Break \n";
//     }
    
// }



// int main(int argc, char const *argv[]){

/**
 * Some how it is working But it Run for infinite Time which realy sucking need to  work more 
 * 
 * **/

//     int n = 0;
//     cin >> n;
//     int i = 0;
//     int A[n];
//     while (i < n){
//        cin >> A[i];
//     i++;
//     }
//     permute(A);

//     return 0;
// }

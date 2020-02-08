#include <iostream>
using namespace std;
/*
12345
1234
123
12
1
*/
int main(int argc, const char **argv)
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
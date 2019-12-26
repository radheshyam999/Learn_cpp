#include<iostream>
using namespace std;
class Pattern{
    public :
        Pattern(){

        }
         int Patternprint(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (size_t j = 0; j < n + n - 1; j++)
                {
                    if (j >= n - i && j <= n + n - 1 - i)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout<<"\n";
            }
            return 0;}
            int Pattern2(int n){
                cout << "\n";
                for (int i = 1; i <= n; i++)
                {
                    for (size_t j = 0; j < n + n - 1; j++)
                    {
                        if (j == n - i || j == n + n - 1 - i||(i==1&&j >=n)||(i==n && j<n) )
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " 0";
                        }
                    }
                    cout << "\n";
                }
            return 0;}
};
int main(int argc, char const *argv[])
{
    Pattern obj;
int n;
cin >> n;
           obj.Patternprint(n);
           obj.Pattern2(n);
return 0;
}

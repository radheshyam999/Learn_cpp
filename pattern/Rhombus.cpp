/*
*****
 *****
  *****
   *****
    *****    
    */
   #include<iostream>
   using namespace std;
   class Rhombus{
        public :
            Rhombus(){

            } 
            int Patternprint(int n)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (size_t j = 0; j < n + n - 1; j++)
                    {
                        if (j >=i-1&&j < n +i-1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << "\n";
                }
                return 0;}

/*
*****
 *   *
  *   *
   *   *
    *****
*/

            int Patternprint2(int n)
            {  cout<< "\n";
                for (int i = 1; i <= n; i++)
                {
                    for (size_t j = 0; j < n + n - 1; j++)
                    {
                        if (j == i - 1 || j == (n + i - 1) || j<n-1&&i == 1||j>n-1&&i==n )
                        {
                            cout << " * ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << "\n";
                }
                return 0;
            }
   };
   int main(int argc, char const *argv[])
   {
       Rhombus object;
       int n;
       cin >>n;
       object.Patternprint(n);
       object.Patternprint2(n);
        return 0;
   }
   

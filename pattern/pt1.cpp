#include<iostream>
/*
******
*    *
*    *
*    *
******
*/
using namespace std;
class pt1
{
private:
    /* data */
public:
    pt1(/* args */){

    }
    ~pt1(){

    }
void ptern1(int size){
    for (size_t i = 0; i < size; i++)
    {
      for (size_t j = 0; j < size; j++)
      {
          if(j==0||j==size-1|| i==size-1 ||i==0) cout <<"*";
          else cout<<" ";
      }
      cout << endl;
    }
    




}

};
int main(int argc, char const *argv[])
{
    pt1 p ;
    p.ptern1(5);
    return 0;
}


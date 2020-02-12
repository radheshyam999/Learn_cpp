//Pointers to Class Members
        

#include<iostream>
    using namespace std;
class Membr{
    
  public:
      int value;
      Membr(int value)
      {
          Membr::value = value;
    }
     int doubleIt(){

    return value*value;
    }


};
int main(int argc, char const *argv[])
{
    Membr a(3);
    Membr b(4);
    int Membr::*data;
    int (Membr::*func)();
    data = &Membr::value;
    func = &Membr::doubleIt;
    cout << a.*data <<b.*data<<"\n";
    cout << (a.*func)() << (b.*func)();
    return 0;
}


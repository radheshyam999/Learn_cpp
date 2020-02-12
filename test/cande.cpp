#include<iostream>
using namespace std;
class cande{
    public :
        int PlayIt()
        {
            cout << "PlayIt ?"
                 << "\n";
            return 0;
        }
        int doIt(){
            cout << "Do It?"
                 << "\n";
            return 0;
        }
};
class ht : public cande {
  public:
      int PlayIt()
      {
          cout << "Play It hjkhkjhkhkh ?"
               << "\n";
          return 0;
      }
      int doIt()
      {
          cout << "Do It jkjhkhhhhhhhhhhhjkkjkljljl?"
               << "\n";
          return 0;
      }
};

int main(int argc, char const *argv[]){
   cande *p;
   //cande::doIt();
   ht obj;
   p = &obj;
   p->doIt();
   p->PlayIt();
   ht *c = (ht*) p;
   //ht *c = dynamic_cast<ht*>(&obj);
   if(c){
       c->doIt();
       c->PlayIt();
   }else{
       cout << "Conversion Faild" <<" \t so take care of that";
   }
   
    return 0;
}




/*
int dived(int C,int p){
       int z = 0,sum=0;
       int a = 0,b = 0;
       for(int i=p;i >0; i--){
           a = C / i;
           if(b <= a+1){
               ++a;
           }
           C = C - z;
           sum += z;   
       }   
    return sum;
}
int main(){
    int n;
    cin >> n;
    int i = 0;
    int C, p;
    while(i < n){
        cin >> C >> p;
        cout << dived(C , p);
    i++;
    }
}*/
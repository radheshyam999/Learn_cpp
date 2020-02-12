int power(int base,int pow){
    int temp =1;
    if(pow!=1){
      temp =base* power(base,pow-1);
    }
    return temp;
}
int isprime(int num){
     int isprime =0;
     if(num >2) isprime =1;
     for(int i=2;i<=num/i;i++){
               if(num%i==0) isprime=0; 
     }
     return isprime;
}
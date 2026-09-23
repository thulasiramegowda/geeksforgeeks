int gcd(int a, int b) {
    // code here
    int rem = 1;
    int d1,d2;
   if(a>b){
      d1=a;
      d2=b;
   }
   else{
       d1=b;
       d2=a;
   }
   while(rem != 0){
       rem = d1%d2;
       if(rem!=0){
           d1=d2;
           d2=rem;
       }
   }
   return d2;
}
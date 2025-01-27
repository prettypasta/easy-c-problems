int mySqrt(int x) {
    if (x==0 || x==1){
        return x ;
    }
    for(long long int i=1 ; i<=x ; i++){
        if (i*i>x){
            return i-1;
        }
    }
  return 0;
}
    

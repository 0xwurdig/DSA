int fibonacci(int n){
    lld a=0,b=1,sum;
    if(n==0)
       return a;
    for(int i=2;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return b;
}

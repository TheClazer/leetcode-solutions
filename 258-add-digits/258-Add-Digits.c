int addDigits(int num) {
    int n = num,temp=0;
while(1){
    while(n!=0){
    temp +=n%10;
    n=n/10;}
    if(n<10 && temp>9){
        n= temp;
        temp=0;
    }
    else if(n<10 &&  temp<10){
        return temp;
    }
}
    
    
}
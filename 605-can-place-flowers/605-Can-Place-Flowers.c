bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0; int left,right;
    for(int i=0;i<flowerbedSize;i++){
        left=0;
        if(i>0)left = flowerbed[i-1];
        right=0;
        if(i<flowerbedSize-1) right = flowerbed[i+1];
        if(flowerbed[i]==0 && left ==0 && right ==0 ){
            count++;
            i++;
        }
    }
    if(n>count)return false;
    return true;
}   

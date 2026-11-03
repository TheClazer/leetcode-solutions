int largestAltitude(int* gain, int gainSize) {
    int alt[gainSize+1];
    alt[0]=0;
    for(int i =0;i<gainSize;i++){
        alt[i+1]=alt[i]+gain[i];
    }
    int max = alt[0];
    for(int i= 0;i<gainSize+1;i++){
        if(alt[i]>max) max = alt[i];
    }
    return max;
}
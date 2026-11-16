bool isPalindrome(char* s) {
    int len=0,newlen=0;
    while(s[len]!='\0'){
        if((s[len]>=65 && s[len]<=90) || (s[len]>=97 && s[len]<=122) || (s[len]>=48 && s[len]<=57)) newlen++;
        len++;
    }
    if(newlen==0) return true;
    char ans[newlen];
    newlen=0;
    for(int i=0;i<len;i++){
        if(s[i]>=65 && s[i]<=90){
            ans[newlen++]=s[i]+32;
        }
        if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
            ans[newlen++]=s[i];
        }
    }
    int lo=0,hi=newlen-1;
    while(lo<hi){
        if(ans[lo]!=ans[hi]) return false;
        lo++; hi--;
    }
    return true;
}
int strStr(char* haystack, char* needle) {
    int i,j=0;
    for(i=0;haystack[i]!='\0';i++){
        if(needle[j]=='\0'){
            return i-j;
        }
        if(haystack[i]==needle[j]){
            j++;
        }
        else{
            if(j>0){
                i=i-j;
            }
            j=0;
        }
        
    }   
    if(needle[j] == '\0'){
        return i - j;
    }
    return -1;
}
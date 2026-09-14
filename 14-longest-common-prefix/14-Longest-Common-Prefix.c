char* longestCommonPrefix(char** strs, int strsSize) {
 int i,j;
 while(strs[0][j]!='\0'){
    for(i=1;i<strsSize;i++){
    if(strs[i][j]!=strs[0][j]){
        strs[0][j]='\0';
        return strs[0];
    }
 } 
   j++;
 }
 return strs[0];

 
}
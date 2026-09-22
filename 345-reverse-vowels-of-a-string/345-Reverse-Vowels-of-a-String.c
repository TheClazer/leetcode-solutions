char* reverseVowels(char* s) {
    int count=0,j=0; int i;
    for( i = 0;s[i]!='\0';i++){
        switch(s[i]){
            case 'a':
            case 'A':
            case 'E':
            case 'e':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': count++;
            
        }
    }
    char *a = malloc(count * sizeof(char));
     for( i = 0;s[i]!='\0';i++){
        switch(s[i]){
            case 'a':
            case 'A':
            case 'E':
            case 'e':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': a[j++]=s[i];
            
        }
    }
    j=0;
    for(;i>=0;i--){
        switch(s[i]){
            case 'a':
            case 'A':
            case 'E':
            case 'e':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': s[i]=a[j++];
            
        }
    }
    return s;
}
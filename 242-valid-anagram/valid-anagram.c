bool isAnagram(char* s, char* t) {
    int hash1[50001] = {0};
    int hash2[50001] = {0};
    int len1 = strlen(s);
    int len2 = strlen(t);

    if(len1 != len2){
        return false ;
    }
    for(int i= 0;i<strlen(s);i++){
        hash1[s[i]]++;
        hash2[t[i]]++;
    }

    for(int i=0;i<strlen(s);i++){
        if(hash1[s[i]] != hash2[s[i]]){
            return false;

        }
    }
    return true;
    
}
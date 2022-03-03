bool isSubsequence(string s, string t) {
    int index = 0;
    int m = s.length();
    int n = t.length();
    for (int i=0; i<n; i++){
        if (t[i] == s[index]){
            index++;
        }
        if (index >= m){
            break;
        }
    }
    if (index >= m){
        return true;
    }
    return false;
}
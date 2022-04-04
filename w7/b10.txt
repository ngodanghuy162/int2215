void rFilter(char *s) {
    int i = strlen(s)-1;
    while(i >= 0 && !((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
    {
       s[i] = '_';
       i--;
    }
}
class Soultion{
char extraChar(string &s1, string &s2) {
    char result = 0;  

    for (int i = 0; i < s1.length(); i++) {
        result ^= s1[i];
    }

    for (int i = 0; i < s2.length(); i++) {
        result ^= s2[i];
    }

    return result; 
}
};
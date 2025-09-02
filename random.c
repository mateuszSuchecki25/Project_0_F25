void rand_string(char *s, size_t size)
{
    const char possibleChars[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789";

    if(size){
        for (size_t n = 0; n < size; n++) {
            int key = rand() % (int)(sizeof(possibleChars) - 1);
            s[n] = possibleChars[key];
        }
        s[size] = '\0'; 
    }
}

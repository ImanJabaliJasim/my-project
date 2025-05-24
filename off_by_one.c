int length = 0, sum = 0;
while (1) {
    fgets(buff1, MAX_SIZE, stdin);
    int len = strnlen(buff1, MAX_SIZE);
    if (sum + len <= MAX_SIZE) {
        strncat(buff2, buff1, len);
        sum += len;
    }
}

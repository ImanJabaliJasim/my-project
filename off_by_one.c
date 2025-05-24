int length = 0, sum = 0;
while (1) {
    fgets(buff1, MAX_SIZE, stdin);
    int len = strnlen(buff1, MAX_SIZE);
    if (sum + len < MAX_SIZE) {

        // Use a safer alternative to strncat to avoid buffer overflow
        if (len > 0 && buff1[len - 1] == '\n') {
            buff1[len - 1] = '\0'; // Remove newline character
            len--;
        }
        if (len == 0) {
            break; // Exit loop if no input
        }
        // Ensure buff2 is large enough to hold the concatenated result
        if (sum + len >= MAX_SIZE) {
            fprintf(stderr, "Buffer overflow detected!\n");
            break; // Exit if adding would exceed buffer size
        }   
        sum += len;
    } 
}

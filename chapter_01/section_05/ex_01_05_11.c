#include <stdio.h>

void string_copy(char destination[], char source[])
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

int main(void)
{
    // Test Case 1: Standard Word
    char source1[] = "Hello!";
    char dest1[50];
    string_copy(dest1, source1);
    printf("Test 1 Result: '%s' (should be 'Hello!')\n", dest1);

    // Test Case 2: String with spaces
    char source2[] = "Dive into Systems";
    char dest2[50];
    string_copy(dest2, source2);
    printf("Test 2 Result: '%s' (should be 'Dive into Systems')\n", dest2);

    // Test Case 3: Empty String
    char source3[] = "";
    char dest3[50];
    string_copy(dest3, source3);
    printf("Test 3 Result: '%s' (should be '')\n", dest3);

    return 0;
}
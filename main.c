#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);
int main(void)
{
    const char* test_cases[] = {
        "\n\n\n  -46\b9 \n5d6",     // Leading/trailing whitespace, sign, invalid character
        "   +123",                  // Leading whitespace and positive number
        "  -456",                   // Leading whitespace and negative number
        "789   ",                   // Trailing whitespace
        "  +  1 23  ",              // Multiple whitespace and number with sign
        "42abc",                    // Invalid character 'a'
        "  ",                       // Empty string
        "2147483647",               // INT_MAX
        "-2147483648",              // INT_MIN
        "999999999999999999999999", // Integer overflow (may not be handled correctly)
        "000123"                    // Leading zeros
          "123",               // Basic positive number
    "-456",              // Basic negative number
    "0",                 // Zero
    "   789",            // Leading whitespace
    "+42",               // Leading plus sign
    "-42",               // Leading minus sign
    "   +   123",        // Multiple whitespace and number with sign
    "9876543210",        // Large positive number
    "-9876543210",       // Large negative number
    "2147483647",        // INT_MAX
    "-2147483648",       // INT_MIN
    "   000123   ",      // Leading/trailing zeros
    "12a34",             // Invalid character in between digits
    "12345abc",          // Invalid character at the end
    "  \t\n\r\f\v  ",    // Only whitespace characters
    "   ",               // Multiple whitespace characters
    NULL         
    };

    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); ++i) {
        const char* str = test_cases[i];
        int ft_result = ft_atoi(str);
        int atoi_result = atoi(str);
        printf("Input: \"%s\"\n", str);
        printf("ft_atoi result: %d\n", ft_result);
        printf("atoi result: %d\n", atoi_result);
        printf("--------\n");
    }

    return 0;
}

# Reverse digits of an integer
# Example:
#          x = 123, return 321
#          x = -123, return -321

#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          V
# Solution:

int reverse_int(int num) {
    int reversed = 0, rem;
    while (num != 0) {
        rem = num % 10;
        reversed = (reversed*10) + rem;
        num /= 10;
    }
    return reversed;
}

# O(n) time, O(1) space
# Explanation: Start by taking remander of number when divided by ten, giving you the digit in the ones place. Multiply the
# reversed number by 10 to provide room in the ones place of the reverse number, and then add the remander into that 
# ones place. Do this until the original number has no digits left.

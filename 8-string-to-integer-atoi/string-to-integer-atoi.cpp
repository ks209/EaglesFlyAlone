class Solution {
public:
    int myAtoi(string s) {

        int n = s.length();
        int i = 0;

        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check if string is empty after spaces
        if (i == n) return 0;

        // Handle sign
        int sign = 1;

        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        long long sum = 0;

        // Parse digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            sum = sum * 10 + digit;

            // Handle overflow
            if (sign * sum >= INT_MAX)
                return INT_MAX;

            if (sign * sum <= INT_MIN)
                return INT_MIN;

            i++;
        }

        return (int)(sign * sum);
    }
};
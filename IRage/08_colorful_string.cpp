/*
    Time Complexity: O(N ^ 2)
    Space Complexity: O(N)

    where 'N' is the length of the string.
*/

long long possibleStrings(int n, int r, int b, int g) {

    //  To store the factorial.
    vector<long long> fact(n + 1);

    fact[0] = 1;
    for (long long i = 1; i <= n; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    //  To store the count of possible strings.
    long long ans = 0;

    for (int i = r; i <= n; i++)
    {
        for (int j = b; j <= n; j++)
        {
            //  Denotes the count of 'G's in the string.
            int k = n - i - j;
            if (k >= g)
            {
                ans = ans + (fact[n]) / (fact[i] * fact[j] * fact[k]);
            }
        }
    }

    return ans;
}
//fully accepted.
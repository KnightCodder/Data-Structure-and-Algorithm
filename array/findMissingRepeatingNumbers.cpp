#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

vector<int> findMissingRepeatingNumber(vector<int> nums)
{
    int n = nums.size();

    unsigned long long int sum = 0, sqsum = 0;

    for (int x : nums)
    {
        sum += x;
        sqsum += x*x;
    }

    // now i need to implement the formula of sum of n natural number and sum of square of n natural numbers from there i can get both missing and repeated value in O(N) time complexity and in O(1) space complexity

    return {};
}

void print_vector(const vector<int> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

int main()
{
    print_vector(findMissingRepeatingNumber({2,2,1}));
}
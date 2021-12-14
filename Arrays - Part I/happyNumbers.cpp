class Solution
{
public:
    int sumOfSquaresOfDigits(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int last_digit = (n % 10);
            sum += (last_digit * last_digit);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {

        unordered_map<int, bool> visited;
        while (n != 1)
        {
            int curr = sumOfSquaresOfDigits(n);
            if (visited.find(curr) != visited.end())
            {
                return false;
            }
            visited[curr] = 1;
            n = curr;
        }
        return true;
    }
};
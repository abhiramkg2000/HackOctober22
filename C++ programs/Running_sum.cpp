#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> temp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j <= i; j++)
            {
                sum += nums[j];
            }
            temp.push_back(sum);
        }
        return temp;
    }
};

int main()
{

    Solution s;
    vector<int> vect{10, 20, 30};
    vector<int> ans;
    ans = s.runningSum(vect);
    for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << " ";

    return 0;
}

#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int x = 0; x < nums.size(); x++)
            for (int y = x + 1; y < nums.size(); y++)
            {
                if (nums[x] + nums[y] == target)
                {
                    return { x, y };
                }
            }
        return { };
    }
};
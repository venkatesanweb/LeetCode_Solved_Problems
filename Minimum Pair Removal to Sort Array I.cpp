class Solution {
public:

    bool is_non_decreasing(const vector<int>& nums)
    {   
        for (size_t i = 0; i + 1 < nums.size(); ++i)
            if (nums[i] > nums[i + 1]) return false;

        return true;
    }

    int minimumPairRemoval(vector<int>& nums)
    {
        unsigned int operations = 0;
        while (!is_non_decreasing(nums))
        {
            int min_sum = INT_MAX;
            int min_index = 0;


            for (size_t i = 0; i < nums.size() - 1; i++)
            {
                int sum = nums[i] + nums[i + 1];

                if (sum < min_sum)
                {
                    min_sum = sum;
                    min_index = i;
                }
            }

            nums[min_index] = min_sum;
            nums.erase(nums.begin() + min_index + 1);

            operations += 1;
        }

        return operations;
    }
};

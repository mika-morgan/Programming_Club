class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int answer, sum, dif;
        int min_d = INT_MAX;

        for(int i = 0; i < nums.size() - 2; i++)
        {
            for(int j = i + 1; j < nums.size() - 1; j++)
            {
                for(int k = j + 1; k < nums.size(); k++)
                {
                    sum = nums[i] + nums[j] + nums[k];
                    dif = abs(target - sum);

                    if(dif < min_d)
                    {
                        min_d = dif;
                        answer = sum;
                    }
                }
            }
        }

        return answer;
    }
};

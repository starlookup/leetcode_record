
vector<int> twoSum(vector<int>& nums,int target)
{
    unordered_map<int,int> result;
    vector<int> return_back;
    int i = 0;
    for(i = 0;i < nums.size();i++)
    {
        result.insert({nums[i],i});
    }
    for(i = 0;i < nums.size();i++)
    {
        int flag = 0;
        auto other_num = target - nums[i];
        if(other_num != nums[i])
        {
            auto it = result.find(other_num);
            if(it == result.end())
            {
                continue;
            }
            else
            {
                return_back.push_back(i);
                return_back.push_back(it->second);
                flag = 1;
            }
            if(flag == 1)
            {
                break;
            }
        }
        else
        {
            if(count(nums.begin(),nums.end(),other_num) > 1)
            {
                for(i = 0;i<nums.size();i++)
                {
                    if(nums[i] == other_num)
                    {
                        return_back.push_back(i);
                    }
                }
            }
            else
            {
                continue;
            }
        }
    }
    return return_back;
}

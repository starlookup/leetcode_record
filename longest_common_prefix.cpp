class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        {
            return "";
        }
        else
        {
            int min_size = strs[0].size();
            int flag = 0;
            string result;
            for(auto i : strs)
            {
                if(i.size() < min_size)
                {
                    min_size = i.size();
                }
            }
            for(int j = 0;j < min_size;++j)
            {
                string temp = strs[0].substr(0,(j+1));
                flag = 0;
                for(auto str:strs)
                {
                    if(str.substr(0,(j+1)) != temp)
                    {
                        ++flag;
                    }
                }
                if(flag == 0)
                {
                    result = temp;
                }
            }
        return result;
        }      
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
    vector<string> result(numRows);
    string::iterator in = s.begin();
    if (numRows > 1)
    {
        int cycle_num = 2 * numRows - 2;
        for(int i = 0;i<cycle_num;)
        {
            if(in != s.end())
            {
                if(i < numRows)
                {
                    result[i] += *in;
                    ++in;
                    ++i;
                    i = i%cycle_num;
                }
                else
                {
                    result[cycle_num - i] += *in;
                    ++in;
                    ++i;
                    i = i%cycle_num;
                }
            }
            else
            {
                break;
            }
        }
        string result_str;
        for(auto i : result)
        {
            result_str += i;
        }
        return result_str;
    }
    else
    {
        string result_str = s; 
        return result_str;
    }
    
    }
};
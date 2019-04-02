class Solution {
public:
    int reverse(int x) {
   int i = 0;
        int temp = x;
        string int_string = to_string(x);
        int result = 0;
        while (temp != 0)
        {
            if ((temp % 10) == 0)
            {
                ++i;
                temp = temp / 10;
            }
            else
            {
                break;
            }
        }
        if (x >= 0)
        {
            std::reverse(int_string.begin(), int_string.end() - i);
        }
        else if (x < 0)
        {
            std::reverse(int_string.begin() + 1, int_string.end() - i);
        }
        string result_string(int_string,0,int_string.size()-i);
        try
        {
            result = std::stoi(result_string);
        }
        catch(std::out_of_range err)
        {
            return 0;
        }
        
        return result;
    }
};
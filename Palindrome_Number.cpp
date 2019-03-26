class Solution {
public:
    bool isPalindrome(int x) {
        auto str_x = std::to_string(x);
        std::string str_y(str_x);
        reverse(str_y.begin(),str_y.end());
        if(str_x == str_y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
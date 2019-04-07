#include <iostream>
#include <string>

using namespace std;

string longestPalindrome(string s)
{
    int low_bound = 0,high_bound = 0,max_len = 0,temp = 0,result_low = 0;
    if((s.empty()) || (s.size() == 1))
    {
        return s;
    }
    else
    {
        for(int i = 1;high_bound < s.size() && max_len < ((s.size() + 1) / 2);)
        {
            low_bound = i;
            high_bound = i;
            while(s[high_bound] == s[high_bound + 1])
            {
                i = high_bound + 1;
                ++high_bound;
            }
            for(;low_bound > 0 && (high_bound+1) < s.size() && s[low_bound - 1] == s[high_bound + 1];--low_bound,++high_bound);
           temp = high_bound -low_bound + 1;
           if(temp > max_len)
           {
                max_len = temp;
                result_low = low_bound;
           }
           i++;
        }
        return s.substr(result_low,max_len);
    }

}

int main()
{
    string s = "abcda";
    string result = longestPalindrome(s);
    cout << result << endl;
    return 0;

}
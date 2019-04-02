#include <iostream>
#include <string>

int main()
{
  unordered_map<char,int> sub_m;
        int i = 0,j = 0;
        int maxlen = 0;
        for(i = 0,j = 0;j<s.size();j++)
        {
            ++sub_m[s[j]];
            while(sub_m[s[j]] > 1)
            {
                sub_m[s[i]]--;
                i++;
            }
            maxlen = max(maxlen,j-i+1);
        }
        return maxlen;
}
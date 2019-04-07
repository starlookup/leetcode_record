class Solution {
public:
    int romanToInt(string s) {
        int num_result = 0;
    vector<char> roman_char{ 'I','V','X','L','C','D','M' };
    vector<int> romen_int{ 1,5,10,50,100,500,1000 };
    string::reverse_iterator in = s.rbegin();

    vector<char>::iterator iter = find(roman_char.begin(), roman_char.end(),*in);
    auto dis = distance(roman_char.begin(), iter);

    int temp = dis;
    num_result += romen_int[dis];
    ++in;

    for (unsigned int i = 1; i < s.size(); i++)
    {
        iter = find(roman_char.begin(), roman_char.end(), *in);
        dis = distance(roman_char.begin(), iter);
        if (dis >= temp)
        {
            num_result += romen_int[dis];
            temp = dis;
            ++in;
        }
        else
        {
            num_result -= romen_int[dis];
            temp = dis;
            ++in;
        }
    }
        return num_result;
    }
};
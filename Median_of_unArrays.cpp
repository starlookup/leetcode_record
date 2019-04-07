class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i = 0,j = 0;
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    multiset<double> num(nums1.cbegin(), nums1.cend());
    multiset<double>::iterator set_it = num.begin();
    double result = 0;
    if (nums1.size() % 2 == 0)
    {
        i = (nums1.size() / 2) -1;
        for (j = 0; j < i; j++)
        {
            ++set_it;
        }
        result = (*set_it + *(++set_it)) / 2;
    }
    else
    {
        i = (nums1.size() - 1) / 2;
        for (j = 0; j < i; j++)
        {
            ++set_it;
        }
        result = *set_it;
    }
        return result;
    }
};
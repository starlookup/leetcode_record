#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height)
{
    int i = 0,j = (height.size()-1);
    int min_height = 0;
    int water = 0;
    while(i < j)
    {
        min_height = min(height[i],height[j]);
        water = max(water,min_height * (j-i));
        while(height[i] <= min_height && i<j)
        {
            ++i;
        }
        while(height[j] <= min_height && i<j)
        {
            --j;
        }
    }
    return water;
}

int main()
{
    int result = 0;
    vector<int> height{1,8,6,2,5,4,8,3,7};
    result = maxArea(height);
    cout << result <<endl;
    return 0;
}
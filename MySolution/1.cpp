/*
    1.每种输入只对应一个答案
    2.不能重复利用数组中同样的元素
    
    读取当前值,求另一个数
    以此为起点在数组中查找另一值
    
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j,another=0;
        vector<int> res={0,0};
        auto num=nums.size();
        for(int i=0;i<num;i++)
        {
            another=target-nums[i];
            for(j=i+1;j<num;j++)
            {
                if(nums[j]==another)
                {
                    res[0]=i;
                    res[1]=j;
                    return res;
                }
            }
        }
        return res;
    }
};
```

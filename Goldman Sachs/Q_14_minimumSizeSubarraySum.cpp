class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int sum=0;
        int start=0;
        int end=0;
        int n=nums.size();
        int result=n+1;
        while(end<n)
        {
            while(sum<target && end<n)
            {
                sum+=nums[end++];
            }
            
            while(sum>=target && start<n )
            {
                
                if(end-start<result)
                {
                    result=end-start;
                }
                sum-=nums[start++];
            }
        }
        return (result!=n+1)?result:0;
        
    }
};

class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if(n==0 || s[0]=='0')
            return 0;
        if(n==1)
            return 1;
        int count1=1,count2=1; //count1-> ways till i-2 and count2-> ways till i-1
        int count; //count->total ways till i
        for(int i=1;i<n;i++)
        {
            count=0;
            int oneDigitFromLast=s[i]-'0';
            int twoDigitsFromLast=(s[i-1]-'0')*10+oneDigitFromLast;
            if(oneDigitFromLast  > 0)
            {
                count +=count2;
            }
            if(twoDigitsFromLast>=10 && twoDigitsFromLast<=26 )
            {
                count +=count1;
            }
            count1=count2;
            count2=count;
                
        }
        return count;
    }
};

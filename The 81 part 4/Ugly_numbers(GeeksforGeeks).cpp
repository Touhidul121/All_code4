
class Solution {
public:
    int minimum(int a,int b,int c)
    {
        return min(a,min(b,c));
    }
    int nthUglyNumber(int n) {
        int dp[n+1];

        int i2=0,i3=0,i5=0;
        int nxt2=2;
        int nxt3=3;
        int nxt5=5;
        int next_ugly=1;
        dp[0]=1;

        for(int i=1;i<n;i++)
        {
            next_ugly=minimum(nxt2,nxt3,nxt5);
            dp[i]=next_ugly;

            if(next_ugly==nxt2)
            {
                i2=i2+1;
                nxt2=dp[i2]*2;
            }
            if(next_ugly==nxt3) // do not use else if karon nxt3==15 and nxt5==15 hote pare tokhon dutokei update korte hobe
            {
                i3++;
                nxt3=dp[i3]*3;
            }
             if(next_ugly==nxt5)
            {
                i5++;
                nxt5=dp[i5]*5;
            }
        }
        return next_ugly;
    }
};

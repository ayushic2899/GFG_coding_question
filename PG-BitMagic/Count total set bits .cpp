class Solution{
    public:
    
    int largestPowerOf2inRange(int n){
        
        int x = 0;
        
        while((1 << x) <= n){
            x++;
        }
        
        return x-1;
    }
    int countSetBits(int n)
    {
        if(n==0){
            return 0;
        }
        int x=largestPowerOf2inRange(n);
        int x1=x*(1<<(x-1));
        int x2=n-(1<<x)+1;
        int rest=n-(1<<x);
        int ans=x1+x2+countSetBits(rest);
        
        return ans;
    }
};

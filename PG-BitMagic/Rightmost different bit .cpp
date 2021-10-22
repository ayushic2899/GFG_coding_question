class Solution
{
    public:
     
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==0 && n==0)
        {
            return -1;
        }
        int mask=1;
        int counter=1;
        while((mask&m)==(mask&n)){
            mask<<=1;
            counter+=1;
        }
        return counter;
    }
};

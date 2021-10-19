
class Solution
{
    long long func(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(n%2==1){
            return 1+func(n-2);
        }
        else{
            return 1+func(n-1);
        }
    }
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        return func(m);
    }
};

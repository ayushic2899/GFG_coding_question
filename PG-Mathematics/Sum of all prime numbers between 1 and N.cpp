//SIEVE OF ERATOSTHENES METHOD


class Solution{
	public:
   	long long int prime_Sum(int n){
   	long long int prime[n+1];
   memset(prime,0,sizeof(prime));
   
   for(int p=2;p*p<=n;p++)
   {
       if(prime[p]==0)
       {
           for(int i=p*p;i<=n;i+=p)
               prime[i]=1;
       }
   }
   long long int sum=0;
   for(int i=2;i<=n;i++)
   {
       if(prime[i]==0)
           sum+=i;
   }   
   return sum;
   	}    
};

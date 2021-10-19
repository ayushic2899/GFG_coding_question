class Solution {
  public:
    long long jumpingNums(long long X) {
       
        long long maxa=INT_MIN;
        for(int i=1;i<=9;i++){
            queue<long long>q;
            q.push(i);
            while(!q.empty()){
                long long num=q.front();
                q.pop();
                if(num<=X){
                    maxa=max(num,maxa);
                    long long lastdig=num%10;
                    
                    if(lastdig==0){
                        q.push((num*10)+(lastdig+1));
                    }
                    else if(lastdig==9){
                        q.push((num*10)+(lastdig-1));
                    }
                    else{
                      q.push((num*10)+(lastdig-1));
                       q.push((num*10)+(lastdig+1));
                    }
                }
            }
        }
        return maxa;
    }
};

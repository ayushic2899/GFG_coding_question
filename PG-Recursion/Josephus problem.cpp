class Solution
{
    public:
    int josephus(int n, int k)
    {
         queue <int> dq;
  for(int i=1;i<=n;i++)
  dq.push(i);
  while(dq.size()!=1){
    for(int i=0;i<k-1;i++){
      dq.push(dq.front());
      dq.pop();
    }
    dq.pop();
  }
  return dq.front();
    }
};

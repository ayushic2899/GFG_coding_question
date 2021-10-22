class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        uint32_t result=0;
        for(int i=0;i<32;i++){
            result<<=1;
            if(X&1){
                result++;
            }
            X>>=1;
        }
        return result;
        
    }
};

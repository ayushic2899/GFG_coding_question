class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
         int count=0;                         //i j k k
            sort(arr, arr + n);
        for(int i=2;i<n;i++){   // 3 5 4 6-- 3 4 5 6
           int left=0,right=i-1;
           while(left<right){
               if(arr[left]+arr[right]>arr[i]){
                   count+=(right-left);
                   right--;
               }
               else{
                   left++;
               }
           }
        }
           return count;
    }
};

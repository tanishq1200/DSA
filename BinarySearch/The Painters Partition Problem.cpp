public:
  bool isPossible(int a[], int n, int k, long long sol){
        long long timesum = 0;
        int c = 1;
        for(int i=0; i<n; i++){
            if(a[i] > sol){
                return false;
            }
            if(timesum + a[i] > sol){
                c++;
                timesum = a[i];
                if(c > k){
                    return false;
                }
            }
            else{
                timesum += a[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    long long minTime(int arr[], int n, int k) 
    {
        
        
        long long start = 0;
        long long  end = 0;
        for(int i = 0; i < n; i++){
            end += arr[i];
        }
        long long  ans = -1;
        
        while(start <= end){
            long long mid = (start + end) >> 1;
            if(isPossible(arr, n, k, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};

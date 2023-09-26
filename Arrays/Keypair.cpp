class Solution{
public:	
	bool twopointer(int arr[] , int n, int x){
        int start = 0;
        int last = n-1;
        while(start < last){
            int sum = arr[start] + arr[last];
            if(sum == x) return true;
            else if(sum > x)  last --;
            else start ++;
        }
        return false;
    }
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr, arr+n);
        return twopointer(arr,n,x);
	    
	}
};

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int i;
        int count=0;

        for(i=0; i<k; i++){
            sum=sum+arr[i];
        }
        if(sum>=threshold*k){
            count++;
        }
        for(int j=i; j<arr.size(); j++){
            sum=sum-arr[j-k];
            sum=sum+arr[j];
        
        if(sum>=threshold*k){
            count++;
        }}

        return count;
    }
};
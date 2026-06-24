class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxright = -1;
        int n=arr.size();
        int current; 

        for(int i=n-1; i>=0; i--){
            current=arr[i];
            arr[i]=maxright;
            maxright=max(current,maxright);
        }
        return arr;
    }
};
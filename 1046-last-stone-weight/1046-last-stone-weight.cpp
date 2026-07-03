class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int p,q;
        for(int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            p=pq.top();
            pq.pop();
            q=pq.top();
            pq.pop();
            if(p!=q){
               pq.push(p-q);
            }
        }
        if(pq.empty())
        return 0;

        return pq.top();
    }
};
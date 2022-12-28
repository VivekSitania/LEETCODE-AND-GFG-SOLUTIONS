class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto it:piles){
            pq.push(it);
        }
        while(k>0){
            int x=pq.top();
            pq.pop();
            int t=x-(x/2);
            int newx=ceil(t);
            pq.push(newx);
            k--;
        }
        int s=0;
        while(!pq.empty()){
             int y=pq.top();
             pq.pop();
             cout<<y<<" ";
              s+=y;

        }
        return s;
        
    }
};
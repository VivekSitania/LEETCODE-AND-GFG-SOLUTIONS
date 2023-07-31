class StockSpanner {
private:
    stack<pair<int,int>>st;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!st.empty() && st.top().first<=price)
        {
            span += st.top().second;
            st.pop();
        }
        pair<int,int>current;
        current.first = price;
        current.second = span;
        st.push(current);
        
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
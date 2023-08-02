class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // This logic is learned from youtube 
        int len = heights.size();
        vector<int>LSE(len, -1); // LSE = Left Smaller Element
        vector<int>RSE(len, len); // RSE = Right Smaller Element
        stack<int>st; // stack is making for left and right next smaller ement for each element;
        int max_area = 0;
        
        // Find all left smaller element
        for(int i = len-1; i >= 0; i--)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                LSE[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        // Empty the stack first because of reuse
        while(!st.empty()) st.pop();
        
        // Find all Right smaller element
        for(int i = 0; i < len; i++)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                RSE[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        // Now, find Histogram area, bcz we have LSE AND RSE index for each elemnt of array
        
        for(int i = 0; i < len; i++)
        {
            int temp_area = heights[i] * ((RSE[i] - LSE[i]) -1);
            max_area = max(max_area, temp_area);
        }
        return max_area;
    }
};

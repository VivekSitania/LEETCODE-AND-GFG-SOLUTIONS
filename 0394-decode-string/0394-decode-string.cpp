class Solution {
public:
    string decodeString(string s) {
//         int len = s.size();
//         int num = 0;
//         string output = "";
//         string repeat = "";
//         for(int i=0; i<len; i++)
//         {
//             if(s[i] >= '0' && s[i] <= '9')
//             {
//                 num = num*10 + s[i]-'0';
//             }
//             else if(s[i] >= 'a' && s[i] <= 'z')
//             {
//                 repeat += s[i];
//             }
//             else if(s[i] == ']')
//             {
//                 for(int i=0; i<num; i++)
//                 {
//                     output += repeat;
//                 }
//                 repeat = "";
//                 num = 0;
//             }
//         }
        
//         return output;
        stack<char> st;
        string output = "";
        int len = s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i] != ']') st.push(s[i]);
            else {
                //cout << i << endl;
                string repeating_string = "";
                int repeation_times = 0;
                while(st.top() != '[')
                {
                    repeating_string = st.top() + repeating_string;
                    st.pop();
                    //cout << repeating_string << endl;
                }
                st.pop();
                int repeating_string_len = repeating_string.size();
                int k = 1;
                while(!st.empty() && st.top() >= '0' && st.top() <= '9')
                {
                    repeation_times += (st.top() - '0')*k;
                    k *= 10;
                    st.pop();
                    //cout << repeation_times << endl;
                }
                //cout << i << endl;
                for(int l=0; l<repeation_times; l++)
                {
                    //cout << l << endl;
                    for(int j=0; j<repeating_string_len; j++)
                    {
                        //cout << l << endl;
                        st.push(repeating_string[j]);
                        //cout << l << endl;
                    }
                    //cout << l << endl;
                }
                
            }
           
        }

         while(!st.empty())
        {
            output = st.top() + output;
            st.pop();
        }
        
        return output;
        
    }
};
class Solution {
public:
    int reverse(int x) {
        // vector<int> temp;
        // int flag = 0;
        // if(x >= INT_MAX - 1 || x <= INT_MIN + 1){
        //     return 0;
        // }
        // if(x < 0){
        //     flag = 1;
        //     x = -x;
        // }
        // while(x > 0){
        // temp.push_back(x % 10);
        // x = x / 10;
        // }
        // int n = temp.size();
        // for(int i = 0; i < n; i++){
        //     if(x + temp[i] * (pow(10,n-i-1)) >= INT_MAX){
        //         return 0;
        //     }
        //     x += temp[i] * (pow(10,n-i-1));
        // }
        // if(flag == 1){
        //     return -x;
        // }
        // return x;
        std::stack<int> st;
        std::vector<int> result;
        if(x >= INT_MAX - 1 || x <= INT_MIN + 1){
            return 0;
        }
        int res = 0;
        int flag = 0;
        if(x < 0){
            flag = 1;
            x = -x;
        }
        while(x > 0){
            st.push(x % 10);
            x /= 10;
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        int n = result.size();
        for(int i = 0; i < n; i++){
            if(x + result[i] * (pow(10,i)) >= INT_MAX){
                return 0;
            }
            x += result[i] * (pow(10,i));
        }
        if(flag == 1){
            return -x;
        }
        return x;
    }
};

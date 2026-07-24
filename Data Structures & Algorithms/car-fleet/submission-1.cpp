class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> vec;
        for(int i=0; i<position.size(); i++){
            vec.push_back({position[i], speed[i]});
        }
        sort(vec.rbegin(), vec.rend());
        stack<double> st;
        for(int i=0; i<position.size(); i++){
            double time = (target - vec[i].first)/(float)vec[i].second;
            if(st.empty() || time > st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};

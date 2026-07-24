class MinStack {
    vector<int> vec;
    int n;
    vector<int> minimum;

   public:
    MinStack() { n = -1; }

    void push(int val) {
        vec.push_back(val);
        n++;
        if (n == 0 || vec[n] < minimum.back()) {
            minimum.push_back(vec[n]);
        } else {
            minimum.push_back(minimum.back());
        }
    }

    void pop() {
        if (n >= 0) {
            vec.pop_back();
            minimum.pop_back();
            n--;
        }
    }

    int top() { return vec[n]; }

    int getMin() { return minimum.back(); }
};

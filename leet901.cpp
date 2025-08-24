class StockSpanner {
public:
    stack<vector<int>> s;
    StockSpanner() {

    }
    
    int next(int price) {
        int day = 1;
        while(!s.empty() && s.top()[0] <= price) {
            day = day + s.top()[1];
            s.pop();
        }
        vector<int> x = {price,day};
        s.push(x);
        return day;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
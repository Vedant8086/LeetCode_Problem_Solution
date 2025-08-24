class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int last_fruit = -1;
        int second_last_fruit = -1;
        int last_fruit_count = 0;
        int current_max = 0;
        int maxi = 0;

        for(int x : fruits) {
            if(x == last_fruit || x == second_last_fruit) {
                current_max++;
            } else {
                current_max = last_fruit_count + 1;
            }

            if(x == last_fruit) {
                last_fruit_count++;
            } else {
                last_fruit_count = 1;
            }

            if(x != last_fruit) {
                second_last_fruit = last_fruit;
                last_fruit = x;
            }

            maxi = max(maxi,current_max);
        }

        return maxi;
        
    }
};
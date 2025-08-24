class Solution {
public:
    double coloredCells(int n) {
        if(n == 1) return 1;
        double x = pow(n , 2);
        n--;
        double x1 = pow(n, 2);


        return x + x1;

    }
};
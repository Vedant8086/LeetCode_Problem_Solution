#include<iostream>
#include<iomanip>
#include<thread>
#include<typeinfo>
#include<cstring>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<exception>
#include<stdexcept>
#include<fstream>
using namespace std;

class Solution {
    public :
    int countPrime(int n) {
        int count = 0;
        vector<bool> prime(n+1,true);
        prime[0] = prime[1] = false;

        for(int i = 2;i<n;i++) {
            if(prime[i]) {
                count++;

                for(int j = 2 * i;j < n;j=j+i) {
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
};
int main() {

return 0;
}
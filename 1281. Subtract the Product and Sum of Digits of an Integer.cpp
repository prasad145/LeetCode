class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n > 0){
            int bit = n % 10;
            sum += bit;
            product *= bit;
            n /= 10;
        }
        
        return product - sum;
    }
};

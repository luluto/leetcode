/*
因式分解
for example 
24 =2 2 2 3 
    2 2 6 
    2 3 4 
    2 12 
    3 8 
    4 6 
    24 
sort from small to large, no dup
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



class solution {
public:
    vector<vector<int>> getFactorCombination(int n) {
        vector<int> sol;
        helper(sol, n, 2);
        return res;
    }
    
    void helper(vector<int> &sol, int n, int index) {
        if (n==1) {
            res.push_back(sol);
            return;
        }
        
        for (int i=index; i<=n; i++) {
            if (n%i==0) {
                sol.push_back(i);
                helper(sol, n/i, i);
                sol.pop_back();
            }
        }
        
        
    }


private:
    vector<vector<int>> res;
};


int main(int argc, const char * argv[]) {
    solution s;
    
    vector<vector<int>> result = s.getFactorCombination(24);
    for (int i=0; i<result.size(); i++) {
        for (int j=0; j<result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}
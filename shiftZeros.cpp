

/*
 
 Given an integer array, place all the zeros to the end.
 {4, 0, 5, 0, 8} => { 4, 5, 8, 0, 0}
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



class solution {
public:
    void shiftZeros(vector<int> &num) {
        if (num.size()==0) return;
        
        int len =0;
        for (int i=0; i<num.size(); i++) {
            if (num[i]==0) continue;
            else {
                num[len]=num[i];
                len++;
            }
        }
        
        while (len<num.size()) {
            num[len]=0;
            len++;
        }
        
    }
};


int main(int argc, const char * argv[]) {
    solution s;
    
    vector<int> result = {4, 0, 5, 0, 8};
    s.shiftZeros(result);
    for (int i=0; i<result.size(); i++) {

        cout << result[i] << " ";
        
    }
    return 0;
}

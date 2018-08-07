#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    vector<int> tmp;
    NumArray(vector<int> nums) {

        tmp.resize(nums.size()+1, 0);
        tmp[0] = 0;
        if(nums.size() > 0 ){
            for(int n = 0; n < nums.size(); n++ ){
                tmp[n+1] = nums[n] + tmp[n];
            }
        }
    }

    int sumRange(int i, int j) {

        return tmp[j+1] - tmp[i];

    }
};

int main(int argc, char** argv){
    vector<int> nums;
    int n, count;
    cout << "input count: " << endl;
    for(int i = 0; i < count; i++) {
        cin >> n;
        nums.push_back(n);
    }
    NumArray obj(nums);
    obj.sumRange(1,2);
}
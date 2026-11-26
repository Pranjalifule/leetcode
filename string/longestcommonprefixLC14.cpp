#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
    public:
    string longestCommonPrifix(vector<string>&strs){

        string ans = strs[0];

        for(int i = 0 ;i < ans.length(); i++){

            for( int  j = 0 ; j < strs.size(); j++){

                if( i >= strs[j].length() || ans[i] != strs[j][i]){

                    return ans.substr(0 ,i);
                }
            }
        }
        return ans;
    }
};


int main() {
    Solution obj;

    vector<string> strs = {"flowers" , "flow" , "float"};

    cout<<obj.longestCommonPrifix(strs);
    
    return 0;
}
// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <stack>
#include <string>
// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty()) return false;
                if (stk.top() == '(' && c != ')') return false;
                if (stk.top() == '{' && c != '}') return false;
                if (stk.top() == '[' && c != ']') return false;
                stk.pop();
            }
        }
        return stk.empty();
    }
};
// @lc code=end


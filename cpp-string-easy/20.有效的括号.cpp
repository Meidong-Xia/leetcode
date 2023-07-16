/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <stack>
#include <string>
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
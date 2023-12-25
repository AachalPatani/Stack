#include <iostream>
#include <stack>
#include <string>
using namespace std;

// func to check precedence;
int pre(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string in_To_post_conversion(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // Pop '(' from the stack
        }
        else
        {
            while (!st.empty() && pre(st.top()) >= pre(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]); // Pushing current operator
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    // Write C++ code here
    // String s=(a-b/c)*(a/k-l);
    cout << " infix to post of (a-b/c)*(a/k-l) is " << in_To_post_conversion("(a-b/c)*(a/k-l)");

    return 0;
}

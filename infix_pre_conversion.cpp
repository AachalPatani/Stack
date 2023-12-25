// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<string>
#include<algorithm>//for reversing string
using namespace std;

int pre(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*'|| c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else 
    return -1;
}

string infix_pre_conversion(string s)
{
    reverse(s.begin(),s.end());//1. reversing str
    stack<char> st;
    string res;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
       {
           res+=s[i];
       }
       else if(s[i]==')')
       st.push(s[i]);
       else if(s[i]=='(')
       {
           while(!st.empty() && st.top()!=')')
           {
              res+=st.top();
              st.pop();
           }
           if(!st.empty())//yeh last me ek '('ko pop karne ke liye
           {
               st.pop();
           }
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
    reverse (res.begin(),res.end());
    return res;
}

int main() {
    // Write C++ code here
    cout << "string infix_pre_conversion((a-b/c)*(a/k-l)) is \n"<<infix_pre_conversion("(a-b/c)*(a/k-l)");

    return 0;
}
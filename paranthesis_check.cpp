// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s)
{
    int n =s.length();
    stack<char> st;
    bool ans="true";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
        st.push(s[i]);// koi bhi type ke opening brakect ko push kar rehe hai
        else if(s[i]==')')
        {
            //check kare ki stack ka top (yeh hai kya
            if(!st.empty()&&st.top()=='(')
            st.pop();
            else
            {
                ans="false";
                break;
            }
            
        }
        
        else if(s[i]==']')
        {
            //check kare ki stack ka top (yeh hai kya
            if(!st.empty()&&st.top()=='[')
            st.pop();
            else
            {
                ans="false";
                break;
            }
            
        }
        
        else if(s[i]=='}')
        {
            //check kare ki stack ka top (yeh hai kya
            if(!st.empty()&& st.top()=='{')
            st.pop();
            else
            {
                ans="false";
                break;
            }
            
        }
    }
    if(!st.empty())
    return false;
    else
    return ans;
}

int main() {
    string s ="{[()]}";
    if(isValid(s))
    cout<<"valid string";
    else
    cout<<"invalid string";

    return 0;
}
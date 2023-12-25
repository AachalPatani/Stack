#include<iostream>
#include<stack>

#include<math.h>
using namespace std;
int posfix_eva(string s)
{
    stack <int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>'0'&& s[i]<'9')
        st.push(s[i]-'0');//s[i] char hai isko int me convert karne ke liye-'0'
        else
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch(s[i])
            {
                case '+':
                    //int res= op1+op2;
                    st.push(op1+op2);
                    break;
                 case '-':
                    //int res= op1-op2;
                    st.push(op1-op2);
                    break;
                 case '*':
                    //int res= op1*op2;
                    st.push(op1*op2);
                    break;
                 case '/':
                    //int res= op1/op2;
                    st.push(op1/op2);
                    break;
                 case '^':
                    //int res= pow(op1,op2);
                    st.push(pow(op1,op2));
                    break;
            } 
        }
    }
    return st.top();
}
int prefix_eva(string s)
{
    stack<int> st;
    
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]>='0'&& s[i]<='9')
        st.push(s[i]-'0');
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(s[i])
            {
                case '+':
                    //int res= op1+op2;
                    st.push(op1+op2);
                    break;
                 case '-':
                    //int res= op1-op2;
                    st.push(op1-op2);
                    break;
                 case '*':
                    //int res= op1*op2;
                    st.push(op1*op2);
                    break;
                 case '/':
                    //int res= op1/op2;
                    st.push(op1/op2);
                    break;
                 case '^':
                    //int res= pow(op1,op2);
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }
    return st.top();
}


int main()
{
    int ch;
    string s= "-+7*45+20";
    
    cout<<"enter 1 for prefix evaluation \n 2 for post fix evaluation \n  \n";
    cin>>ch;
    switch(ch)
    {
        case 1:
            //int ans=prefix_eva(s);
            cout<<"prefix of : "<<s<<" is : "<<prefix_eva(s);
            break;
        case 2:
           // int ans=postfix_eva(s);
            cout<<"postfix of : 46+2/5*7+  is : "<<posfix_eva("46+2/5*7+");
            break;
        
    }
    return 0;
}
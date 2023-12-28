// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
#include<string>
using namespace std;

string reverse(string s)
{
    stack<char> st;
    string str;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    
    for(int i=0;i<s.length();i++)
    {
        str=str+st.top();
        st.pop();
    }
    return str;
    
};

int palindrom(string s1,string s2)
{
    int t=1;
   for(int i=0;i<s1.length();i++)
   {
       if(s1[i]!=s2[i])
       {
           t=0;
       }
       else 
       t=1;
   } 
   return t;
}

int main() {
    // Write C++ code here
    string str1="mam";
    string str2=reverse("mam");
   cout <<"\nreverse of aachal is : "<<str2;
   
   int s=palindrom(str1,str2);
   if(s==1)
   cout<<"\n string is palindrom";
   else
   {
       cout<<"\nstring is not palindrom";
   }

    
    return 0;
}
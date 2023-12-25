// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define n 100

class stack
{
  int* arr;
  int top;
  public:
      stack()
      {
          arr= new int[n];
          top=-1;
      }
      
     int stack_emp()
     {
         if(top==-1)
         return 1;
         else
         return 0;
     }
     
     int  overflow()
     {
         if(top==n)
         {
             return 1;
         }
         else
         return 0;
         
     }
     
     void push(int j)
     {
         if(!overflow())
         {
             top++;
             arr[top]=j;
         }
         else
         cout<<"stack is full";
     }
     void pop()
     {
         if(!stack_emp())
         top--;
         else
         {
             top=-1;
         cout<<"no element to pop";
         }
     }
     void Top()
     {
         cout<<"\n"<<arr[top];
     }
    
};

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    stack s;
    s.push(1);
    s.push(2);
    s.Top();
    s.pop();
    s.Top();
    s.pop();
    s.Top();
    s.pop();
    s.Top();
    return 0;
}
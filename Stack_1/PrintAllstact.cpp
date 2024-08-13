#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
// printing in reverse order but stact will be empty that's problem
    // while (st.size()>0)
    // {
    //     cout<<st.top()<<endl<< "  ";
    //     st.pop();
    // }




    /******How to get the denotes back in stack after printing/popping 0(n) extra space******** */

// we will use extra stack
    stack<int> temp;
    while (st.size()>0)
    {
        cout<<st.top()<<" ";
        // int x = st.top();
        temp.push(st.top());
        st.pop();
    }
    // putting elements backs from temp to st
    while (temp.size()>0)
    {
        // int x = temp.top();
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
    
    
    

}
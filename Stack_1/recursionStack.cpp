#include<iostream>
#include<stack>
using namespace std;

    void displayRev(stack<int> &st){
        if(st.size()==0) return;
        int x = st.top();
        cout<<x<< " ";
        st.pop();
        displayRev(st);
        st.push(x);
    }

int main(){
    stack<int>st;   
    st.push(54);
    st.push(54);
    st.push(55);
    st.push(56);
    st.push(57);
    st.push(58);
    displayRev(st);
    

}
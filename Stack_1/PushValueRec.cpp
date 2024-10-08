#include<iostream>
#include<stack>
using namespace std;

    void display(stack<int> & st){
        if(st.size()==0) return;
            int x = st.top();
            st.pop();
            display(st);
            cout<<x<< " ";
            st.push(x);
    }

    void PushAtButtom(stack<int> &st , int valuee){
        if(st.size()==0) {
            st.push(valuee);
            return;
        }
        int x = st.top();
        st.pop();
        PushAtButtom(st, valuee);
        st.push(x);
    }

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    PushAtButtom(st, -55);
    cout<<endl;
    display(st);
}
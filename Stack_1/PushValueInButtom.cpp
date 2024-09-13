#include<iostream>
#include<stack>
using namespace std;

    void print(stack<int> &st){
        stack<int> temp;
        while (st.size()>0){
            temp.push(st.top());
            cout<<temp.top()<<endl;
            st.pop();
        }
        cout<<endl;
        while (temp.size()>0){
            st.push(temp.top());
            cout<<st.top()<< endl;
            temp.pop();
        }     
    }




int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
}
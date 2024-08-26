#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    // push, pop, front-top, size, empty, back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<<q.size()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front();
}


/*
    push() -> insertion happes only at the back/rear
    pop() -> pop only happens that front remove
    front() -> we can access the front of the queue
    bcak() -> we can also access the rear element.
    size() -> return the size of queue
    emtpy() -> it returns true if size() ==0     else it returns false




    OverFlow :- only happens if we implement queue via an array if you fill the array.
                        you are out of memory

    Underflow :- 
                i) Whenever like queue is empty we try to use three formations pop(), format(), back()
*/
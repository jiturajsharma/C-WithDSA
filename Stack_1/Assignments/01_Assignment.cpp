// 1. You have two stack and 1,2,3,4,5 values and you have pushed all these values to s1 in the order 1,2,3,4,5 and then you took 2 elements from top  and inserted into s2, then pop 1 element from s1 and then take top of s2 and insert into s1. What is the second top element in s1.

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s1, s2;

    // Step 1: Push values 1, 2, 3, 4, 5 into s1
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    // Step 2: Move the top 2 elements from s1 to s2
    for (int i = 0; i < 2; ++i) {
        s2.push(s1.top()); // Push the top element of s1 to s2
        s1.pop(); // Remove the top element from s1
    }

    // Step 3: Pop 1 element from s1
    s1.pop(); // Remove the top element from s1

    // Step 4: Move the top element from s2 back to s1
    s1.push(s2.top()); // Push the top element of s2 back to s1
    s2.pop(); // Remove the top element from s2

    // Find the second top element in s1
    int topElement = s1.top(); // Store the current top element
    s1.pop(); // Remove the top element to access the second top element
    int secondTopElement = s1.top(); // Get the second top element
    s1.push(topElement); // Restore the original top element

    // Print the second top element
    cout << "The second top element in s1 is: " << secondTopElement << endl;

    return 0; // Return 0 to indicate successful execution
}






//***************************************************************************************************************************************************************************************************************** */





/*
2. Remove kth element from top in a given stack.

*/

#include<bits/stdc++.h>
using namespace std;

// Function to remove the k-th element from the stack
void removeKthElement(int k, stack<int>& st) {
    stack<int> st2; // Temporary stack to hold elements
    k--; // Adjust k to be zero-indexed (since stack is 0-based)
    
    // Move the top k-1 elements from st to st2
    while(k-- > 0) {
        st2.push(st.top()); // Push top element of st to st2
        st.pop(); // Remove the top element from st
    }
    
    st.pop(); // Remove the k-th element from st
    
    // Move the elements back from st2 to st
    while(!st2.empty()) {
        st.push(st2.top()); // Push top element of st2 back to st
        st2.pop(); // Remove the top element from st2
    }
}

int main() {
    stack<int> st; // Initialize a stack of integers
    
    // Push elements onto the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    // Call the function to remove the 3rd element (1-based index)
    removeKthElement(3, st);
    
    // Print the stack to check the result
    while(!st.empty()) {
        cout << st.top() << " "; // Print the top element
        st.pop(); // Remove the top element
    }
    
    return 0; // Return 0 to indicate successful execution
}





//***************************************************************************************************************************************************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
    stack<int> s;
    
    // Convert to binary and push digits onto the stack
    while(n > 0) {
        s.push(n % 2);
        n = n / 2;
    }
    
    // Print the binary representation
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl; // Print a newline for better readability
}

int main() {
    int n = 10; // Example number
    fun(n); // Should print 1010 for the number 10
    return 0;
}


// 1. prints binary representation of n in reverse order
#include <bits/stdc++.h>
using namespace std;

void printBinaryReverse(int n) {
    stack<int> s;
    while (n > 0) {
        s.push(n % 2);
        n = n / 2;
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

int main() {
    int n = 10; // Example number
    printBinaryReverse(n); // Should print 0101 for the number 10
    return 0;
}


// prints binary representation of n in reverse order
#include <bits/stdc++.h>
using namespace std;

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    cout << n % 2;
}

int main() {
    int n = 10; // Example number
    printBinary(n); // Should print 1010 for the number 10
    cout << endl;
    return 0;
}


// print the value of log n
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10; // Example number
    cout << "log(" << n << ") = " << log(n) << endl; // Natural logarithm
    cout << "log2(" << n << ") = " << log2(n) << endl; // Base-2 logarithm
    return 0;
}


// print the value of log n in reverse order
#include <bits/stdc++.h>
using namespace std;

void printLogReverse(double logValue) {
    stringstream ss;
    ss << logValue;
    string logStr = ss.str();
    reverse(logStr.begin(), logStr.end());
    cout << logStr << endl;
}

int main() {
    int n = 10; // Example number
    double logValue = log(n); // Natural logarithm
    cout << "log(" << n << ") in reverse order: ";
    printLogReverse(logValue);
    return 0;
}

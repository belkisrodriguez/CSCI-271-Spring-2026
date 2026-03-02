/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: For Iteration Statement
Description:  speciies the counter-controlled-iteration details in a sing line 
of code. (page 162)
*/

#include <iostream>

using namespace std;

int main()
{
    
//Counting Up
    for (unsigned int i = 1; i <= 10; ++i)
    {
        cout << i << " ";
    }
    cout << "\n";
    
// Counting Down or reversing the Iteration
    for (unsigned int i = 10; i >= 1; --i)
    {
        cout << i << " ";
    }
    cout << "\n";
    
// Summing Even Numbers

    int sum = 0; 
    
    for (int i = 2; i <=20; i += 2) {
        sum += i;
    }
    cout << "Sum is " << sum; 

    return 0;
}

/*
Reflection:
1. What I understood from this program:
For Iteration statements are all in one loop. Reduces the risk of infinate loops.


2. Difficulties I faced:
Syntax errors, misisng a  ";" or a parentheses.

3. What I needed to search or review:
I needed to search the definition. I used the book and slides. 

4. AI Usage (if any): Yes, Claude AI
 - Did you use AI tools? If yes, explain how.
Yes, Claude AI. I asked where in my code did i need to enter "\n" so that each for 
statement printed in a separate line for a cleaner look. Claude noted I can also use 
"enld;" and other variations of "\n".

 - Did you verify the output?
Yes.
 
5. What I learned:
There is an order of operations that follows.The variable can be used in a different 
loop without a name conflict. There are various increment styles. 

Traditional: i = i + 1
Addition Assignment: i + = 1
Pre-increment: ++i - incremnt first then use the value
Post-increment: i++ - use the current value then, increment

I also learned reversing iterations.


*/
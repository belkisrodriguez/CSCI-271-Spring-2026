/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: Infinite Loop Example
Description:  A loop missing an updated statement, the condition is never becomes
false, so the code will print forever.
*/

#include <iostream>

using namespace std;

int main()
{
    int x = 1; 
    
    while (x <=5){
        cout << x;
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program:
A missing statement will cause the condition to always be true and printing forever
making it an infinite loop.(slide 12)

2. Difficulties I faced:
None.

3. What I needed to search or review:
I reviewed the book and slides to find the definition. 

4. AI Usage (if any): No
 - Did you use AI tools? If yes, explain how.
 No AI was used.
 - Did you verify the output?
 No AI was used.
 
5. What I learned:
In this instance the i learned that this code as entered will run forever and can 
be an easy error to make. To fix the iteration you have to modify the loop control variable. 


*/
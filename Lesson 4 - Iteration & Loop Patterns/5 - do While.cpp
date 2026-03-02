/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: do While
Description:  similar to a while statement it tests the loop-continuation condition
at the begining of the loop before executing the loop's body. If the condition is 
false the body never executes (page 179). 
*/

#include <iostream>

using namespace std; 

int main()
{
    int x = 10;
    
    do {
        cout << x << endl;
        x++; 
        cout << x << endl;
    } while (x <= 5);
    
    
    return 0;
}

/*
Reflection:
1. What I understood from this program:

2. Difficulties I faced:
Basic run errors, like missing a ";" or a parentheses.

3. What I needed to search or review:
I needed to search the definition. I used the book and slides. 

4. AI Usage (if any):
 - Did you use AI tools? If yes, explain how.
No.
 - Did you verify the output?
No.
 
5. What I learned:
do ... while statements will run intil the loop realized condition "while" was 
false and stop the count. 


*/
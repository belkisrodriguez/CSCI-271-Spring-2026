/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: For Iteration Statement - Counter
Description:  Counter vs Accumulator
Adding one vs. adding many. A Counter is clicking a tally counter
at the door. Accumulator is like someone charging entrance fee at the door.
*/

#include <iostream>

using namespace std;

int main()
{
 // Counter

    int count = 0; 

    for (int i = 0; i < 10; i++)
    {
        count++;
        cout << count << " ";
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program:
For Iteration statements are all in one loop. Reduces the risk of infinate loops.
Counter vs Accumulator
Adding one vs. adding many. A Counter is clicking a tally counter
at the door. Accumulator is like someone charging entrance fee at the door.

2. Difficulties I faced:
Syntax error - Placement of count++. 

3. What I needed to search or review:
I needed to search the definition. I used the book and slides. 

4. AI Usage (if any): 
 - Did you use AI tools? If yes, explain how.
None.
 - Did you verify the output?
None.
 
5. What I learned:
Counter vs Accumulator
Adding one vs. adding many. A Counter is clicking a tally counter
at the door. Accumulator is like someone charging entrance fee at the door.

*/
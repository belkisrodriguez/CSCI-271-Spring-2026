/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: Logic Interrupters
Description: Logic Interrupters like continue and break alter the flow of control.
(page 186)
Break will terminate the for statement and the program will proceed to following 
loop body. Continue skips the rest of the current iteration and jumps to the next 
condition check or increment for that loop. (slide 29)
*/

#include <iostream>

using namespace std; 

int main()
{
    for (int i = 1; i <= 10;  i++){
        if (i == 3){
            continue; 
        }
    if (i == 6){
        break;
    }
    cout << i << " ";
    }
    return 0;
}

/*
Reflection:
1. What I understood from this program:
Logic Interrupters like continue and break alter the flow of control.

2. Difficulties I faced:
syntax errors missing the last "}" in code. 

3. What I needed to search or review:
I needed to search the definition. I used the book and slides. 

4. AI Usage (if any):
 - Did you use AI tools? If yes, explain how.
No.
 - Did you verify the output?
No.
 
5. What I learned:
logic Interrupters can serve as a hard stop or fast forward which alters the flow
of control.

*/
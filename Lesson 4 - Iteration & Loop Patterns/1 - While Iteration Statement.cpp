/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: While Example - Class Average
Description:  A loop that allows you to specify that a program should repeat 
on action while some condition remains true. If the condition is initially false 
then the action will not execute.
*/

#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int counter = 1;
    
    while (counter <= 10){
        int grade; 
        cin >> grade; 
        total += grade; 
        counter++;
    }
    
    double average = 
    static_cast<double>(total) / 10;
    cout << average;

    return 0;
}

/*
Reflection:
1. What I understood from this program:
The contdition listed in the parenthesis will be evaluted every run,
if true it will keep running and once the conditions are met the iteration
will terminate and the first statement after the iteration statement executes.
(page 117)

2. Difficulties I faced:
Potential diffuculties would be appropriately determining when needing 
to apply while iteration loop.

3. What I needed to search or review:
I reviewed the book and slides to find the definition. 

4. AI Usage (if any): No
 - Did you use AI tools? If yes, explain how.
 No AI was used.
 - Did you verify the output?
 No AI was used.
 
5. What I learned:
I learned in this particular instance that once the 10 grades are entered then 
the average grade will be calculate. If anything other than an intiger is entered
the iteration/loop will terminate and the first statement, in this case, the 
calculation will execute.

*/
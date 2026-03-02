/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: Input Validation Pattern
Description: A sane vlaue before the rest of the program can run. (slide 29)
*/

#include <iostream>

using namespace std; 

int main()
{
    int age; 
    
    cout << "Enter age (1-120): ";
    cin >> age; 
    
    while (age < 1 || age > 120) {
        cout << "Invalid. Please enter a realistic age: "; 
        cin >> age;
    }
    return 0;
}

/*
Reflection:
1. What I understood from this program:
Entering sanity checks to ensure user input is in line with what is being asked.

2. Difficulties I faced:
syntax errors missing ";".

3. What I needed to search or review:
I needed to search the definition. I used the book and slides. 

4. AI Usage (if any):
 - Did you use AI tools? If yes, explain how.
No.
 - Did you verify the output?
No.
 
5. What I learned:
A loop that serves as a sanity check to ensure input data is in line with program.

*/
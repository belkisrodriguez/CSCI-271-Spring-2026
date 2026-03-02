/* 
Name: Belkis Rodriguez
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Patterns
Program: Sentinel Implementation
Description:  controlled iterations until the exit command is established.
Can also be known as indefinate iteration, as the number of iterations is not 
known before the loop begins executing. 
*/

#include <iostream>

using namespace std;

int main()
{
    int total = 0; 
    int counter = 0; 
    int grade; 
    
    cout << "Enter grade or -1 to quit: "; 
    cin >> grade; 
    
    while (grade != -1) {
        total += grade;
        counter++; 
        
        cout << "Enter next grade or -1 to quit "; 
        cin >> grade; 
    }
    
    if (counter != 0) {
        double average = static_cast<double>(total) / counter; 
        cout << "Class average is " << average; 
    }else{ 
        cout << "No grades were entered. ";
    }

    return 0;
}

/*
Reflection:
1. What I understood from this program:
the signal value is what will indcate the end of the data entry there is no need
to establish a counter. However, the posibility to establish a counter exists.  

2. Difficulties I faced:
In class I couldn't get my sentinel value to work, I was missing a portion of my 
If statement. 

3. What I needed to search or review:
I needed to search the definition. I used the book and slides. 

4. AI Usage (if any): No
 - Did you use AI tools? If yes, explain how.
 No AI was used.
 - Did you verify the output?
 No AI was used.
 
5. What I learned:
How to properly implement a sentinel value. There are definate and indefinate 
iterations. 


*/
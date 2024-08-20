#include <iostream>
using namespace std;

int main() {
    /**
     * TODO:
     * Replace the string variable below with a string *pointer*.
     * You'll need several pieces:
     *   1. Change the type of the variable
     *   2. Allocate dynamic memory for it
     *   3. Dereference the variable when assigning to and reading from it
     *   4. Deallocate the memory after you're done with it
     */
    string message;
    message = "Hello World!";
    cout << message << endl;
    return 0;
}
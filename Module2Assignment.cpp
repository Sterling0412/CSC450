//Include necessary libraries
#include <iostream>
#include <string>

using namespace std;
//Define main function
int main ()
{
    /*Create string userString1
    Create string userString2
    Create string userString3
    */
    string userString1, userString2, result;

/*For i from 0 to 2
Output "Please enter your first string:"
Assign userString1 to user input
Output "Please enter your second string:"
Assign userString2 to user input
*/
    for (int i=0; i<3; i++) {
    cout << "Please enter your first string: ";
    getline(cin, userString1);

    cout << "Please enter your second string: ";
    getline(cin, userString2);
//Concatenate the userString1 and userString2 and assign to result
    result = userString1 + " " + userString2;
//Output "Yout resulting string: " with the variable result
    cout << "Your resulting string: " << result << endl;

    }
return 0;

}
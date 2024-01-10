//Include necessary libraries
#include <iostream>
using namespace std;
//Declare main function
int main() {
//Create integers userValue1, userValue2, userValue3
    int userValue1, userValue2, userValue3;
    //Prompt user to enter 3 integer values
    cout <<"Please enter three integer values: ";
//Take user input and assign to the integers userValue1, userValue2, and userValue3
    cin >> userValue1 >> userValue2 >> userValue3;
//Create pointers and allocate memory for an integer and store coresponding userValue
    int*pointer1 = new int(userValue1);
    int*pointer2 = new int(userValue2);
    int*pointer3 = new int(userValue3);
//Output Variable contents with the userValues that were enetered
    cout << "Variable Contents: \n";
    cout << "First Value: " << userValue1 << endl;
    cout << "Second Value: " << userValue2 << endl;
    cout << "Third Value: " << userValue3 << endl;
//Output pointer contents and the values assigned to the pointers
    cout << "Pointer Contents: \n";
    cout << "Pointer 1: " << *pointer1 << endl;
    cout << "Pointer 2: " << *pointer2 << endl;
    cout << "Pointer 3: " << *pointer3 << endl;
//Deallocate the memory for all pointers
    delete pointer1;
    delete pointer2;
    delete pointer3;

    return 0;

}
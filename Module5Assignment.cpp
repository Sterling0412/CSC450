#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //Append user input to the file
    string userInput;
    ofstream writeFile;
    writeFile.open("CSC450_CT5_mod5.txt", ios::app);
    if (writeFile.is_open()) {
        //Prompt user for input
        cout << "Enter a string to be stored in the file: ";
//Get user input
        getline(cin, userInput);
        //Write input to file
        writeFile << userInput << endl;
        //Close file
        writeFile.close();
    } else {
        //Display error message if file can't be opened
        cout << "Error opening file" << endl;
    }
//Copy content from original file to new file
    ifstream inFile;
    ofstream writeFile2;
    inFile.open("CSC450_CT5_mod5.txt");
    writeFile2.open("CSC450_mod5-2.txt");
    if (inFile.is_open() && writeFile2.is_open()) {
        string line;
        //Read each line from original file and write to new file
        while (getline(inFile, line)) {
            writeFile2 << line << endl;
        }
        //Close both files
        inFile.close();
        writeFile2.close();
    } else {
                //Display error message if file can't be opened
        cout << "Error opening file" << endl;
    }
//Reverse content in the new file and store in another file
    string reverse;
    ifstream inFile2;
    ofstream writeFile3;
    inFile2.open("CSC450_mod5-2.txt");
    writeFile3.open("CSC450_mod5-reverse.txt");
    if (inFile2.is_open() && writeFile3.is_open()) {
        string line;
        //Read each line from new file, reverse it, and write to another file
        while (getline(inFile2, line)) {
            reverse = string(line.rbegin(), line.rend());
            writeFile3 << reverse << endl;
        }
        //Close both files
        inFile2.close();
        writeFile3.close();
    } else {
                //Display error message if file can't be opened
        cout << "Error opening file" << endl;
    }

    return 0;
}
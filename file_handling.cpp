#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream file("day_1.cpp");  // Create an ifstream object and open the file

    if (file.is_open()) {  // Check if the file is open
        string line;
        while (getline(file, line)) {  // Read the file line by line
            if (file.bad()) {
                cerr << "Error: I/O error while reading!" << endl;
                break;
            } else if (file.fail()) {
                cerr << "Error: Logical error on i/o operation!" << endl;
                break;
            }
            cout << line << endl;
        }
        file.close();  // Close the file after reading
    } else {
        cerr << "Unable to open file for reading!" << endl;
    }

    return 0;
}

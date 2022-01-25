#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Error - Must enter a filename!" << endl;
    }
    else if (argc > 2) {
        cout << "Error - Too many arguments passed!" << endl;
    }
    else {
        ofstream file;
        file.open(argv[1]);

        if (file.is_open()) {
            cout << "File " << argv[1] << " created and opened successfully!" << endl;
        }
        else {
            cout << "Error - Could not open file " << argv[1] << "!" << endl;
        }
    }
}
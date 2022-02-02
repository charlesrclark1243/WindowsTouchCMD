#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Error: Must enter a filename!" << endl;
        return -1;
    }
    else if (argc > 2) {
        cout << "Error: Too many arguments passed!" << endl;
        return -1;
    }
    else {
        ofstream file;
        file.open(argv[1]);

        if (file.is_open()) {
            cout << "File " << argv[1] << " created successfully!" << endl;
            return 0;
        }
        else {
            cout << "Error: Could not create file " << argv[1] << "!" << endl;
            return -1;
        }
    }
}

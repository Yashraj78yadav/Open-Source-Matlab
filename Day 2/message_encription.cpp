#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class encdec {
    int key;
    string file = "geeksforgeeks.txt"; // Replace with your input file name

public:
    void encrypt() {
        cout << "Enter key: ";
        cin >> key;

        fstream fin, fout;
        fin.open(file, fstream::in);
        // Read from the file and perform encryption
        // Write the encrypted data to a new file (e.g., encrypt.txt)
    }

    void decrypt() {
        cout << "Enter key: ";
        cin >> key;

        // Read the encrypted file (e.g., encrypt.txt)
        // Decrypt the data and generate a new file (e.g., decrypt.txt)
    }
};

int main() {
    encdec obj;
    obj.encrypt();
    obj.decrypt();
    return 0;
}

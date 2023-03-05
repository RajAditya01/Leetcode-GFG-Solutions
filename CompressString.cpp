#include <iostream>
#include <string>

using namespace std;

string compressString(string str) {
    string compressed = "";
    int count = 1;
    char currentChar = str[0];

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == currentChar) {
            count++;
        } else {
            compressed += currentChar + to_string(count);
            currentChar = str[i];
            count = 1;
        }
    }

    compressed += currentChar + to_string(count);

    return compressed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Compressed string: " << compressString(str) << endl;

    return 0;
}

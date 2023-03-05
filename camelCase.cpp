// #include<iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main(){
//     string input="i am aditya";
//     string output="";

//     for(int i=0; i<input.size();i++){
//         if(input[i]==' ' ||input[i]=='_'){
//             i++;
//             output+=toupper(input[i]);
//         }
//         else{
//             output+=input[i];
//         }
//     }
//     cout<< output << endl;
//     return 0;
// }


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string originalString = "this_is_an_example_string";
    string camelCaseString = "";

    bool capitalizeNext = true;

    for (int i = 0; i < originalString.length(); i++) {
        if (originalString[i] == ' ' || originalString[i] == '_') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCaseString += toupper(originalString[i]);
            capitalizeNext = false;
        } else {
            camelCaseString += originalString[i];
        }
    }

    cout << camelCaseString << endl;

    return 0;
}

string reverseWord(string str)
{

// 1
    // int i = 0;
    // int j = str.length()-1;

    // while(i<j){
    //     i++;
    //     j--;
    // }

    // Your code here


// 2
/*    stack<int> s;

    for (int i = 0; i < str.size(); i++)

    {

        char ch = str[i];

        s.push(ch);
    }

    string sk = "";

    while (!s.empty())

    {

        char ch = s.top();

        sk.push_back(ch);

        s.pop();
    }

    return sk;
}
*/

// 3
string reverseWord(string str){

    string ans="";

    int i=0;

    int j= str.size()-1;

    while(i<j){

        swap(str[i], str[j]);

        i++;

        j--;

    }

    return str;
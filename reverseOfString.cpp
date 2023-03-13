string reverseWord(string str)
{

    // int i = 0;
    // int j = str.length()-1;

    // while(i<j){
    //     i++;
    //     j--;
    // }

    // Your code here

    stack<int> s;

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
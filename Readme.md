## DSA
# getline in c++ 
The C++ getline() is a standard library function that is used to read a string or a line from an input stream. It is a part of the <string> header.
- cin.getline(input, size);
Purpose: Reads a fixed number of characters (up to a specified limit) into a character array (C-style string) from the input stream (std::cin).
e.g   cin.getline (string1, max_length , '$');    //$ is a delimiter 

- getline(cin , input ) 
Purpose: Reads an entire line of input (up to the newline character) from the input stream (e.g., std::cin).

int n;
cin >> n;
switch (n) {
case 1 : {
string input;
string text,ans;
vector<int>v;
getline(cin , input);
string key;
cin >> key;  
} 
}
When using cin >> n;, the cin leaves a newline character (\n) in the input buffer after reading the integer. When you call getline(cin, input); immediately afterward, it will read the remaining newline character (\n) instead of the intended string input.

    switch (n) {
    case 1: {
        string input;
        string text, ans;
        vector<int> v;

        cin.ignore();  // Consume the leftover newline character

        getline(cin, input);  // Now it will work as expected
        string key;
        cin >> key;

        cout << "Input: " << input << endl;
        cout << "Key: " << key << endl;

        break;
    }
    }

# Switch Case 
-     "break" after every case .
-     default:
    cout << "None of the above case ";

    
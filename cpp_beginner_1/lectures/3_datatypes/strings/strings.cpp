#include <iostream> 
#include <string>

using namespace std;

int main() { 

    char c = 'u';
    std::string my_string;
    string my_second_string;

    string welcomeMessage = "Welcome to my lecture!";

    cout << welcomeMessage << endl;
    cout << welcomeMessage.length() << endl;
    cout << welcomeMessage.size() << endl;

    string partial = welcomeMessage.substr(0,7);

    cout << partial << endl;

    string longerWelcomeMessage = welcomeMessage.append(" My name is Jonas.");

    cout << longerWelcomeMessage << endl;




 return 0; 
}
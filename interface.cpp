#include <iostream>
#include <string>

using namespace std;

bool authenticate(string username, string password) {
    
    return (username == "admin" && password == "admin123");
}

int main() {
    string username, password;
    
    cout << "Welcome to Goverment Engineering college bharatpur\n";
    cout << "----------------------------------\n";
    
    
    while (true) {
        cout << "Enter your username: ";
        cin >> username;
        
        cout << "Enter your password: ";
        cin >> password;
        
        if (authenticate(username, password)) {
            cout << "Login successful!\n";
            break;
        } else {
            cout << "Welcome to the student gradebook system \n";
        }
}
    
    return 0;
}


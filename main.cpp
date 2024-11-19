#include <bits/stdc++.h>
using namespace std;

void author_list() {
    // contributor list 
    string contributor_names[] = { "Manish", "Ayushman" };// add your name here 
    int cnt = sizeof(contributor_names) / sizeof(contributor_names[0]); 

    cout << "\n\n-:: Authors ::-\n";
    for (int i = 0; i < cnt; i++) {
        cout << " ";
        for (char c : contributor_names[i]) {
            cout << c;
        }
        cout << endl; 
    }
}

void secret_message(const char* encoded, int key) {
    int len = strlen(encoded);
    char decoded[len + 1]; // initalising char array
    
    for (int i = 0; i < len; i++) {
        decoded[i] = encoded[i] ^ key; 
    }
    decoded[len] = '\0'; // null termination marks end of string
    
    printf("Secret Message: %s\n", decoded);
}

int main() {
    const char encoded_message[] = { 'K', 'C', 'D', 'C', 'M', 'V', 'N', 'C', 'Q', 'J', '\0' };
    int key = 42;

    printf("Decoding secret message...\n");
    secret_message(encoded_message, key);
    author_list();

    return 0;
}

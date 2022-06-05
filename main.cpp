#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isNumberString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

int main() {
    string ccNumber;
    
    cout << "This program uses the Luhn Algorigthm" << endl;
    cout << "You can enter 'exit' to quit." << endl;
    
    while (true) {
        
        cout << "Please enter a Credit card number number to validate: ";
        cin >> ccNumber;
        
        if (ccNumber == "exit")
            break;
        
        else if (!isNumberString(ccNumber)) {
            cout << "Bad input";
            continue;
        }
            
        int len = ccNumber.length();
        int TotSum = 0;
        
        // Step 1 is to double every second digit, starting from the right. If it
        // results in a two digit number, add both the digits to obtain a single
        // digit number. Finally, sum all the answers to obtain 'TotSum'.   
        
        for (int i = len - 2; i >= 0; i = i - 2) {
            int doub = ((ccNumber[i] - 48) * 2);
            if (doub > 9) {
                doub = (doub / 10) + (doub % 10);
            }
                TotSum += doub;
        }
        
        // Step 2 is to add every odd placed digit from the right to the value
        // 'TotSum'.
        
        for (int i = len - 1; i >= 0; i = i - 2) {
            TotSum += (ccNumber[i] - 48);
        }
        
        // Step 3 is to check if the final 'TotSum' is a multiple of 10.
        // If yes, it is a valid CC number. Otherwise, not.
        
        cout << (TotSum % 10 == 0 ? "Valid!" : "Invalid!") << endl;
        
        continue;        
    }

    return 0;
}

//  main.cpp
//  TaxCalc
//
//  Created by Izloop on 2/20/18.
//  Copyright © 2019 Peter Levi HD. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double tax, income;
    
    cout << "Enter your income: " << endl;
    cin >> income;
    
    if (income < 0) {
        cout << "Salary amount is not taxable!" << endl;
        return 0;
    }
    if (income >= 0 && income < 5000) {
        tax = 0.0;
        cout << "Your earnings do not qualify for Tax Payment" << endl;
    }
    else if (income >= 5000 && income < 10000) {
        tax = income * 0.06;
        cout << "Your tax bracket is 6%" << endl;
    }
    else if (income >= 10000 && income < 20000) {
        tax = income * 0.12;
        cout << "Your tax bracket is 12%" << endl;
    }
    else if (income >= 20000 && income < 50000) {
        tax = income * 0.2;
        cout << "Your tax bracket is 20%" << endl;
    }
    else {
        tax = income * 0.3;
        cout << "Your tax bracket is 30%" << endl;
    }
    
    cout << "Your tax payment for $" << setprecision(2) << fixed << income << " is : $" << tax << endl;
    
    return 0;
}

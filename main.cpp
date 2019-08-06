// Author: Bhaven Patel
// This is a simple calculator program

#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int operate;
    bool proceed = 1;
    while(proceed)
    {
        cout << "Please enter the 1st number" << endl;
        // cin takes input from the user.
        cin >> x;

        cout << "Please enter the 2nd number" << endl;
        cin >> y;

        cout << "Please pick an operator:" << endl;
        cout << "1 : +" << endl;
        cout << "2 : -" << endl;
        cout << "3 : *" << endl;
        cout << "4 : /" << endl;
        cin >> operate;

        int sum;
        int difference;
        int product;
        float quotient;

        switch(operate)
        {
        case 1 :
            sum = x + y;
            cout << "The sum is " << sum << endl;
            break;
        case 2 :
            difference = x - y;
            cout << "The difference is " << difference << endl;
            break;
        case 3 :
            product = x * y;
            cout << "The product is " << product << endl;
            break;
        case 4 :
            quotient = x / y;
            cout << "The quotient is " << quotient << endl;
            break;
        default :
            cout << "invalid operator. Goodbye! :)" << endl;
        }

        cout << "Another calculation?" << endl;
        cout << "0 - no" << endl;
        cout << "1 - yes" << endl;
        cin >> proceed;
    }

    return 0;
}

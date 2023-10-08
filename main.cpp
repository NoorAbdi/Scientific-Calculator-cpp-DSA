#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

// Functions
// Function for addition
int addition(int num1, int num2)
{
    int answer = num1 + num2; // Store the result of addition in the 'answer' variable
    cout << "=" << answer << "\n";
    return answer; // Return the answer
}

int main()
{
    bool repeat = true;
    while (repeat)
    {
        int choice;
        cout << "By Axel, Abdi, Abi, Gerald and Marlon.\n";
        cout << "*********CALCULATOR*********\n";
        cout << "What operation would you like to perform?\n";
        cout << "1.) Addition            7.) Sin\n";
        cout << "2.) Subtraction         8.) Cos\n";
        cout << "3.) Multiplication      9.) Tan\n";
        cout << "4.) Division            10.) log\n";
        cout << "5.) Square root         11.) ln\n";
        cout << "6.) Exponential\n";
        cout << "Enter your choice (1-11): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                int num1, num2;
                cout << "Input first digit: \n";
                cin >> num1;
                cout << "Input second digit: \n";
                cin >> num2;
                addition(num1, num2); // Call the addition function and print the result
                break;
            // Add cases for other operations here
            case 2:
                // subtraction
                break;
            case 3:
                // multiplication
                break;
            case 4:
                // division
                break;
            case 5:
                // square root
                break;
            case 6:
                // exponential
                break;
            case 7:
                // sin
                break;
            case 8:
                // cos
                break;
            case 9:
                // tan
                break;
            case 10:
                // log
                break;
            case 11:
                // ln
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice (1-11).\n";
                break;
        }

        int ContorStop;
        cout << "Would you like to continue calculating?\n";
        cout << "1.) Yes\n";
        cout << "2.) No\n";
        cin >> ContorStop;
        if (ContorStop == 1)
        {
            repeat = true;
        }
        else if (ContorStop == 2)
        {
            repeat = false;
        }
        else
        {
            cout << "Invalid choice. Exiting the calculator.\n";
            repeat = false; // Exit the loop if input is not 1 or 2
        }
    }

    int ExitorShow;
    cout << "What would you like to do?\n";
    cout << "1.) Show history\n";
    cout << "2.) Exit\n";
    cin >> ExitorShow;
    if (ExitorShow == 1)
    {
        // Code to show history
        cout << "History is not implemented yet.\n";
    }
    else if (ExitorShow == 2)
    {
        return 0; // Exit the program
    }
    else
    {
        cout << "Invalid choice. Exiting the program.\n";
        return 1; // Return an error code
    }
}

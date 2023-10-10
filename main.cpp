#include "operator.h"
#include "history.h"
#include <conio.h>
#include <string>
#include <iostream>

int main ()
{
    string inputEquation;
    double result;
    int command;
    int prompt = 1;
    Node* head = NULL;
    int test;
    string tempHistory;

    while (prompt != 0)
    {
            cout
        << "                 Scientific Calculator             \n"
        << "Engineered by Axel, Gerald, Krisna, Abdi, and Marlon\n"
        << "Instructions on using calculator:\n"
        << " - trigonomentry: do sinX or cosX or tanX where X is in degrees\n"
        << " - logarithmic: do logX(Y) or ln(Y) where X is the base and Y is a number\n"
        << " - exponent: do X^Y where X and Y are numbers\n"
        << " - square root: do VX where X is a number\n"
        << " - multiply/divide/add/sub: do X*Y or X/Y or X+Y or X-Y where X and Y are numbers\n"
        << "\nConstraints of operation:\n"
        << " - multiplication should be before other operations (Ex. sin60*3 not possible, 3*sin60 possible)\n"
        << " - division should be before other operations (Ex. sin60/3 not possible, 3/sin60 possible)\n"
		<< "\nWe will try to use these equations:"
		<< "\n - cos100 + sin90 + 1 + tan45 = 2.82"
		<< "\n - 2^4 + 2 + V81 = 27"
		<< "\n - V25 - 5 + 72 = 72\n";
        cout << "Welcome!\n";
        cout << "Command: \n"
		     << " 1: Calculate\n"
		     << " 2: Show History\n"
		     << " 0: Exit Program\n"
             << "Enter: ";
		cin >> prompt;
        system("cls");
	
		//to do a calculation
		if (prompt == 1)
        {
            cout << "Enter the equation: ";
            cin.ignore();
            getline(cin, inputEquation);
            Calculator Calculator(inputEquation);
            result = Calculator.calculate(); // input equation result after testing
            cout << "Result: " << result << endl;  
			
			string calcResult = to_string(result);
			tempHistory = inputEquation + " = " + calcResult;
			push(&head, tempHistory);
						
			prompt = 3;
            cout << "Continue...";
            getche();
            system("cls");
		}
        else if (prompt == 2) //to look at history
        {
			int historyPrompt = 3;
			
            while (historyPrompt != 0)
            {
				printHistory(head);
				
                cout << "Command: \n"
					 << " 1: Delete History\n"
					 << " 0: Go back to Main Menu\n"
                     << "Enter... ";	
				cin >> historyPrompt;
				system("cls");
                
				if(historyPrompt == 1) //delete history
                {
    				int index = 0;
                    printHistory(head);

                    cout << "Enter the position: ";
                    cin >> index;

					deleteNode(&head, index);
					historyPrompt = 3;
                    system("cls");
				}
				else if(historyPrompt == 0){
                    system("cls");
					continue;
				}
			}
			
		}
		else if (prompt == 0)
			return 0;

        
	}

}

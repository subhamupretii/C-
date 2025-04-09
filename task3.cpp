#include <iostream>
using namespace std;

int main() 
{
    char matA[5][5];
    cout << "Seating Arrangement:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matA[i][j] = 'O';
            cout << " " << matA[i][j] << " ";
        }
        cout << endl;
    }

    char choice;
    do 
    {
        int row, col;
        cout << "Enter the row (0-4) to book: ";
        cin >> row;
        cout << "Enter the column (0-4) to book: ";
        cin >> col;

        if (row >= 0 && row < 5 && col >= 0 && col < 5)
        {
            if (matA[row][col] == 'O') 
            {
                matA[row][col] = 'X';
                cout << "Seat booked successfully!\n";
            }
            else
            {
                cout << "Sorry, this seat is already booked!\n";
            }
        }
        else
        {
            cout << "Invalid seat position!\n";
        }
        
        cout << "Updated Seating Arrangement:\n";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << " " << matA[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Do you want to book another seat? (y/n): ";
        cin >> choice;

    } 
    while (choice == 'y' || choice == 'Y'); 

    cout << "Final Seating Arrangement:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " " << matA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Thank you for booking!\n";

    return 0;
}
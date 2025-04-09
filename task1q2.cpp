#include <iostream>
using namespace std;

int main() 
{
    int ch, guess,randomnumber,maxRange;
    cout << "Choose your difficulty level:"<<endl;
    cout << "1. Easy (1-8)"<<endl;
    cout << "2. Medium (1-30)"<<endl;
    cout << "3. Hard (1-50)"<<endl;
    cout << "Enter your choice (1-3): "<<endl;
    cin >> ch;
    if (ch == 1) 
    {
        maxRange = 8;
    } 
    else if (ch == 2) 
    {
        maxRange = 30;
    } 
    else if (ch == 3) 
    {
        maxRange = 50;
    } 
    else 
    {
        cout << "Invalid choice"<<endl;
    }
    
    srand(time(10));  
    randomnumber = (rand() % maxRange) + 1;

    cout << "A number has been generated. Try to guess it!"<<endl;
    
    do 
    {
        cout << "Enter your guess (" << maxRange << "): ";
        cin >> guess;

        if (guess > randomnumber) 
        {
            cout << "Opss Too high! Try again."<<endl;
        } 
        else if (guess < randomnumber) 
        {
            cout << "OpssToo low! Try again."<<endl;
        } 
        else 
        {
            cout << "YAY Congratulations! You guessed the correct number: " << randomnumber << endl;
        }
    } 
    while (guess != randomnumber);

    return 0;
}
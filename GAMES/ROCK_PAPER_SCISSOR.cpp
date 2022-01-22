#include <iostream>
#include <ctime>
using namespace std;
int win()
{
    cout << "You Win !";
    cout << endl;
    return 0;
}
int lose()
{
    cout << "You Lose !";
    cout << endl;
    return 0;
}
int draw()
{
    cout << "It's a Draw.";
    cout << endl;
    return 0;
}
int main()
{
    int You, Computer;
    srand(time(NULL));
    cout << "1-ROCK" << endl;
    cout << "2-PAPER" << endl;
    cout << "3-SCISSOR" << endl;
    cout << "Enter Your Choice: ";
    cin >> You;
    cout << endl;
    Computer = (rand() % 3) + 1;
    if (You == 1)
    {
        cout << "You Select ROCK." << endl;
    }
    else if (You == 2)
    {
        cout << "You Select PAPER." << endl;
    }
    else if (You == 3)
    {
        cout << "You Select SCISSOR." << endl;
    }
    else
    {
        "Invalid Choice.";
        return 1;
    }
    cout << endl;
    if (Computer == 1)
    {
        cout << "Computer Select ROCK." << endl;
    }
    else if (Computer == 2)
    {
        cout << "Computer Select PAPER." << endl;
    }
    else if (Computer == 3)
    {
        cout << "Computer Select SCISSOR." << endl;
    }
    cout << endl;
    if (You == Computer)
    {
        draw();
    }
    if (You == 1)
    {
        if (Computer == 2)
        {
            lose();
        }
        else if (Computer == 3)
        {
            win();
        }
    }
    else if (You == 2)
    {
        if (Computer == 1)
        {
            lose();
        }
        else if (Computer == 3)
        {
            win();
        }
    }
    else if (You == 3)
    {
        if (Computer == 1)
        {
            lose();
        }
        else if (Computer == 2)
        {
            win();
        }
    }
    cout << endl;
    return 0;
}
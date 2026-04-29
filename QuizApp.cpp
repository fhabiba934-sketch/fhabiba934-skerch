#include <iostream>
using namespace std;

int main() 
{
    int answer, score = 0;

    cout << "Q1: Capital of Egypt?\n1.Cairo 2.London 3.Paris\n";
    cin >> answer;
  
    if (answer == 1) score++;

    cout << "Q2: 5 + 3 = ?\n1.6 2.8 3.10\n";
    cin >> answer;
  
    if (answer == 2) score++;

    cout << "Your Score = " << score << "/2";

    return 0;
}

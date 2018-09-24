#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char phrase[50] = {} ;
    char reversed[50] = {} ;
    char enter;
    signed int i = -1;
    int length;
    cout << "This program will reverse your phrase\n";
    cout << "Enter a phrase or word in all lower case\n(Enter a period after the statement to end the phrase):\n";
while (enter != '.')
    {
        phrase[i] = enter;
        length = i;
        cin >> enter;
        i++;
    }
system("CLS");
    cout << "Your Phrase is: ";
    for (int k = 0; k <= length; k++)
    {
    cout << phrase[k];
    }
    cout <<"\n----------------------------------------------" << endl;
    int v = length;
    for (int j = 0; j <= length; j++)
    {
    reversed[v] = phrase[j];
    v--;
    }
    cout << "Your reversed phrase:";
    for (int f = 0; f <= length; f++)
    {
        cout << reversed[f];
    }
return 0;
}



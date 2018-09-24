#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int endA;
    int value;
    int y = 1;
    int k;
    static char response;
    cout << "Enter the Size of List (How Many Items): ";
    cin >> endA;
    int listA[endA] = {0};
    for (int i = 0; i < endA; i++ )
    {
        cout << "Item # " << y << ": ";
        cin >> value;
        listA[i] = value;
        y++;
    }
    system ("CLS");
    cout << "Your List: ";
    for (int j = 0; j < endA; j++)
    {
        cout << listA[j] << " ";
    }
    cout << "\nList Length = " << endA << endl;
    cout << "\nChoose a number to place at the top of the list(Push): ";
    cin >> k;
    endA++;
    listA[endA-1] = k;
    cout << "\nYour New List: ";
    for (int q = 0; q < endA; q++)
    {
        cout << listA[q] << " ";
    }
    cout << "\nNew List Length = " << endA << endl;
    cout << "\nChoose a number to place at the bottom of the list(Enqueue): ";
    cin >> k;
    endA++;
    listA[endA] = 0;
    int cop = endA;
    int hap = endA;
    for (int w = 0; w < endA; w++)
    {
        listA[hap] = listA[cop = cop - 1];
        hap = hap - 1;
    }
    listA['\0'] = k;
    cout << "\nYour New List: ";
    for (int h = 0; h < endA; h++)
    {
        cout << listA[h] << " ";
    }
    cout << "\nNew List Length = " << endA << endl;
    int r = listA[endA-1];
    cout << "Pop the list? (y for yes, n to exit):";
    cin >> response;
    switch (response)
    {
        case 'y':
            cout << "\n\nPopping the list will remove " << listA[endA-1] << " from the list\n\n";
            cout << "List after Pop: ";
            endA--;
            for (int u = 0; u < endA; u++)
                {
                    cout << listA[u] << " ";
                }
                cout << "\nNew List Length = " << endA << endl;
                cout << "\nNumber Popped Out = " << r << "\n\n";
                cout << "Dequeue List?: ";
                cin >> response;
                switch (response)
                {
                case 'y':
                    system("CLS");
                    cout << "Most Recent List(Before Dequeue): ";
                    for (int c = 0; c < endA; c++)
                {
                    cout << listA[c] << " ";
                }
                endA--;
                int de;
                de = listA[endA];
                cout << "\nLost Item from Dequeue: " << de;
                cout << "\n\nList after Dequeue: ";
                for (int b = 0; b < endA; b++)
                {
                    cout << listA[b] << " ";
                }
                cout << "\n\nMost Current List Now: ";
                for (int v = 0; v < endA; v++)
                {
                    cout << listA[v] << " ";
                }
                break;
                case 'n':
                    cout << "Goodbye!";
                    break;
                }
                break;
        case 'n':
            cout << "Goodbye!";
            break;
    }
    return 0;
}

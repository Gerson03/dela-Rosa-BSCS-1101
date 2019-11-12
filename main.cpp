#include <iostream>


using namespace std;

int getarraysize();
void arrayposition(int[]);
void displayarray(int[]);
void arrayselection(int []);

int arraysize;

int main()
{
    int newage[arraysize];
    arrayposition(newage);
    displayarray(newage);

    return 0;
}

int getarraysize()
{

    cout << "Enter array size : ";
    cin >> arraysize;

    return arraysize;
}

void arrayposition(int age [])
{
    getarraysize();
    for (int i = 0; i <= arraysize - 1; i++)
    {
        cout << "The value at position "<< i + 1<<": ";
        cin >> age [i];
    }

}

void displayarray(int age [])
{

     for (int i=0; i<=arraysize-1;i++){

     cout<<endl;
     cout << "The value at position " << i + 1 << " is " << age[i] << endl;
    }

    arrayselection(age);
}

void arrayselection(int age [])
{
    int choice;

    cout <<endl;
    cout << "Please choose the array you want call : ";
    cin >> choice;


    if (choice == 1)
    {
        cout << "The value at position number 1 is "<<age [0]<<endl;
    }

    else if (choice == 2)
    {
        cout << "The value at position number 2 is "<<age [1]<<endl;
    }
    else if (choice == 3)
    {
        cout << "The value at position number 3 is "<<age [2]<<endl;
    }
    else if (choice == 4)
    {
        cout << "The value at position number 4 is "<<age [3]<<endl;
    }

    else
    {
        cout << "Invalid choice"<<endl;
    }


}



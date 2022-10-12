#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char arr[] = "good morning all.";

    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in UPPERCASE:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));
    
    return 0;
}

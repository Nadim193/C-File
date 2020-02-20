#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // in
    //itializing value corresponding to 'A'
    // ASCII value
    int num =65;

    // outer loop to handle number of rows
    //  n in this case
    for (int i=0; i<n; i++)
    {
        //  inner loop to handle number of columns
        //  values changing acc. to outer loop
        for (int j=0; j<=i; j++ )
        {
            // explicitely converting to char
            char ch = char(num);

            // printing char value
            cout << ch << " ";

            // incrementing number at each column
            num = num + 1;
        }

        // ending line after each row
        cout << endl;
    }
}

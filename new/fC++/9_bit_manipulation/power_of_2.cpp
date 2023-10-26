#include <iostream>

using namespace std;

bool getBit(int num, int position)
{
    return (num & (1 << position)) != 0;
}

bool isPowerOfTwo(int num)
{
    if (num <= 0)
    {
        return false; // Negative numbers and 0 are not powers of 2
    }
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (getBit(num, i))
        {
            count++;
            if (count > 1)
            {
                return false; // If more than one bit is set, it's not a power of 2
            }
        }
    }
    return count == 1;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number))
    {
        cout << number << " is a power of 2." << endl;
    }
    else
    {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}

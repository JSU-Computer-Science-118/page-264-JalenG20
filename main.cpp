#include<iostream>
#include <string>
using namespace std;

int main()
{
    //Create the list of first 11 prime number.
    int prime_num[11] = { 2,3,5,7,11,13,17,19,23,29,31 };
    //Define the variables.
    int num, iter, c;

    //prompt user for input.
    cout << "Enter a positive number between 1 to 1000 "
        << "Other than first 11 prime numbers\n";
    cin >> num;

    //Set the counter variable.
    c = 0;

    //Use loop to check if number is prime.
    for (iter = 0; iter < 11; iter++) {

        //Check number divisibility by prime number list.
        // need to check given number exist in the 1st 11 numbers
        if (num % prime_num[iter] != 0 || num == prime_num[iter]) {

            //Increase the counter.
            c++;
        }
    }

    //Display prime number.
    if (c == 11)

        cout << num << " is Prime\n";

    //Else display the list of numbers that divides the
    //entered number.
    else
    {
        //Display the message
        cout << num << " is not prime and divisible by\n";
        //use loop to find the list of number
        //dividing the number input..

        for (iter = 0; iter < 11; iter++)
        {
            //Display the list of number dividing the number.

            if (num % prime_num[iter] == 0)
                cout << prime_num[iter] << " ";

        }
        cout << "\n";
    }
    return 0;

}


// A program to swap the funds of terrorists and a poor man's coffee shop

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

// Function prototypes
void unsuccessfulAccountSwap(int terroristBankAccount, int joeCoffeeBankAccount);   // This one will make a copy of the passed values
void successfulAccountSwap(int& terroristBankAccount, int& joeCoffeeBankAccount);   // This one will pass in a reference
void introduction();

int main()
{
    srand(time(0));
    chrono::duration<int, milli> timespan(900);
    int terroristBankAccount = (rand() % 99 + 1) * 100000;   // $100,000-9,900,000 in their account
    int joeCoffeeBankAccount = rand() % 11 + 4;   // $4-14 in his account
    
    introduction();

    char str1[] = { "What are the terrorist's and Joe's balance currently sitting at?\n\n" };

    for (int i = 0; i < strlen(str1); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str1[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);

    cout << "Terrorists: $" << terroristBankAccount << ".00\n";   // Displays the current bank account balance of the terrorists and Joe
    cout << "Joe: $" << joeCoffeeBankAccount << ".00\n\n";
    this_thread::sleep_for(timespan);

    char str2[] = { "-Injecting Account Swap code-\n\n" };

    for (int i = 0; i < strlen(str2); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str2[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);

    unsuccessfulAccountSwap(terroristBankAccount, joeCoffeeBankAccount);   // The first attempt at swapping the bank accounts will fail

    char str3[] = { "Now what are the terrorist's and Joe's balance at?\n\n" };

    for (int i = 0; i < strlen(str3); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str3[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);

    cout << "Terrorists: $" << terroristBankAccount << ".00\n";
    cout << "Joe: $" << joeCoffeeBankAccount << ".00\n\n";
    this_thread::sleep_for(timespan);

    char str4[] = { "They're the same. Something must have gone wrong. My code is going to need some tweaking.\n" };   // Assessing the failure
    char str5[] = { "Alright, I've made some changes. Let's run it again.\n\n" };

    for (int i = 0; i < strlen(str4); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str4[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str5); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str5[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str2); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str2[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);

    successfulAccountSwap(terroristBankAccount, joeCoffeeBankAccount);   // The second attempt will swap the bank accounts

    char str6[] = { "It's done, now what are the numbers lookin like?\n\n" };

    for (int i = 0; i < strlen(str6); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str6[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);

    cout << "Terrorists: $" << terroristBankAccount << ".00\n";
    cout << "Joe: $" << joeCoffeeBankAccount << ".00\n\n";
    this_thread::sleep_for(timespan);

    char str7[] = { "Would you look at that? All in a day's work.\n" };   // Mission accomplished
    char str8[] = { "We should probably have an agent tell Joe the money was a donation or somethin.\n" };

    for (int i = 0; i < strlen(str7); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str7[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str8); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str8[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);

    return 0;
}

// Swaps the bank accounts, but the copy's values are not carried back to the main and are lost once the function is complete.
void unsuccessfulAccountSwap(int terroristBankAccount, int joeCoffeeBankAccount)
{
    int temporary = terroristBankAccount;
    terroristBankAccount = joeCoffeeBankAccount;
    joeCoffeeBankAccount = temporary;
}

// Does the same thing, but here it is the references that are swapped, which is able to change the referenced values back in the main.
void successfulAccountSwap(int& terroristBankAccount, int& joeCoffeeBankAccount)
{
    int temporary = terroristBankAccount;
    terroristBankAccount = joeCoffeeBankAccount;
    joeCoffeeBankAccount = temporary;
}

void introduction()
{
    chrono::duration<int, milli> timespan(900);
    char str1[] = { "Soap, what's the status of the Group Z terrorists?\n" };
    char str2[] = { "We just got a massive spike in activity, Price.\n"};
    char str3[] = { "Looks like they decided to cash in on the current cyptocurrency value.\n" };
    char str4[] = { "The cash in their bank account just skyrocketed. We gotta do something about this.\n" };
    char str5[] = { "I got an idea. Let's swap their balance with someone else. \n" };
    char str6[] = { "Leave 'em broke and give one lucky guy the happiest day of his life.\n" };
    char str7[] = { "Got any suitable candidates in mind?\n" };
    char str8[] = { "How 'bout that guy who runs Joe's Coffee Shop? He sure could use the help.\n" };
    char str9[] = { "Okay. Let me create a program that will hack into their accounts and swap the money.\n\n" };
    for (int i = 0; i < strlen(str1); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str1[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str2); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str2[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str3); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str3[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str4); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str4[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str5); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str5[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str6); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str6[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str7); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str7[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str8); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str8[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
    for (int i = 0; i < strlen(str9); ++i)
    {
        chrono::duration<int, milli> timespan(40);
        putchar(str9[i]);
        this_thread::sleep_for(timespan);
    }
    this_thread::sleep_for(timespan);
}
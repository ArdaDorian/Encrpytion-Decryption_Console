// Encrpytion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void InitializeProgram();
void Encrypt(int key, const string &Text);
void Decrypt(int key, const string &Text);


int main()
{
    // Get a sentence from user
    // In ASCII, Add key value for each word (user selected)
    // Print decrypted or encrypted version

    InitializeProgram();
}

void InitializeProgram()
{
    int choice;
    int key;
    string sentence;


    cout << "Press 1 to encrypt your words." << endl;
    cout << "Press 2 to decrypt your words." << endl;
    cin >> choice;

    cout << "Enter the key number" << endl;
    cin >> key;

    cin.ignore();

    cout << "Enter the sentence: \n";
    getline(cin, sentence);

    switch (choice)
    {
    case 1:
        Encrypt(key, sentence);
        break;
    case 2:
        Decrypt(key, sentence);
        break;
    default:
        cout << "Invalid Number" << endl;
        break;
    }
    InitializeProgram();
}

void Encrypt(int key, const string& Text)
{
    string encryptedText("");

    for (const char letter : Text)
    {
        encryptedText += letter+key;
    }

    cout << encryptedText << endl;
}

void Decrypt(int key, const string& Text)
{
    string decrypttedText("");

    for (const char letter : Text)
    {
        decrypttedText += letter-key;
    }

    cout << decrypttedText<< endl;
}

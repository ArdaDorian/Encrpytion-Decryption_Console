// Encrpytion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>

using namespace std;

void InitializeProgram();
void Encrypt(const string& Key, const string &Text);
void Decrypt(const string& Key, const string &Text);


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
    string keyWord;
    string sentence;

    cout << "Press 1 to encrypt your words." << endl;
    cout << "Press 2 to decrypt your words." << endl;
    cin >> choice;

    cout << "Enter the keyword (Without any space)"<< endl;
    cin >> keyWord;

    cin.ignore();

    cout << "Enter the sentence: \n";
    getline(cin, sentence);

    switch (choice)
    {
    case 1:
        Encrypt(keyWord, sentence);
        break;
    case 2:
        Decrypt(keyWord, sentence);
        break;
    default:
        cout << "Invalid Process" << endl;
        break;
    }

    InitializeProgram();
}

void Encrypt(const string& Key, const string& Text)
{
    string encryptedText("");

    const int keySize = Key.length();

    for (int i = 0; i < Text.length(); i++)
    {
        encryptedText += Text[i] + Key[i % (keySize- 1)];
    }

    cout << "Encrypted Text: " << encryptedText << endl;

}

void Decrypt(const string& Key, const string& Text)
{
    string decryptedText("");

    const int keySize = Key.length();

    for (int i = 0; i < Text.length(); i++)
    {
        decryptedText += Text[i] - Key[i % (keySize - 1)];
    }

    cout << "Decrypted Text: " << decryptedText << endl;

}

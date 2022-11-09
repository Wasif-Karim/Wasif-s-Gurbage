#include <iostream>
#include <string>

using namespace std;

// Pre: â€œletterâ€ is a letter between â€˜Aâ€™ and â€˜Zâ€™.
// â€œkeyâ€ is a non-negative integer
// Post: returns â€œletterâ€ shifted by adding â€œkeyâ€
char Encrypt_Letter(char letter, int key);

// Pre: â€œletterâ€ is a letter between â€˜Aâ€™ and â€˜Zâ€™.
// â€œkeyâ€ is a non-negative integer
// Post: returns â€œletterâ€ shifted by subtracting â€œkeyâ€
char Decrypt_Letter(char letter, int key);

// Pre: â€œplaintextâ€ is a string consisting of letters between
// â€˜Aâ€™ and â€˜Zâ€™. â€œkeyâ€ is a non-negative integer
// Post: returns a string where each letter of
// â€œplaintextâ€ has been shifted by adding â€œkeyâ€
string Encrypt_Word(string plaintext, int key);

// Pre: â€œciphertextâ€ is a string consisting of letters between
// â€˜Aâ€™ and â€˜Zâ€™. â€œKeyâ€ is a non-negative integer
// Post: returns a string where each letter of
// â€œplaintextâ€ has been shifted by subtracting â€œkeyâ€
string Decrypt_Word(string ciphertext, int key);

// Pre: â€œciphertextâ€ is a string consisting of letters between
// â€˜Aâ€™ and â€˜Zâ€™.// Post: for each possible key from 0-25, outputs to the screen
// the ciphertext decrypted by that key, and the key used.
void Brute_Force_Decrypt(string ciphertext);
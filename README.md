# find-vowels-consonants
This C program counts the number of vowels and consonants in a user-input string. The program reads a string from the user and checks each character to determine if it is a vowel or consonant. Non-alphabetic characters (such as spaces or punctuation) are ignored during the count.

Key Features:
String Input: The program uses fgets() to safely read a string from the user, allowing spaces and special characters.
Character Checking: It uses the isalpha() function to ensure that only alphabetic characters are considered for the vowel/consonant check. It also converts characters to lowercase using tolower() for case-insensitive comparison.
Vowel and Consonant Detection: The program compares each alphabetic character against the vowels 'a', 'e', '

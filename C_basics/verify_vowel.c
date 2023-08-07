#include <stdio.h>
#include <stdbool.h>

/*
This function verifies if the variable is a capital letter(vowel) or a lover case(vowel).
first, it convert the char into a integer, then it compares the ACSII value of the letters to the vaue of capital and lower vowels.
if matches, then the variable resp receives true, if not remains false, then resp is returned.
*/
bool doidao(char c){
    bool resp = false;
    int v = (int)c;
    if (v == 65 || v == 69 || v == 73 || v == 79 || v == 85 || v == 97 || v == 101 || v == 105 ||
        v == 111 || v == 117)
    {
        resp = true;
    }
    return resp;
}

/*
This function receives a char as entrance and returns the same char, but on upper case.
It uses the ASCII table to make the conversion, if the value is between 'a' and 'z' the ASCII code of the character is reduced by 32, whice is its upper case version.
*/
char toUpper(char c)
{
    return (c >= 'a' && c <= 'z') ? ((char)(c - 32)) : c;
}

/*
This function verifies if the entrance is a upper case vowel or a lower case vowel using function toUpper, comparing to 'A', 'E', 'I', 'O', 'U'
return true if its a vowel and false if its not
*/
bool isVogal(char c)
{
    c = toUpper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

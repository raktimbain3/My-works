#include <stdio.h>

int main() {
    char sentence[1000];
    int i=0, words=0, vowels=0, consonants=0, uppercase=0, lowercase=0, totalChars=0;
    

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Count words
    while (sentence[i] !='\0') 
    {
        char ch = sentence[i];

        // Count characters (excluding spaces and newlines)
        if (ch !=' ' && ch!='\n') 
        {
            totalChars++;
        }

        // Check for vowels (both uppercase and lowercase)
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
        {
            vowels++;
        }

        // Count uppercase and lowercase letters 
        if (ch>='A' && ch<='Z') 
        {
            uppercase++;
        } 
        else if (ch>='a' && ch<='z') 
        {
            lowercase++;
        }

        // Count consonants (letter but not vowel)
        if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) 
        {
         if (ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'&&ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
            {
                consonants++;
            }
        }

        // Word count: count when current char is space and next is a letter
        if ((ch==' ' || ch=='\n') && ((sentence[i + 1] >= 'A' && sentence[i + 1] <= 'Z') ||
             (sentence[i + 1] >= 'a' && sentence[i + 1] <= 'z'))) {
            words++;
        }

        i++;
    }

    // First word is not counted in loop, so add 1 if first character is a letter
    if ((sentence[0]>='A' && sentence[0] <='Z') || (sentence[0]>='a' && sentence[0]<='z')) 
    {
        words++;
    }

    // Print result
    printf("\nSentence Analysis:\n");
    printf("Total Words: %d\n", words);
    printf("Total Characters (excluding spaces): %d\n", totalChars);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Uppercase Letters: %d\n", uppercase);
    printf("Lowercase Letters: %d\n", lowercase);
    printf("Sir, we hope you are satisfied with this project...");

    return 0;
}
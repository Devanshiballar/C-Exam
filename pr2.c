#include <stdio.h>
#include <ctype.h>  


void countVowels(char sentence[], int vowelCount[]) {
    int i = 0;
    
    for (int j = 0; j < 5; j++) {
        vowelCount[j] = 0;
    }
    
    while (sentence[i] != '\0') {
     
        char ch = tolower(sentence[i]);
        
     
        switch(ch) {
            case 'a': vowelCount[0]++; break;
            case 'e': vowelCount[1]++; break;
            case 'i': vowelCount[2]++; break;
            case 'o': vowelCount[3]++; break;
            case 'u': vowelCount[4]++; break;
        }
        
        i++;
    }
}

int main() {
    char sentence[500];  
    int vowelCount[5];  
    
   
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  
    

    countVowels(sentence, vowelCount);
    
 
    printf("Vowel counts:\n");
    printf("A: %d\n", vowelCount[0]);
    printf("E: %d\n", vowelCount[1]);
    printf("I: %d\n", vowelCount[2]);
    printf("O: %d\n", vowelCount[3]);
    printf("U: %d\n", vowelCount[4]);
    
    return 0;
}

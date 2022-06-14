#include <Arduino.h>
#include "textencode.h"

String getEncodingCharacter(char character) {
    for(int i = 0; i < 26; i++) {
        String letter = letters[i][0];
        
        if(letter == String(character)) {
            String encodeCharacters = letters[i][1];
            return encodeCharacters;
        }
    }
}
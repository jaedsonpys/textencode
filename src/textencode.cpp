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

String getDecodingCharacter(String characters) {
    for(int i = 0; i < 26; i++) {
        String lettersDecode = letters[i][1];
        
        if(lettersDecode == String(characters)) {
            String decodeCharacters = letters[i][0];
            return decodeCharacters;
        }
    }
}

String encode(String text) {
    String encodedText = "";

    for(int i = 0; i < text.length(); i++) {
        char character = text[i];
        encodedText.concat(getEncodingCharacter(character));
    }

    return encodedText;
}
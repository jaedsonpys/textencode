/**
 * @file TextEncode.h
 * @author Jaedson Silva (imunknowuser@protonmail.com)
 * @brief Encodes texts for easy sending
 * @version 0.1.0
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TextEncode_h
#define TextEncode_h

#include <Arduino.h>

String letters[26][2] = {
    {"a", "w2"}, {"b", "fq"},
    {"c", "8u"}, {"d", "er"},
    {"e", "c3"}, {"f", "8i"},
    {"g", "l0"}, {"h", "wg"},
    {"i", "kl"}, {"j", "mn"},
    {"k", "v4"}, {"l", "k9"},
    {"m", "x3"}, {"n", "pf"},
    {"o", "zx"}, {"p", "gh"},
    {"q", "gw"}, {"r", "gl"},
    {"s", "y2"}, {"t", "r8"},
    {"u", "is"}, {"v", "wx"},
    {"w", "vd"}, {"x", "s2"},
    {"y", "mw"}, {"z", "lo"}
};

String getEncodingCharacter(char character);

void encode(String text);
void decode(String textEncoded);

#endif
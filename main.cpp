#include <stdio.h> 
#include <Arduino.h>

#define t_LED 1
#define t_SET 2

#define t_RED 3
#define t_GREEN 4
#define t_BLUE 5

#define t_BLINK 6
#define t_EOL 255

void populateLookup(char table[7][4], int idx, char first, char second, int len, int tok_num)
{
    table[idx][0] = first;
    table[idx][1] = second;
    table[idx][2] = len + '0';
    table[idx][3] = tok_num + '0';
}


void setup()
{
    Serial.begin(9600);
    char lookup[7][4];	//Lookup table for tokens

    populateLookup(lookup, 0,'l','e',3,t_LED);	//Populate entire lookup table
    populateLookup(lookup, 1,'s','e',3,t_SET);
    populateLookup(lookup, 2,'r','e',3,t_RED);
    populateLookup(lookup, 3,'g','r',5,t_GREEN);
    populateLookup(lookup, 4,'b','l',4,t_BLUE);
    populateLookup(lookup, 5,'b','l',5,t_BLINK);
}


void loop()
{

}

// use coderunner to compile, build, run with ctl+alt+n
#include <stdio.h>

int main (int argc, char *argv[])
{

enum company {GOOGLE, FACEBOOK, AMAZON, YAHOO, EBAY, MICROSOFT};

enum company kill, fuck, marry; 

kill = AMAZON;
fuck = GOOGLE;
marry = EBAY;

const char* companies[] = {"GOOGLE", "FACEBOOK", "AMAZON", "YAHOO", "EBAY", "MICROSOFT"};

printf("\nkill %s, \nfuck %s, \nmarry %s, \n", companies[kill], companies[fuck], companies[marry]);

return 0;
}
// add url to history file (for uzbl browser)
// license: GPLv3
// compile: gcc -O3 -Wall -std=c99 -o history.elf history.c
// use: put in script path and update uzbl config

#include <stdio.h>  // printf
#include <stdlib.h> // getenv
#include <time.h>
#include <unistd.h>

int main (int argc, char **argv) {
    FILE* f;
    time_t t;
    struct tm *tmp;
    char s[20];

    // get current time
    t = time(NULL);
    tmp = localtime(&t);
    strftime(s, sizeof(s), "%Y-%m-%d %H:%M:%S", tmp);

    while (!( f = fopen("/home/FIXME/.local/share/uzbl/history", "a") ))
	sleep(1);
    fprintf(f, "%s %s %s\n", s, getenv("UZBL_URI"), getenv("UZBL_TITLE"));
    fclose(f);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

// gcc -g -w -o pwn6 -fno-stack-protector -no-pie pwn6.c
// /usr/bin/socat -dd TCP4-LISTEN:9006,fork,reuseaddr EXEC:/home/pwn6/pwn6,pty,echo=0,raw,iexten=0 &

void vuln() {
    char buffer[64];
    printf("Submit your payload to recv bunty!\n");
    gets(&buffer);
    puts("Drum roll....\n");
}

void setup() {
    setvbuf(stdout, 0, 2, 0);
    setvbuf(stdin, 0, 2, 0);
}

int main(int argc, char **argv) {
    setup();
    vuln();
    printf("No bunty 4 u!\n");
    return 0;
}

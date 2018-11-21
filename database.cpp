
//
// Created by fatima_msd on 11/21/18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

void create_folder( char s[1000]){
    /* struct stat st = {0};
     if (stat(contact->name, &st) == -1) {
         mkdir(contact->name, 0700);
         }*/
    DIR* dir = opendir(s);
    if (dir)
    {
        /* Directory exists. */
        //closedir(dir);
    }
    else if (ENOENT == errno)
    {
        mkdir(s, 0700);
    }
}
void create() {
    char address[1000];
    strcpy(address, "Tags");
    create_folder(address);
    strcpy(address, "Logs");
    create_folder(address);
    strcpy(address, "Users");
    create_folder(address);
    system("touch ./Logs/int.txt");
}

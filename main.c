#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *command1 = "mkdir C:\\Dependencies";
    const char *command2 = "start C:\\Dependencies\\textbox.vbs";

    system(command1);

    FILE *fptr;
    fptr = fopen("C:\\Dependencies\\textbox.vbs", "w");
    fprintf(fptr, "x=msgbox(\"ARE YOU SURE YOU WANT TO EXECUTE THIS PROGRAM?\",16+4, \"WARNING\")\nx=msgbox(\"You said so\",64+0,\"good luck\")");
    fclose(fptr);
    system(command2);
    return 0;
}
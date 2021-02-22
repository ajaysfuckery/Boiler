// a short C program to make boilerplate html and c files
// created by ajay!

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char a[2];
	
	printf("            + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +\n");
	printf("            |                               WELCOME TO BOILER!                          |\n");
	printf("            |    THIS PROGRAM IS USED FOR GENERATION OF BOILERPLATE HTML AND C FILES    |\n");
	printf("            |  UPDATES MAY OR MAY NOT BE RELEASED FOR THIS TOOL! I'LL SEE WHAT HAPPENS  |\n");
	printf("            |                                  VERSION 1.0                              |\n");
	printf("            + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +\n");
	printf("\n");
	
	printf("              Would you like to generate a boilerplate file for HTML or C? (use h or c): ");
	scanf("%s", a);
	
	if(!strcmp(a, "h")){
		printf("\n");
		printf("                             + - - - - - - - - - - - - - - - +\n");
        printf("                             | HTML FILE HAS BEEN GENERATED! |\n");
        printf("                             + - - - - - - - - - - - - - - - +\n");
        printf("\n");
        
        FILE * output = fopen("output.html", "w");
        fprintf(output, "<!-- The boilerplate code in this file was generated by Boiler! -->\n\n");
        fprintf(output, "<!DOCTYPE html>\n");
        fprintf(output, "<html>\n");
        fprintf(output, "	<head>\n\n");
        fprintf(output, "	</head>\n");
        fprintf(output, "	<body>\n\n");
        fprintf(output, "	</body>\n");
        fprintf(output, "</html>\n");
        fclose(output);
	}
	
	else if(!strcmp(a, "c")){
		printf("\n");
        printf("                             + - - - - - - - - - - - - - - - +\n");
        printf("                             |   C FILE HAS BEEN GENERATED   |\n");
        printf("                             + - - - - - - - - - - - - - - - +\n");
        printf("\n");
        
        FILE * output = fopen("output.c", "w");
        fprintf(output, "// Boilerlpate code in this file was generated by Boiler!\n");
        fprintf(output, "#include <stdio.h>\n");
        fprintf(output, "#include <stdio.h>\n");
        fprintf(output, "\n");
        fprintf(output, "int main(){\n\n\n");
        fprintf(output,	"return 0;\n");
        fprintf(output, "}");
        fclose(output);
	}
	
	else{
		printf("\n");
        printf("            + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +\n");
        printf("            |    WRONG LETTER USED! PLEASE RE-RUN THE SCRIPT AND TRY AGAIN!   |\n");
        printf("            |    LETTERS TO CHOOSE FROM: h FOR HTML FILE AND c FOR C FILE     |\n");
        printf("            + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +\n");
        printf("\n");
	}
	return 0;
}


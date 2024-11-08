#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tudo.h"

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void JogarNovamente(){
	char escolha;
	
    
	printf("\n\n\n\t\t\tDESEJA JOGAR NOVAMENTE? [S/N]\n");
    scanf(" %c", &escolha);

    if (escolha != 's' && escolha != 'S')
	{
    	MenuPrincipal();
    }
}

void Limpar()
{
	system("cls");
}

void Buffer()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void RemoverLinha(char *str)
{
	size_t len = strlen(str);
	if (len > 0 && str[len - 1] == '\n')
	{
		str[len -1] = '\0';
	}
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void LogoVelha() {
    printf("\t\t   _________ _______  _______  _______      ______   _______               _______  _                 _______  \n");
    printf("\t\t   \\__    _/(  ___  )(  ____ \\(  ___  )    (  __  \\ (  ___  )    |\\     /|(  ____ \\( \\      |\\     /|(  ___  ) \n");
    printf("\t\t      )  (  | (   ) || (    \\/| (   ) |    | (  \\  )| (   ) |    | )   ( || (    \\/| (      | )   ( || (   ) | \n");
    printf("\t\t      |  |  | |   | || |      | |   | |    | |   ) || (___) |    | |   | || (__    | |      | (___) || (___) | \n");
    printf("\t\t      |  |  | |   | || | ____ | |   | |    | |   | ||  ___  |    ( (   ) )|  __)   | |      |  ___  ||  ___  | \n");
    printf("\t\t      |  |  | |   | || | \\_  )| |   | |    | |   ) || (   ) |     \\ \\_/ / | (      | |      | (   ) || (   ) | \n");
    printf("\t\t  | \\_)  )  | (___) || (___) || (___) |    | (__/  )| )   ( |      \\   /  | (____/\\| (____/\\| )   ( || )   ( | \n");
    printf("\t\t  (_____/   (_______)(_______)(_______)    (______/ |/     \\|       \\_/   (_______/(_______/|/     \\||/     \\| \n");
    printf("\n");
}

void LogoForca() {

    printf("       _  ____   _____  ____    _____            ______ ____  _____   _____          \n");
    printf("      | |/ __ \\ / ____|/ __ \\  |  __ \\   /\\     |  ____/ __ \\|  __ \\ / ____|   /\\    \n");
    printf("      | | |  | | |  __| |  | | | |  | | /  \\    | |__ | |  | | |__) | |       /  \\   \n");
    printf("  _   | | |  | | | |_ | |  | | | |  | |/ /\\ \\   |  __|| |  | |  _  /| |      / /\\ \\  \n");
    printf(" | |__| | |__| | |__| | |__| | | |__| / ____ \\  | |   | |__| | | \\ \\| |____ / ____ \\ \n");
    printf("  \\____/ \\____/ \\_____|___/  |_____/_/    \\_\\ |_|    \\____/|_|  \\_\\\\_____/_/\\    \\_\\ \n");
    printf("                                                                                     \n");
    printf("                                                                                     \n");

}

void LogoCampoMinado() {

    printf("   _____          __  __ _____   ____    __  __ _____ _   _          _____   ____  \n");
    printf("  / ____|   /\\   |  \\/  |  __ \\ / __ \\  |  \\/  |_   _| \\ | |   /\\   |  __ \\ / __ \\ \n");
    printf(" | |       /  \\  | \\  / | |__) | |  | | | \\  / | | | |  \\| |  /  \\  | |  | | |  | |\n");
    printf(" | |      / /\\ \\ | |\\/| |  ___/| |  | | | |\\/| | | | | . ` | / /\\ \\ | |  | | |  | |\n");
    printf(" | |____ / ____ \\| |  | | |    | |__| | | |  | |_| |_| |\\  |/ ____ \\| |__| | |__| |\n");
    printf("  \\_____/_/    \\_\\_|  |_|_|     \\____/  |_|  |_|_____|_| \\_/_/    \\_\\_____/ \\____/ \n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");

}

void Logo()
{
	 printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                ##################################################                    \n");
    printf("          ##############################################################              \n");
    printf("        ##################################################################            \n");
    printf("      ######################################################################          \n");
    printf("    ########################################################  ################        \n");
    printf("  ################    ####################################      ##############        \n");
    printf("  ##############      ####################################      ################      \n");
    printf("  ##############      ####################################      ################      \n");
    printf("  ##########                ########################      ######      ##########      \n");
    printf("##########                  ######################        ######        ########      \n");
    printf("  ##########                ########################      ######      ##########      \n");
    printf("  ##############      ####################################      ################      \n");
    printf("  ##############      ####################################      ################      \n");
    printf("    ##############  ######################################      ##############        \n");
    printf("    ########################################################  ################        \n");
    printf("      ############################              ############################          \n");
    printf("        ########################                  ########################            \n");
    printf("          ##################                          ################              \n");
    printf("                  ####                                      ####                    \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
    printf("                                                                                      \n");
}

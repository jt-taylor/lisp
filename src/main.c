#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>
#include <editline/history.h>

int	main(int ac, char  **argv)
{
	puts("My lisp prompt program\n");
	puts("lsp:>");
	while (1)
	{
		char * input = readline("lispy:> ");
		add_history(input);
		printf("echoing input %s\n", input);
		free(input);
	}
	return 0;
}

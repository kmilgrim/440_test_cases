#include "myshell_parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define TEST_ASSERT(x) do { \
	if (!(x)) { \
		fprintf(stderr, "%s:%d: Assertion (%s) failed!\n", \
				__FILE__, __LINE__, #x); \
	       	abort(); \
	} \
} while(0)

int
main(void) 
{
	struct pipeline * my_pipeline = pipeline_build("");
    
	// Test that a pipeline was returned
	TEST_ASSERT(my_pipeline != NULL);
	TEST_ASSERT(!(my_pipeline->is_background));
	TEST_ASSERT(my_pipeline->commands == NULL);
    
	pipeline_free(my_pipeline);
}
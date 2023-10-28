#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include "main.h"

void create_empty_source_files(const char *header_file_path) {
  // Open the header file for reading.
  FILE *header_file = fopen(header_file_path, "r");
  if (header_file == NULL) {
    fprintf(stderr, "Error opening header file: %s\n", header_file_path);
    return;
  }

  // Read the header file line by line.
  char line[1024];
  while (fgets(line, sizeof(line), header_file) != NULL) {
    // Find the function declaration.
    if (strstr(line, "int") && strstr(line, "(") && strstr(line, ")")) {
      // Extract the function name.
      char function_name[1024];
      sscanf(line, "%*s %s(%*s)", function_name);

      // Create the empty source file for the function.
      char source_file_path[1024];
      sprintf(source_file_path, "%s", function_name);

      FILE *source_file = fopen(source_file_path, "w");
      if (source_file == NULL) {
        fprintf(stderr, "Error creating source file: %s\n", source_file_path);
        fclose(header_file);
        return;
      }

      // Close the source file.
      fclose(source_file);
    }
  }

  // Close the header file.
  fclose(header_file);
}

int main()
{
create_empty_source_files("/alx-low_level_programming/0x09-static_libraries/main.h");
}

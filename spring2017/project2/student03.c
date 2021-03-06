/* STUDENT03 TEST by Anna Blendermann */
#include <stdio.h>
#include <string.h>
#include "document.h"

int main() {
   Document doc;
   const char *doc_name = "Highlight-Doctor";
   int paragraph_number;

   if (init_document(&doc, doc_name) == FAILURE) {
      printf("Initialization failed\n");
   } else {
      print_document(&doc);
   }

   /* adding first paragraph */
   add_paragraph_after(&doc, 0);

   /* adding lines to the paragraph */
   paragraph_number = 1;
   append_line(&doc, paragraph_number, "First Paragraph, First line");
   append_line(&doc, paragraph_number, "First Paragraph, Second line");
   append_line(&doc, paragraph_number, "First Paragraph, Third line");

   /* highlight "graph" everywhere and then remove */
   replace_text(&doc, "First", "Puppy");
   highlight_text(&doc, "Puppy");
   print_document(&doc);

   return 0;
}

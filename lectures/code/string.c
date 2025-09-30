#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct stringT
{
  int len;
  char* buffer;
};

int string_init(struct stringT* str)
{
  // give an intial size and set to empty string
  str->len = 4;
  str->buffer = malloc(sizeof(char) * str->len);
  assert(str->buffer != NULL);
  str->buffer[0] = '\0';
}

void string_free(struct stringT* str)
{
  free(str->buffer);
  str->buffer = NULL;
  str->len = 0;
}


void string_set(struct stringT* str, const char* text)
{
  int n = strlen(text) + 1; // include space for '\0'
  if (str->len < n) 
  {
    string_free(str); 
    str->len = n * 2; // ask for more space than we need
    str->buffer = malloc(sizeof(char) * str->len);
    assert(str->buffer != NULL); // check for error
  }
  strncpy(str->buffer, text, n);
}

int main()
{
  struct stringT astring;
  string_init(&astring);
  string_set(&astring, "Hi");
  printf("%s\n", astring.buffer);

  string_set(&astring, "This is a message");
  printf("%s\n", astring.buffer);

  string_free(&astring);
  return 0;
}


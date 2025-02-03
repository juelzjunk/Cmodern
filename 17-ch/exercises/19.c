// Write a function that, when given a string as its argument, searches the
// following array of structures for a matching command name, then calls the
// function associated with that name.

#include <string.h>

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
  char *cmd_name;
  void (*cmd_pointer)(void);
} file_cmd[] = {{"new", new_cmd},           {"open", open_cmd},
                {"close", close_cmd},       {"close all", close_all_cmd},
                {"save", save_cmd},         {"save as", save_as_cmd},
                {"save all", save_all_cmd}, {"print", print_cmd},
                {"exit", exit_cmd}};

void command(const char *str) {
  for (int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++)
    if (!strcmp(str, file_cmd[i].cmd_name))
      return (*file_cmd[i].cmd_pointer)();
  return;
}

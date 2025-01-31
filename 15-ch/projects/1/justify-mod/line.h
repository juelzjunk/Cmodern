#ifndef LINE_H
#define LINE_H

// clear_line : Clears the current Line.
void clear_line(void);

// add_word: Adds word to the end of the current line. If the is not the first
//           word on the line, puts pne space before word.
void add_word(const char *word);

// space_remaining: Returns the number of characters left in the current line.
int space_remaining(void);

// write_line: Writes the current line with justification.
void write_line(void);

// flush_line: Writes the current line without justification. If the line is
//             empty, it does nothing.
void flush_line(void);

#endif

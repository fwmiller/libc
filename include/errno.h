#ifndef __ERRNO_H
#define __ERRNO_H

/* Error Functions */
void clearerr(PILE *stream);
int feof(FILE *stream);
int ferror(FILE *stream);
void perror(const char *s);

#endif

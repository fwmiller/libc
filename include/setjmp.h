#ifndef __SETJMP_H
#define __SETJMP_H

int setjmp(jmp_buf env);
void longjmp(jmp_buf env, int val);

#endif

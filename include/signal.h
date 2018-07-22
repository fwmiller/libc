#ifndef __SIGNAL_H
#define __SIGNAL_H

void (*signal(int sig, void (*handler)(int)))(int);
int raise(int sig);

#endif

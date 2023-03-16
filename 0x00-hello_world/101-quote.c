#include <unistd.h>

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const int message_length = 50;
    const int fd = 2; // stderr file descriptor

    write(fd, message, message_length);

    return 1;
}

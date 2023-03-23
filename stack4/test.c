#include <fcntl.h>

int main() {
  // open, sendfile
  int fd;

  fd = open("./flag.txt", O_RDONLY);

}

#include <unistd.h>
int main(int argc, char *argv[]) {
   int bytes;
   char buf[256];
   while((bytes = read(STDIN_FILENO, buf, sizeof(buf))) > 0) {
      if (write(STDERR_FILENO, buf, bytes) < 0) {
         return 1;
      }
   }

   return bytes;
}

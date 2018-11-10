if (read(7, buf, 1) < 0) {
   fprintf(stderr, "%d ", errno);
   perror("read");
   _exit(1);
}

/* 9 read: Bad file number */

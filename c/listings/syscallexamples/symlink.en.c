int symlink(
   const char *name1,  
   const char *name2
); 

ssize_t readlink( 
   const char *restrict path, /* link */
   char  *restrict buf,        /* buf */ 
   size_t bufsiz       /* buffer size */ 
); 

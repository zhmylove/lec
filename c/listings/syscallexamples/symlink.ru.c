int symlink(
   const char *name1,  
   const char *name2
); 

ssize_t readlink( 
   const char *restrict path, /* ссылка*/
   char  *restrict buf,       /* буфер */ 
   size_t bufsiz      /* размер буфера */ 
); 

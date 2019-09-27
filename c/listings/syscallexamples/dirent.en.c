typedef struct dirent { 
   ino_t d_ino;
      /* index descriptor number */ 
   off_t d_off;        /* offset */ 
   unsigned short reclen;
             /* length of record */ 
   char d_name[];    /* dir name */ 
} dirent_t;

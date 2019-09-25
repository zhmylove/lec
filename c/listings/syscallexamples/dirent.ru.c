typedef struct dirent { 
   ino_t d_ino;
      /* номер индексного дескриптора */ 
   off_t d_off; /* смещение от начала */ 
   unsigned short reclen;
                      /* длина записи */ 
   char d_name[];        /* имя файла */ 
} dirent_t;

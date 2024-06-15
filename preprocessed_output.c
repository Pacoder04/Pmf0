# 1 "noviBizon.tab.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "noviBizon.tab.c"
# 1 "noviBizon.y"

# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 1 3
# 19 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/include/_mingw.h" 1 3
# 32 "C:/Program Files (x86)/CodeBlocks/MinGW/include/_mingw.h" 3
       
# 33 "C:/Program Files (x86)/CodeBlocks/MinGW/include/_mingw.h" 3
# 20 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 2 3






# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 1 3 4
# 212 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 3 4
typedef unsigned int size_t;
# 324 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 353 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 3 4
typedef short unsigned int wint_t;
# 27 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 2 3

# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stdarg.h" 1 3 4
# 40 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 29 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 2 3
# 129 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
typedef struct _iobuf
{
 char* _ptr;
 int _cnt;
 char* _base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char* _tmpfname;
} FILE;
# 154 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
extern __attribute__ ((__dllimport__)) FILE _iob[];
# 169 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fopen (const char*, const char*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) freopen (const char*, const char*, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fflush (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fclose (FILE*);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) remove (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rename (const char*, const char*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tmpfile (void);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tmpnam (char*);


 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _tempnam (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _rmtmp(void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _unlink (const char*);


 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tempnam (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rmtmp(void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) unlink (const char*);



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setvbuf (FILE*, char*, int, size_t);

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setbuf (FILE*, char*);
# 204 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_printf(const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vfprintf(FILE*, const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vprintf(const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vsprintf(char*, const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vsnprintf(char*, size_t, const char*, __gnuc_va_list);
# 293 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fprintf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) printf (const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) sprintf (char*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfprintf (FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vprintf (const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsprintf (char*, const char*, __gnuc_va_list);
# 308 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_fprintf(FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_printf(const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_sprintf(char*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vfprintf(FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vprintf(const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vsprintf(char*, const char*, __gnuc_va_list);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snprintf (char*, size_t, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnprintf (char*, size_t, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vscprintf (const char*, __gnuc_va_list);
# 331 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snprintf (char *, size_t, const char *, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnprintf (char *, size_t, const char *, __gnuc_va_list);

int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vscanf (const char * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfscanf (FILE * __restrict__, const char * __restrict__,
       __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsscanf (const char * __restrict__,
       const char * __restrict__, __gnuc_va_list);







 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fscanf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) scanf (const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) sscanf (const char*, const char*, ...);




 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetc (FILE*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgets (char*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputc (int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputs (const char*, FILE*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) gets (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) puts (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetc (int, FILE*);







 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _filbuf (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _flsbuf (int, FILE*);



extern __inline__ int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getc (FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) *__F->_ptr++
    : _filbuf (__F);
}

extern __inline__ int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putc (int __c, FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) (*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}

extern __inline__ int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) (unsigned char) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}

extern __inline__ int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int) (unsigned char) (*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
# 412 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fread (void*, size_t, size_t, FILE*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwrite (const void*, size_t, size_t, FILE*);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fseek (FILE*, long, int);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ftell (FILE*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rewind (FILE*);
# 455 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
typedef long long fpos_t;




 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetpos (FILE*, fpos_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fsetpos (FILE*, const fpos_t*);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) feof (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ferror (FILE*);
# 480 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) clearerr (FILE*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) perror (const char*);






 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _popen (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _pclose (FILE*);


 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) popen (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) pclose (FILE*);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _flushall (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fgetchar (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fputchar (int);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fdopen (int, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fileno (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fcloseall (void);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fsopen (const char*, const char*, int);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getmaxstdio (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _setmaxstdio (int);
# 522 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetchar (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputchar (int);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fdopen (int, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fileno (FILE*);
# 534 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/include/sys/types.h" 1 3
# 21 "C:/Program Files (x86)/CodeBlocks/MinGW/include/sys/types.h" 3
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 1 3 4
# 147 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 22 "C:/Program Files (x86)/CodeBlocks/MinGW/include/sys/types.h" 2 3





typedef long __time32_t;




typedef long long __time64_t;
# 45 "C:/Program Files (x86)/CodeBlocks/MinGW/include/sys/types.h" 3
typedef __time32_t time_t;






typedef long _off_t;


typedef _off_t off_t;







typedef unsigned int _dev_t;





typedef _dev_t dev_t;






typedef short _ino_t;


typedef _ino_t ino_t;






typedef int _pid_t;


typedef _pid_t pid_t;






typedef unsigned short _mode_t;


typedef _mode_t mode_t;






typedef int _sigset_t;


typedef _sigset_t sigset_t;





typedef int _ssize_t;


typedef _ssize_t ssize_t;





typedef long long fpos64_t;




typedef long long off64_t;



typedef unsigned int useconds_t;
# 535 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 2 3
extern __inline__ FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fopen64 (const char* filename, const char* mode)
{
  return fopen (filename, mode);
}

int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fseeko64 (FILE*, off64_t, int);






extern __inline__ off64_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ftello64 (FILE * stream)
{
  fpos_t pos;
  if (fgetpos(stream, &pos))
    return -1LL;
  else
   return ((off64_t) pos);
}
# 563 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wprintf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwprintf (FILE*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vscwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wscanf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetwc (wchar_t, FILE*);



 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswprintf (wchar_t*, const wchar_t*, __gnuc_va_list);



 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwchar (void);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getws (wchar_t*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwc (wint_t, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putws (const wchar_t*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwchar (wint_t);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfdopen(int, const wchar_t *);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfopen (const wchar_t*, const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfreopen (const wchar_t*, const wchar_t*, FILE*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfsopen (const wchar_t*, const wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtmpnam (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtempnam (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wrename (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wremove (const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wperror (const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wpopen (const wchar_t*, const wchar_t*);



int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snwprintf (wchar_t* s, size_t n, const wchar_t* format, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg);





int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwscanf (const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwscanf (FILE * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswscanf (const wchar_t * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
# 625 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wpopen (const wchar_t*, const wchar_t*);






 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fgetwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fputwchar (wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getw (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putw (int, FILE*);


 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwchar (wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getw (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putw (int, FILE*);
# 3 "noviBizon.y" 2
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 1 3
# 21 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 1 3 4
# 22 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 2 3
# 71 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
extern int _argc;
extern char** _argv;




extern int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___argc(void);
extern char*** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___argv(void);
extern wchar_t*** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___wargv(void);
# 112 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
   extern __attribute__ ((__dllimport__)) int __mb_cur_max;
# 137 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _errno(void);


 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __doserrno(void);
# 149 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
  extern char *** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__environ(void);
  extern wchar_t *** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__wenviron(void);
# 172 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 196 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
extern __attribute__ ((__dllimport__)) char* _sys_errlist[];
# 209 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__osver(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winver(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winmajor(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winminor(void);







extern __attribute__ ((__dllimport__)) unsigned int _osver;
extern __attribute__ ((__dllimport__)) unsigned int _winver;
extern __attribute__ ((__dllimport__)) unsigned int _winmajor;
extern __attribute__ ((__dllimport__)) unsigned int _winminor;
# 260 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
 char** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__pgmptr(void);

 wchar_t** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__wpgmptr(void);
# 293 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
extern __attribute__ ((__dllimport__)) int _fmode;
# 303 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atof (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atoi (const char*);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atol (const char*);

 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtof (const wchar_t *);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtoi (const wchar_t *);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtol (const wchar_t *);


double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __strtod (const char*, char**);
extern double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
strtod (const char* __restrict__ __nptr, char** __restrict__ __endptr);
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof (const char * __restrict__, char ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold (const char * __restrict__, char ** __restrict__);




 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtol (const char*, char**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoul (const char*, char**, int);



 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstoul (const wchar_t*, wchar_t**, int);
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstod (const wchar_t*, wchar_t**);

float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);


 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wgetenv(const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wputenv(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsystem(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfullpath (wchar_t*, const wchar_t*, size_t);




 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstombs (char*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wctomb (char*, wchar_t);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mblen (const char*, size_t);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbstowcs (wchar_t*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbtowc (wchar_t*, const char*, size_t);

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rand (void);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) srand (unsigned int);

 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) calloc (size_t, size_t) __attribute__ ((__malloc__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) malloc (size_t) __attribute__ ((__malloc__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) realloc (void*, size_t);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) free (void*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) abort (void) __attribute__ ((__noreturn__));
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit (int) __attribute__ ((__noreturn__));


int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atexit (void (*)(void));

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) system (const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getenv (const char*);


 void* __attribute__((__cdecl__)) bsearch (const void*, const void*, size_t, size_t,
          int (*)(const void*, const void*));
 void __attribute__((__cdecl__)) qsort(void*, size_t, size_t,
      int (*)(const void*, const void*));

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) abs (int) __attribute__ ((__const__));
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) labs (long) __attribute__ ((__const__));
# 385 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 div_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) div (int, int) __attribute__ ((__const__));
 ldiv_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ldiv (long, long) __attribute__ ((__const__));







 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _beep (unsigned int, unsigned int) __attribute__ ((__deprecated__));

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _seterrormode (int) __attribute__ ((__deprecated__));
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _sleep (unsigned long) __attribute__ ((__deprecated__));

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit (int) __attribute__ ((__noreturn__));



typedef int (* _onexit_t)(void);
_onexit_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _onexit( _onexit_t );

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putenv (const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _searchenv (const char*, const char*, char*);

 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _gcvt (double, int, char*);

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _makepath (char*, const char*, const char*, const char*, const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _splitpath (const char*, char*, char*, char*, char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fullpath (char*, const char*, size_t);

 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _itoa (int, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ltoa (long, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ultoa(unsigned long, char*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _itow (int, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ltow (long, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ultow (unsigned long, wchar_t*, int);


 long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _atoi64(const char *);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _i64toa(long long, char *, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ui64toa(unsigned long long, char *, int);
 long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtoi64(const wchar_t *);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _i64tow(long long, wchar_t *, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ui64tow(unsigned long long, wchar_t *, int);

 unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_rotl)(unsigned int, int) __attribute__ ((__const__));
 unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_rotr)(unsigned int, int) __attribute__ ((__const__));
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_lrotl)(unsigned long, int) __attribute__ ((__const__));
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) (_lrotr)(unsigned long, int) __attribute__ ((__const__));

 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _set_error_mode (int);
# 477 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putenv (const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) searchenv (const char*, const char*, char*);

 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) itoa (int, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ltoa (long, char*, int);


 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) gcvt (double, int, char*);
# 497 "C:/Program Files (x86)/CodeBlocks/MinGW/include/stdlib.h" 3
void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _Exit(int) __attribute__ ((__noreturn__));





typedef struct { long long quot, rem; } lldiv_t;

lldiv_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lldiv (long long, long long) __attribute__ ((__const__));

long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) llabs(long long);





long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoull (const char* __restrict__, char** __restrict__, int);


long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atoll (const char *);


long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wtoll (const wchar_t *);
char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lltoa (long long, char *, int);
char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ulltoa (unsigned long long , char *, int);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lltow (long long, wchar_t *, int);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ulltow (unsigned long long, wchar_t *, int);
# 4 "noviBizon.y" 2
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 1 3
# 24 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 3
# 1 "C:/Program Files (x86)/CodeBlocks/MinGW/lib/gcc/mingw32/4.9.2/include/stddef.h" 1 3 4
# 25 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 2 3
# 36 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 3
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memchr (const void*, int, size_t) __attribute__ ((__pure__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memcmp (const void*, const void*, size_t) __attribute__ ((__pure__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memcpy (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memmove (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memset (void*, int, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcat (char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strchr (const char*, int) __attribute__ ((__pure__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcmp (const char*, const char*) __attribute__ ((__pure__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcoll (const char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcpy (char*, const char*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcspn (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strerror (int);

 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strlen (const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncat (char*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncmp (const char*, const char*, size_t) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncpy (char*, const char*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strpbrk (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strrchr (const char*, int) __attribute__ ((__pure__));
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strspn (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strstr (const char*, const char*) __attribute__ ((__pure__));
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtok (char*, const char*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strxfrm (char*, const char*, size_t);





 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strerror (const char *);
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strdup (const char*) __attribute__ ((__malloc__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _stricmp (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strlwr (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strnicmp (const char*, const char*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strrev (char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strset (char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strupr (char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _swab (const char*, char*, size_t);


 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strncoll(const char*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _strnicoll(const char*, const char*, size_t);
# 90 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 3
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strdup (const char*) __attribute__ ((__malloc__));
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) stricmp (const char*, const char*);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strcasecmp (const char*, const char *);





 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strlwr (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strnicmp (const char*, const char*, size_t);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strncasecmp (const char *, const char *, size_t);





 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strrev (char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strset (char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strupr (char*);

 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swab (const char*, char*, size_t);
# 126 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscat (wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcschr (const wchar_t*, wchar_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscpy (wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscspn (const wchar_t*, const wchar_t*);

 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcslen (const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncat (wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncmp(const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsncpy(wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcspbrk(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrchr(const wchar_t*, wchar_t);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsspn(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsstr(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstok(wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsxfrm(wchar_t*, const wchar_t*, size_t);
# 152 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 3
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsupr (wchar_t*);


 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsncoll(const wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wcsnicoll(const wchar_t*, const wchar_t*, size_t);
# 173 "C:/Program Files (x86)/CodeBlocks/MinGW/include/string.h" 3
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2);





 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcsupr (wchar_t*);
# 5 "noviBizon.y" 2
# 1 "ast.h" 1
# 10 "ast.h"
typedef struct ASTNode {
    int nodeType;
    struct ASTNode *left;
    struct ASTNode *right;
    char *value;
} ASTNode;

ASTNode *createNode(int nodeType, ASTNode *left, ASTNode *right, char *value) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->nodeType = nodeType;
    node->left = left;
    node->right = right;
    node->value = value ? strdup(value) : ((void *)0);
    return node;
}

void printLevel(ASTNode *root, int level) {
    if (root == ((void *)0)) return;
    if (level == 1) {
        if (root->value)
            printf("%s ", root->value);
        else
            printf("%d ", root->nodeType);
    } else if (level > 1) {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

void printLevels(ASTNode *root) {
    int level = 1;
    while (1) {
        printf("Level %d: ", level);
        printLevel(root, level);
        printf("\n");
        level++;
    }
}

ASTNode *root = ((void *)0);
# 6 "noviBizon.y" 2

extern ASTNode *root;



extern int yylex();
extern int yyparse();
extern int yylineno;

void yyerror(char *s) {
    printf("Error: %s at line %d\n", s, yylineno);
}
# 97 "noviBizon.tab.c"
# 122 "noviBizon.tab.c"
   enum yytokentype {
     INTCONST = 258,
     DOUBLECONST = 259,
     BOOLCONST = 260,
     STRCONST = 261,
     IDENTIFIER = 262,
     INT = 263,
     DOUBLE = 264,
     BOOL = 265,
     STRING = 266,
     SKIP = 267,
     READ = 268,
     WRITE = 269,
     IF = 270,
     THEN = 271,
     ELSE = 272,
     FI = 273,
     WHILE = 274,
     DO = 275,
     END = 276,
     LET = 277,
     IN = 278,
     ENDWHILE = 279,
     FOR = 280,
     RETURN = 281,
     LE = 282,
     GE = 283,
     EQ = 284,
     NE = 285,
     AND = 286,
     OR = 287,
     UMINUS = 288,
     NOT = 289
   };





typedef union YYSTYPE
{
# 24 "noviBizon.y"

    int int_val;
    double double_val;
    char *str_val;
    int bool_val;
    ASTNode *node;
# 177 "noviBizon.tab.c"
} YYSTYPE;
# 189 "noviBizon.tab.c"
# 197 "noviBizon.tab.c"
typedef unsigned char yytype_uint8;






typedef signed char yytype_int8;







typedef unsigned short int yytype_uint16;





typedef short int yytype_int16;
# 330 "noviBizon.tab.c"
void *malloc (unsigned int);






void free (void *);
# 349 "noviBizon.tab.c"
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};
# 422 "noviBizon.tab.c"
static const yytype_uint8 yytranslate[] =
{
       0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 36, 2, 2, 2, 48, 2, 2,
      40, 41, 46, 44, 39, 45, 2, 47, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 51, 38,
      27, 37, 28, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 49, 2, 50, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 42, 2, 43, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
       5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 29, 30, 31, 32, 33, 34, 35, 52
};
# 530 "noviBizon.tab.c"
static const yytype_uint8 yyr1[] =
{
       0, 53, 54, 55, 55, 56, 56, 57, 58, 58,
      59, 59, 60, 60, 60, 60, 60, 60, 61, 61,
      61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
      61, 62, 62, 62, 62, 62, 62, 62, 62, 63,
      63, 63, 63
};


static const yytype_uint8 yyr2[] =
{
       0, 2, 5, 0, 1, 2, 3, 4, 3, 1,
       2, 1, 2, 4, 10, 5, 3, 3, 1, 1,
       1, 1, 1, 3, 3, 3, 3, 3, 3, 2,
       2, 3, 3, 3, 3, 3, 3, 3, 3, 1,
       1, 1, 1
};




static const yytype_uint8 yydefact[] =
{
       0, 3, 0, 39, 40, 41, 42, 0, 4, 0,
       1, 0, 0, 0, 5, 0, 0, 0, 0, 0,
       0, 0, 11, 6, 9, 0, 0, 12, 0, 18,
      19, 20, 21, 22, 0, 0, 0, 0, 0, 0,
       0, 2, 10, 0, 0, 0, 16, 30, 0, 29,
      17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 8, 7, 13, 23,
      24, 25, 26, 27, 28, 0, 31, 32, 33, 34,
      35, 36, 37, 38, 0, 0, 15, 0, 0, 0,
       0, 14
};


static const yytype_int8 yydefgoto[] =
{
      -1, 2, 7, 8, 14, 25, 21, 22, 39, 40,
       9
};




static const yytype_int8 yypact[] =
{
     -19, 50, 10, -61, -61, -61, -61, -12, 50, -45,
     -61, 125, -45, 5, -61, -23, -22, 8, 17, -13,
      17, 97, -61, -61, -61, -37, 17, -61, 1, -61,
     -61, -61, -61, -61, 17, 17, 17, 103, 17, 42,
      34, -61, -61, 48, 18, 108, -61, -61, -15, -61,
     -61, 17, 17, 17, 17, 17, 23, 17, 17, 17,
      17, 17, 17, 17, 17, 125, -61, -61, -61, -61,
     -40, -40, -61, -61, -61, 49, 4, 4, 4, 4,
       4, 4, 4, 4, 84, 125, -61, 107, 125, 116,
      29, -61
};


static const yytype_int8 yypgoto[] =
{
     -61, -61, -61, -61, 65, -61, -60, -21, -17, 40,
      71
};






static const yytype_uint8 yytable[] =
{
      42, 37, 43, 1, 13, 84, 53, 54, 55, 45,
      10, 11, 24, 44, 26, 28, 27, 47, 48, 49,
      29, 30, 31, 32, 33, 87, 69, 38, 89, 51,
      52, 53, 54, 55, 70, 71, 72, 73, 74, 46,
      76, 77, 78, 79, 80, 81, 82, 83, 51, 52,
      53, 54, 55, 34, 65, 66, 67, 35, 3, 4,
       5, 6, 36, 42, 75, 85, 42, 91, 42, 57,
      58, 59, 60, 61, 62, 63, 64, 23, 56, 12,
       0, 0, 0, 0, 0, 0, 51, 52, 53, 54,
      55, 15, 0, 0, 0, 0, 16, 17, 18, 19,
       0, 0, 0, 20, 15, 0, 0, 0, 86, 16,
      17, 18, 19, 0, 15, 0, 20, 0, 41, 16,
      17, 18, 19, 15, 88, 0, 20, 0, 16, 17,
      18, 19, 15, 0, 90, 20, 0, 16, 17, 18,
      19, 50, 0, 0, 20, 0, 68, 51, 52, 53,
      54, 55, 51, 52, 53, 54, 55
};

static const yytype_int8 yycheck[] =
{
      21, 18, 39, 22, 49, 65, 46, 47, 48, 26,
       0, 23, 7, 50, 37, 7, 38, 34, 35, 36,
       3, 4, 5, 6, 7, 85, 41, 40, 88, 44,
      45, 46, 47, 48, 51, 52, 53, 54, 55, 38,
      57, 58, 59, 60, 61, 62, 63, 64, 44, 45,
      46, 47, 48, 36, 20, 7, 38, 40, 8, 9,
      10, 11, 45, 84, 41, 16, 87, 38, 89, 27,
      28, 29, 30, 31, 32, 33, 34, 12, 38, 8,
      -1, -1, -1, -1, -1, -1, 44, 45, 46, 47,
      48, 7, -1, -1, -1, -1, 12, 13, 14, 15,
      -1, -1, -1, 19, 7, -1, -1, -1, 24, 12,
      13, 14, 15, -1, 7, -1, 19, -1, 21, 12,
      13, 14, 15, 7, 17, -1, 19, -1, 12, 13,
      14, 15, 7, -1, 18, 19, -1, 12, 13, 14,
      15, 38, -1, -1, 19, -1, 38, 44, 45, 46,
      47, 48, 44, 45, 46, 47, 48
};



static const yytype_uint8 yystos[] =
{
       0, 22, 54, 8, 9, 10, 11, 55, 56, 63,
       0, 23, 63, 49, 57, 7, 12, 13, 14, 15,
      19, 59, 60, 57, 7, 58, 37, 38, 7, 3,
       4, 5, 6, 7, 36, 40, 45, 61, 40, 61,
      62, 21, 60, 39, 50, 61, 38, 61, 61, 61,
      38, 44, 45, 46, 47, 48, 62, 27, 28, 29,
      30, 31, 32, 33, 34, 20, 7, 38, 38, 41,
      61, 61, 61, 61, 61, 41, 61, 61, 61, 61,
      61, 61, 61, 61, 59, 16, 24, 59, 17, 59,
      18, 38
};
# 1148 "noviBizon.tab.c"
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)







{
  ((void) (yyvaluep));

  if (!yymsg)
    yymsg = "Deleting";
  ;

  switch (yytype)
    {

      default:
 break;
    }
}
# 1181 "noviBizon.tab.c"
int yyparse (void);







int yychar;


YYSTYPE yylval;


int yynerrs;
# 1216 "noviBizon.tab.c"
int
yyparse (void)






{


    int yystate;

    int yyerrstatus;
# 1239 "noviBizon.tab.c"
    yytype_int16 yyssa[200];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;


    YYSTYPE yyvsa[200];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    unsigned int yystacksize;

  int yyn;
  int yyresult;

  int yytoken;


  YYSTYPE yyval;
# 1269 "noviBizon.tab.c"
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = 200;

  ;

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = (-2);





  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;




 yynewstate:


  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {

      unsigned int yysize = yyssp - yyss + 1;
# 1333 "noviBizon.tab.c"
      if (10000 <= yystacksize)
 goto yyexhaustedlab;
      yystacksize *= 2;
      if (10000 < yystacksize)
 yystacksize = 10000;

      {
 yytype_int16 *yyss1 = yyss;
 union yyalloc *yyptr =
   (union yyalloc *) malloc (((yystacksize) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) + (sizeof (union yyalloc) - 1)));
 if (! yyptr)
   goto yyexhaustedlab;
 do { unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyss_alloc, yyss, (yysize) * sizeof (*(yyss))); yyss = &yyptr->yyss_alloc; yynewbytes = yystacksize * sizeof (*yyss) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while ((0));
 do { unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyvs_alloc, yyvs, (yysize) * sizeof (*(yyvs))); yyvs = &yyptr->yyvs_alloc; yynewbytes = yystacksize * sizeof (*yyvs) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while ((0));

 if (yyss1 != yyssa)
   free (yyss1);
      }



      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

     
                                     ;

      if (yyss + yystacksize - 1 <= yyssp)
 goto yyabortlab;
    }

  ;

  if (yystate == 10)
    goto yyacceptlab;

  goto yybackup;




yybackup:





  yyn = yypact[yystate];
  if (yyn == -61)
    goto yydefault;




  if (yychar == (-2))
    {
      ;
      yychar = yylex ();
    }

  if (yychar <= 0)
    {
      yychar = yytoken = 0;
      ;
    }
  else
    {
      yytoken = ((unsigned int) (yychar) <= 289 ? yytranslate[yychar] : 2);
      ;
    }



  yyn += yytoken;
  if (yyn < 0 || 156 < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == -1)
 goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }



  if (yyerrstatus)
    yyerrstatus--;


  ;


  yychar = (-2);

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;





yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;





yyreduce:

  yylen = yyr2[yyn];
# 1460 "noviBizon.tab.c"
  yyval = yyvsp[1-yylen];


  ;
  switch (yyn)
    {
        case 2:
# 57 "noviBizon.y"
    {
        root = createNode(0, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), "program");
        printf("Program is correct\n");
        printLevels(root);
    ;}
    break;

  case 3:
# 65 "noviBizon.y"
    { printf("No declarations\n"); ;}
    break;

  case 4:
# 66 "noviBizon.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Declarations are correct\n"); ;}
    break;

  case 5:
# 70 "noviBizon.y"
    { (yyval.node) = createNode(1, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "declaration_seq"); printf("Declaration_seq is correct\n"); ;}
    break;

  case 6:
# 71 "noviBizon.y"
    { (yyval.node) = createNode(1, (yyvsp[(1) - (3)].node), createNode(1, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), "declaration_seq"), ((void *)0)); printf("Declaration_seq is correct\n"); ;}
    break;

  case 7:
# 75 "noviBizon.y"
    { (yyval.node) = createNode(2, (yyvsp[(2) - (4)].node), ((void *)0), "ident_decl"); printf("Ident_decl is correct\n"); ;}
    break;

  case 8:
# 79 "noviBizon.y"
    { (yyval.node) = createNode(3, (yyvsp[(1) - (3)].node), createNode(3, ((void *)0), ((void *)0), (yyvsp[(3) - (3)].str_val)), "id_seq"); printf("Id_seq is correct\n"); ;}
    break;

  case 9:
# 80 "noviBizon.y"
    { (yyval.node) = createNode(3, ((void *)0), ((void *)0), (yyvsp[(1) - (1)].str_val)); printf("Id_seq is correct\n"); ;}
    break;

  case 10:
# 84 "noviBizon.y"
    { (yyval.node) = createNode(4, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), "command_sequence"); printf("Command_sequence is correct\n"); ;}
    break;

  case 11:
# 85 "noviBizon.y"
    { (yyval.node) = createNode(4, (yyvsp[(1) - (1)].node), ((void *)0), "command_sequence"); printf("Command_sequence is correct\n"); ;}
    break;

  case 12:
# 89 "noviBizon.y"
    { (yyval.node) = createNode(5, ((void *)0), ((void *)0), "SKIP"); printf("Command is correct\n"); ;}
    break;

  case 13:
# 90 "noviBizon.y"
    { (yyval.node) = createNode(5, createNode(5, ((void *)0), ((void *)0), (yyvsp[(1) - (4)].str_val)), (yyvsp[(3) - (4)].node), "="); printf("Command is correct\n"); ;}
    break;

  case 14:
# 91 "noviBizon.y"
    { (yyval.node) = createNode(5, (yyvsp[(3) - (10)].node), createNode(5, (yyvsp[(6) - (10)].node), (yyvsp[(8) - (10)].node), "IF"), ((void *)0)); printf("Command is correct\n"); ;}
    break;

  case 15:
# 92 "noviBizon.y"
    { (yyval.node) = createNode(5, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), "WHILE"); printf("Command is correct\n"); ;}
    break;

  case 16:
# 93 "noviBizon.y"
    { (yyval.node) = createNode(5, ((void *)0), ((void *)0), "READ"); printf("Command is correct\n"); ;}
    break;

  case 17:
# 94 "noviBizon.y"
    { (yyval.node) = createNode(5, (yyvsp[(2) - (3)].node), ((void *)0), "WRITE"); printf("Command is correct\n"); ;}
    break;

  case 18:
# 98 "noviBizon.y"
    { (yyval.node) = createNode(6, ((void *)0), ((void *)0), "INTCONST"); printf("Expression is correct\n"); ;}
    break;

  case 19:
# 99 "noviBizon.y"
    { (yyval.node) = createNode(6, ((void *)0), ((void *)0), "DOUBLECONST"); printf("Expression is correct\n"); ;}
    break;

  case 20:
# 100 "noviBizon.y"
    { (yyval.node) = createNode(6, ((void *)0), ((void *)0), "BOOLCONST"); printf("Expression is correct\n"); ;}
    break;

  case 21:
# 101 "noviBizon.y"
    { (yyval.node) = createNode(6, ((void *)0), ((void *)0), "STRCONST"); printf("Expression is correct\n"); ;}
    break;

  case 22:
# 102 "noviBizon.y"
    { (yyval.node) = createNode(6, ((void *)0), ((void *)0), "IDENTIFIER"); printf("Expression is correct\n"); ;}
    break;

  case 23:
# 103 "noviBizon.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); printf("Expression is correct\n"); ;}
    break;

  case 24:
# 104 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "+"); printf("Expression is correct\n"); ;}
    break;

  case 25:
# 105 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "-"); printf("Expression is correct\n"); ;}
    break;

  case 26:
# 106 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "*"); printf("Expression is correct\n"); ;}
    break;

  case 27:
# 107 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "/"); printf("Expression is correct\n"); ;}
    break;

  case 28:
# 108 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "%"); printf("Expression is correct\n"); ;}
    break;

  case 29:
# 109 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(2) - (2)].node), ((void *)0), "UMINUS"); printf("Expression is correct\n"); ;}
    break;

  case 30:
# 110 "noviBizon.y"
    { (yyval.node) = createNode(6, (yyvsp[(2) - (2)].node), ((void *)0), "NOT"); printf("Expression is correct\n"); ;}
    break;

  case 31:
# 114 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<"); printf("Boolean expression is correct\n"); ;}
    break;

  case 32:
# 115 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">"); printf("Boolean expression is correct\n"); ;}
    break;

  case 33:
# 116 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<="); printf("Boolean expression is correct\n"); ;}
    break;

  case 34:
# 117 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">="); printf("Boolean expression is correct\n"); ;}
    break;

  case 35:
# 118 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "=="); printf("Boolean expression is correct\n"); ;}
    break;

  case 36:
# 119 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "!="); printf("Boolean expression is correct\n"); ;}
    break;

  case 37:
# 120 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "AND"); printf("Boolean expression is correct\n"); ;}
    break;

  case 38:
# 121 "noviBizon.y"
    { (yyval.node) = createNode(7, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "OR"); printf("Boolean expression is correct\n"); ;}
    break;

  case 39:
# 125 "noviBizon.y"
    { (yyval.node) = createNode(8, ((void *)0), ((void *)0), "INT"); printf("Type is correct\n"); ;}
    break;

  case 40:
# 126 "noviBizon.y"
    { (yyval.node) = createNode(8, ((void *)0), ((void *)0), "DOUBLE"); printf("Type is correct\n"); ;}
    break;

  case 41:
# 127 "noviBizon.y"
    { (yyval.node) = createNode(8, ((void *)0), ((void *)0), "BOOL"); printf("Type is correct\n"); ;}
    break;

  case 42:
# 128 "noviBizon.y"
    { (yyval.node) = createNode(8, ((void *)0), ((void *)0), "STRING"); printf("Type is correct\n"); ;}
    break;
# 1761 "noviBizon.tab.c"
      default: break;
    }
  ;

  (yyvsp -= (yylen), yyssp -= (yylen));
  yylen = 0;
  ;

  *++yyvsp = yyval;





  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - 53] + *yyssp;
  if (0 <= yystate && yystate <= 156 && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - 53];

  goto yynewstate;





yyerrlab:

  if (!yyerrstatus)
    {
      ++yynerrs;

      yyerror ("syntax error");
# 1829 "noviBizon.tab.c"
    }



  if (yyerrstatus == 3)
    {



      if (yychar <= 0)
 {

   if (yychar == 0)
     goto yyabortlab;
 }
      else
 {
   yydestruct ("Error: discarding",
        yytoken, &yylval);
   yychar = (-2);
 }
    }



  goto yyerrlab1;





yyerrorlab:




  if ( 0)
     goto yyerrorlab;



  (yyvsp -= (yylen), yyssp -= (yylen));
  yylen = 0;
  ;
  yystate = *yyssp;
  goto yyerrlab1;





yyerrlab1:
  yyerrstatus = 3;

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != -61)
 {
   yyn += 1;
   if (0 <= yyn && yyn <= 156 && yycheck[yyn] == 1)
     {
       yyn = yytable[yyn];
       if (0 < yyn)
  break;
     }
 }


      if (yyssp == yyss)
 goto yyabortlab;


      yydestruct ("Error: popping",
    yystos[yystate], yyvsp);
      (yyvsp -= (1), yyssp -= (1));
      yystate = *yyssp;
      ;
    }

  *++yyvsp = yylval;



  ;

  yystate = yyn;
  goto yynewstate;





yyacceptlab:
  yyresult = 0;
  goto yyreturn;




yyabortlab:
  yyresult = 1;
  goto yyreturn;





yyexhaustedlab:
  yyerror ("memory exhausted");
  yyresult = 2;



yyreturn:
  if (yychar != (-2))
     yydestruct ("Cleanup: discarding lookahead",
   yytoken, &yylval);


  (yyvsp -= (yylen), yyssp -= (yylen));
  ;
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
    yystos[*yyssp], yyvsp);
      (yyvsp -= (1), yyssp -= (1));
    }

  if (yyss != yyssa)
    free (yyss);






  return (yyresult);
}
# 131 "noviBizon.y"


int main() {
    extern int yydebug;
    yydebug = 1;
    int result = yyparse();
    if (result == 0) {
        printf("Parsing successful\n");
    } else {
        printf("Parsing failed\n");
    }
    return 0;
}

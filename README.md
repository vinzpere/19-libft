# 19-libft
Coding the standard functions of the standard library of the standard C.

TESTS (no bonus)

╔══════════════════════════════════════════════════════════════════════════════╗
║                Welcome to Francinette, a 42 tester framework!                ║
╚═══════════════════════╦══════════════════════════════╦═══════════════════════╝
                        ║             libft            ║
                        ╚══════════════════════════════╝
✔ Preparing framework
✔ Executing: norminette
✔ Executing: make fclean all (no bonus)
ℹ Executing: libft-war-machine (https://github.com/y3ll0w42/libft-war-machine)
--------------------------------------------------------------------------------
|                              COMPILING LIBFT                                 |
--------------------------------------------------------------------------------
rules:
all        $(NAME)       fclean       re           clean       bonus     libft.a
ok         ok            ok           ok           ok          missing   found

FUNCTION         TESTS                RESULT
ft_isalpha       ✓✓✓✓✓✓✓              OK
ft_isdigit       ✓✓✓✓✓✓✓              OK
ft_isalnum       ✓✓✓✓✓✓✓              OK
ft_isascii       ✓✓✓✓✓✓✓✓             OK
ft_isprint       ✓✓✓✓✓✓✓              OK
ft_strlen        ✓✓✓✓✓✓               OK
ft_memset        ✓✓✓✓                 OK
ft_bzero         ✓✓                   OK
ft_memcpy        ✓✓✓                  OK
ft_memmove       ✓✓✓✓✓                OK
ft_strlcpy       ✓✓✓✓✓                OK
ft_strlcat       ✓✓✓✓✓✓✓✓✓            OK
ft_toupper       ✓✓✓✓✓✓✓              OK
ft_tolower       ✓✓✓✓✓✓✓              OK
ft_strchr        ✓✓✓✓✓✓               OK
ft_strrchr       ✓✓✓✓✓✓✓✓             OK
ft_strncmp       ✓✓✓✓✓✓✓✓✓✓✓          OK
ft_memchr        ✓✓✓✓✓✓               OK
ft_memcmp        ✓✓✓✓✓✓✓✓✓            OK
ft_strnstr       ✓✓✓✓✓✓✓✓✓✓           OK
ft_atoi          ✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓  OK
ft_calloc        ✓                    OK
ft_strdup        ✓                    OK
ft_substr        ✓✓✓✓✓                OK
ft_strjoin       ✓✓✓✓                 OK
ft_strtrim       ✓✓✓✓✓                OK
ft_split         ✓✓✓✓✓✓               OK
ft_itoa          ✓✓✓✓✓✓✓✓✓✓           OK
ft_strmapi       ✓                    OK
ft_striteri      ✓                    OK
ft_putchar_fd    ✓✓✓✓✓✓✓              OK
ft_putstr_fd     ✓✓✓✓                 OK
ft_putendl_fd    ✓✓✓✓                 OK
ft_putnbr_fd     ✓✓✓✓✓✓✓✓✓            OK

✔ Compiling tests: libftTester (https://github.com/Tripouille/libftTester)
ℹ Testing:
ft_isalpha	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK
ft_isdigit	: 1.OK 2.OK 3.OK 4.OK
ft_isalnum	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK
ft_isascii	: 1.OK 2.OK 3.OK 4.OK
ft_isprint	: 1.OK 2.OK 3.OK 4.OK
ft_strlen	: 1.OK 2.OK
ft_memset	: 1.OK 2.OK
ft_bzero	: 1.OK 2.OK 3.OK
ft_memcpy	: 1.OK 2.OK 3.OK
ft_memmove	: 1.OK 2.OK 3.OK 4.OK
ft_strlcpy	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK
ft_strlcat	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK
ft_toupper	: 1.OK 2.OK 3.OK 4.OK
ft_tolower	: 1.OK 2.OK 3.OK 4.OK
ft_strchr	: 1.OK 2.OK 3.OK 4.OK 5.OK
ft_strrchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK
ft_strncmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK
ft_memchr	: 1.OK 2.OK 3.OK 4.OK 5.OK
ft_memcmp	: 1.OK 2.OK 3.OK 4.OK 5.OK
ft_strnstr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK
ft_atoi		: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK
ft_calloc	: 1.OK 2.MOK
ft_strdup	: 1.OK 2.MOK 3.OK 4.MOK
ft_substr	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK
ft_strjoin	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK
ft_strtrim	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK
ft_split	: 1.MOK 2.OK 3.MOK 4.OK 5.MOK 6.OK 7.OK 8.OK 9.OK 10.OK 11.MOK 12.OK 13.OK 14.MOK 15.OK 16.MOK 17.OK 18.OK 19.MOK 20.OK 21.OK 22.MOK 23.OK 24.OK 25.MOK 26.OK 27.MOK 28.OK 29.MOK 30.OK 31.MOK 32.OK 33.MOK 34.OK 35.MOK 36.OK 37.MOK 38.OK 39.MOK 40.OK 41.MOK 42.OK
ft_itoa		: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK
ft_strmapi	: 1.OK 2.MOK 3.OK 4.MOK
ft_striteri	: 1.OK 2.OK 3.OK
ft_putchar_fd	: 1.OK
ft_putstr_fd	: 1.OK
ft_putendl_fd	: 1.OK
ft_putnbr_fd	: 1.OK 2.OK 3.OK 4.OK 5.OK

✔ Compiling tests: libft-unit-test (https://github.com/alelievr/libft-unit-test)
ℹ Testing:
ft_isalpha      : [OK]
ft_isdigit      : [OK]
ft_isalnum      : [OK]
ft_isascii      : [OK]
ft_isprint      : [OK]
ft_strlen       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memset       : [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_bzero        : [OK] [OK] [OK] [OK]
ft_memcpy       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memmove      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strlcpy      : [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strlcat      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_toupper      : [OK]
ft_tolower      : [OK]
ft_strchr       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strrchr      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strncmp      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memchr       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_memcmp       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strnstr      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_atoi         : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_calloc       : [OK] [OK] [OK] [OK] [OK]
ft_strdup       : [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_substr       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strjoin      : [OK] [OK] [OK] [OK] [OK]
ft_strtrim      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_split        : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_itoa         : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK]
ft_strmapi      : [OK] [OK] [OK] [OK] [OK]
ft_striteri     : [OK] [OK]
ft_putchar_fd   : [OK] [OK]
ft_putstr_fd    : [OK] [OK]
ft_putendl_fd   : [OK] [OK]
ft_putnbr_fd    : [OK] [OK] [OK] [OK] [OK]

✔ Compiling tests: fsoares (my own)
ℹ Testing:
ft_isalpha      : OK
ft_isdigit      : OK
ft_isalnum      : OK
ft_isascii      : OK
ft_isprint      : OK
ft_strlen       : OK
ft_memset       : OK
ft_bzero        : OK
ft_memcpy       : OK
ft_memmove      : OK
ft_strlcpy      : OK
ft_strlcat      : OK
ft_toupper      : OK
ft_tolower      : OK
ft_strchr       : OK
ft_strrchr      : OK
ft_strncmp      : OK
ft_memchr       : OK
ft_memcmp       : OK
ft_strnstr      : OK
ft_atoi         : OK
ft_calloc       : OK
ft_strdup       : OK
ft_substr       : OK
ft_strjoin      : OK
ft_strtrim      : OK
ft_split        : OK
ft_itoa         : OK
ft_strmapi      : OK
ft_striteri     : OK
ft_putchar_fd   : OK
ft_putstr_fd    : OK
ft_putendl_fd   : OK
ft_putnbr_fd    : OK

Want some more thorough tests? run 'francinette --strict'.

╔══════════════════════════════════════════════════════════════════════════════╗
║                 🎉🥳 All tests passed! Congratulations! 🥳🎉                 ║
╚══════════════════════════════════════════════════════════════════════════════╝

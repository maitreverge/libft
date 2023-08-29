# libft

<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/libfte.png" />
</p>

[Consider paying a visit to mcombeau for thoses awesomes 42 projects logos :) ](https://github.com/mcombeau)

![Progress](https://progress-bar.dev/83/?scale=100&width=800&color=babaca&suffix=%)

59/71

char const * = pas de modifs

char * + modifs possibles


![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)


| PART 1 (24 / 24) | Prototype        | [war_machine](https://github.com/0x050f/libft-war-machine) | [libft_tester](https://github.com/alelievr/libft-unit-test) |
|------------------|---------------------|---------|---------|
| [ft_atoi](srcs/ft_atoi.c) | `int ft_atoi(const char *str);` | ✅ | 🟠 |
| [ft_bzero](srcs/ft_bzero.c) | `void ft_bzero(void *s, size_t n);` | ✅ | ✅ |
| [ft_calloc](srcs/ft_calloc.c) | `void *ft_calloc(size_t count, size_t size);` | ✅ | ✅ |
| [ft_isalnum](srcs/ft_isalnum.c) | `int ft_isalnum(int c);` | ✅ | ✅ |
| [ft_isalpha](srcs/ft_isalpha.c) | `int ft_isalpha(int c);` | ✅ | ✅ |
| [ft_isascii](srcs/ft_isascii.c) | `int ft_isascii(int c);` | ✅ | ✅ |
| [ft_isdigit](srcs/ft_isdigit.c) | `int ft_isdigit(int c);` | ✅ | ✅ |
| [ft_isprint](srcs/ft_isprint.c) | `int ft_isprint(int c);` | ✅ | ✅ |
| [ft_memccpy](srcs/ft_memccpy.c) | `void *ft_memccpy(void *dst, const void *src, int c, size_t n);` | ✅ | ✅ |
| [ft_memchr](srcs/ft_memchr.c) | `void *ft_memchr(const void *s, int c, size_t n);` | ✅ | ✅ |
| [ft_memcmp](srcs/ft_memcmp.c) | `int ft_memcmp(const void *s1, const void *s2, size_t n);` | ✅ | ✅ |
| [ft_memcpy](srcs/ft_memcpy.c) | `void *ft_memcpy(void *dest, const void *src, size_t n);` | ✅ | ✅ |
| [ft_memmove](srcs/ft_memmove.c) | `void *ft_memmove(void *dst, const void *src, size_t len);` | ✅ | ✅ |
| [ft_memset](srcs/ft_memset.c) | `void *ft_memset(void *b, int c, size_t len);` | ✅ | ✅ |
| [ft_strchr](srcs/ft_strchr.c) | `char *ft_strchr(const char *s, int c);` | ✅ | ✅ |
| [ft_strdup](srcs/ft_strdup.c) | `char *ft_strdup(const char *s1);` | ✅ | ✅ |
| [ft_strlcat](srcs/ft_strlcat.c) | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` | ✅ | ❌ |
| [ft_strlcpy](srcs/ft_strlcpy.c) | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);` | ✅ | ✅ |
| [ft_strlen](srcs/ft_strlen.c) | `size_t ft_strlen(const char *s);` | ✅ | ✅ |
| [ft_strncmp](srcs/ft_strncmp.c) | `int ft_strncmp(const char *s1, const char *s2, size_t n);` | ✅ | ✅ |
| [ft_strnstr](srcs/ft_strnstr.c) | `char *ft_strnstr(const char *haystack, const char *needle, size_t len);` | ✅ | ✅ |
| [ft_strrchr](srcs/ft_strrchr.c) | `char *ft_strrchr(const char *s, int c);` | ✅ | ✅ |
| [ft_tolower](srcs/ft_tolower.c) | `int ft_tolower(int c);` | ✅ | ✅ |
| [ft_toupper](srcs/ft_toupper.c) | `int ft_toupper(int c);` | ✅ | ✅ |



![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)


| PART 2 (8 / 10)    | Prototype        | [war_machine](https://github.com/0x050f/libft-war-machine) | [libft_tester](https://github.com/alelievr/libft-unit-test) |
|------------------|---------------------|---------|---------|
| [ft_itoa](srcs/ft_itoa.c) | `char *ft_itoa(int n);` | ✅ | ❌ |
| [ft_putchar_fd](srcs/ft_putchar_fd.c) | `void ft_putchar_fd(char c, int fd);` | ✅ | ✅ |
| [ft_putendl_fd](srcs/ft_putendl_fd.c) | `void ft_putendl_fd(char *s, int fd);` | ✅ | ✅ |
| [ft_putnbr_fd](srcs/ft_putnbr_fd.c) | `void ft_putnbr_fd(int n, int fd);` | ✅ | ✅ |
| [ft_putstr_fd](srcs/ft_putstr_fd.c) | `void ft_putstr_fd(char *s, int fd);` | ✅ | ✅ |
| [ft_split](srcs/ft_split.c) | `char **ft_split(char const *s, char c);` | ✅ | ✅ |
| [ft_strjoin](srcs/ft_strjoin.c) | `char *ft_strjoin(char const *s1, char const *s2);` | ✅ | ✅ |
| [ft_strmapi](srcs/ft_strmapi.c) | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | ❌ | ❌ |
| [ft_strtrim](srcs/ft_strtrim.c) | `char *ft_strtrim(char const *s1, char const *set);` | ❌ | ❌ |
| [ft_substr](srcs/ft_substr.c) | `char *ft_substr(char const *s, unsigned int start, size_t len);` | ✅ | ✅ |



![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)


| Bonus Functions (2 / 9)    | Prototype        | [war_machine](https://github.com/0x050f/libft-war-machine) | [libft_tester](https://github.com/alelievr/libft-unit-test) |
|------------------|---------------------|---------|---------|
| [ft_lstadd_back](srcs/ft_lstadd_back.c) | | ❌ | ❌ |
| [ft_lstadd_front](srcs/ft_lstadd_front.c) | | ❌ | ❌ |
| [ft_lstclear](srcs/ft_lstclear.c) | | ❌ | ❌ |
| [ft_lstdelone](srcs/ft_lstdelone.c) | | ❌ | ❌ |
| [ft_lstiter](srcs/ft_lstiter.c) | | ❌ | ❌ |
| [ft_lstlast](srcs/ft_lstlast.c) | `t_list	*ft_lstlast(t_list *lst)` | ✅ | ✅ |
| [ft_lstmap](srcs/ft_lstmap.c) | | ❌ | ❌ |
| [ft_lstnew](srcs/ft_lstnew.c) | | ❌ | ❌ |
| [ft_lstsize](srcs/ft_lstsize.c) | `int	ft_lstsize(t_list *lst)` | ✅ | ✅ |



![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

From now, some of my custom functions might need further testing


| My Functions (25 / 28)    | Prototype        | My tests   |
|------------------|---------------------|---------|
| [ft_abs](srcs/ft_abs.c)  | `int ft_abs(int c);` | ❌ |
| [ft_countwords](srcs/ft_countwords.c)  | `size_t ft_countwords(char const *str, char c)` | ❌ |
| [ft_intlen](srcs/ft_intlen.c)  | `int ft_intlen(int n);` | ❌ |
| [ft_isblank](srcs/ft_isblank.c)  | `int isblank(int c);` | ❌ |
| [ft_iscntrl](srcs/ft_iscntrl.c)  | `int ft_iscntrl(int c);` | ❌ |
| [ft_isgraph](srcs/ft_isgraph.c)  | `int ft_isgraph(int c)` | ❌ |
| [ft_islower](srcs/ft_islower.c)  | `int ft_islower(int c);` | ❌ |
| [ft_isspace](srcs/ft_isspace.c)  | `int ft_isspace(int c);` | ❌ |
| [ft_isupper](srcs/ft_isupper.c)  | `int ft_isupper(int c);` | ❌ |
| [ft_isxdigit](srcs/ft_isxdigit.c)  | `int ft_isxdigit(int c);` | ❌ |
| [ft_newstr](srcs/ft_newstr.c)  | `char *ft_newstr(size_t size);` | ❌ |
| [ft_putchar](srcs/ft_putchar.c)  | `void ft_putchar(char c);` | ❌ |
| [ft_power](srcs/ft_power.c)  | `long ft_power(int nb, int power);` | ❌ |
| [ft_str_is_alpha](srcs/ft_str_is_alpha.c)  | `int ft_str_is_alpha(char *str);` | ❌ |
| [ft_str_is_lowercase](srcs/ft_str_is_lowercase.c)  | `int ft_str_is_lowercase(char *str);` | ❌ |
| [ft_str_is_digit](srcs/ft_str_is_digit.c)  | `int ft_str_is_digit(char *str);` | ❌ |
| [ft_str_is_printable](srcs/ft_str_is_printable.c)  | `int ft_str_is_printable(char *str);` | ❌ |
| [ft_str_is_unique_chars](srcs/ft_str_is_unique_chars.c)  | `int ft_str_is_unique_chars(char *str);` | ❌ |
| [ft_str_is_uppercase](srcs/ft_str_is_uppercase.c)  | `int ft_str_is_uppercase(char *str);` | ❌ |
| [ft_strcapitalize](srcs/ft_strcapitalize.c)  | `char *ft_strcapitalize(char *str)` | ❌ |
| [ft_strcasecmp](srcs/ft_strcasecmp.c)  | `int ft_strcasecmp(char *s1, char *s2)` | ✅  |
| [ft_strcasestr](srcs/ft_strcasestr.c)  | | ❌ |
| [ft_strlowcase](srcs/ft_strlowcase.c)  | `char *ft_strlowcase(char *str);` | ❌ |
| [ft_strncasecmp](srcs/ft_strncasecmp.c)  | | ❌ |
| [ft_strncpy](srcs/ft_strncpy.c)  | `char *ft_strncpy(char *dest, char const *src, size_t n);` | ❌ |
| [ft_strndup](srcs/ft_strndup.c)  | `char *ft_strndup(const char *s1, size_t n);` | ❌ |
| [ft_strtok](srcs/ft_strtok.c)  | | ❌ |
| [ft_strcmp](srcs/ft_strcmp.c)  | `int ft_strcmp(char *s1, char *s2)` | ❌ |


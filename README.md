<p align="center">
  <img src="img/libft.png" width="70%"/> 
</p>

## 🚀 SYNOPSIS

The `libft` project is the very first project at 42 school.

It is a foundational coding endeavor where students are tasked with recreating a library of standard C functions from scratch.

This project serves as a crucial introduction to programming concepts and the C language, requiring students to implement fundamental functions such as string manipulation, memory allocation, and basic I/O operations.

Successfully completing the libft project not only demonstrates mastery of these fundamental functions, but also lays the groundwork for subsequent challenges in the 42 curriculum.

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

## 🗃️ FUNCTIONS LIST


| PART 1 (24 / 24) | Prototype        |
|------------------|---------------------|
| [ft_atoi](ft_atoi.c) | `int ft_atoi(const char *str);` |
| [ft_bzero](ft_bzero.c) | `void ft_bzero(void *s, size_t n);` |
| [ft_calloc](ft_calloc.c) | `void *ft_calloc(size_t count, size_t size);` |
| [ft_isalnum](ft_isalnum.c) | `int ft_isalnum(int c);` |
| [ft_isalpha](ft_isalpha.c) | `int ft_isalpha(int c);` |
| [ft_isascii](ft_isascii.c) | `int ft_isascii(int c);` |
| [ft_isdigit](ft_isdigit.c) | `int ft_isdigit(int c);` |
| [ft_isprint](ft_isprint.c) | `int ft_isprint(int c);` |
| [ft_memccpy](ft_memccpy.c) | `void *ft_memccpy(void *dst, const void *src, int c, size_t n);` |
| [ft_memchr](ft_memchr.c) | `void *ft_memchr(const void *s, int c, size_t n);` |
| [ft_memcmp](ft_memcmp.c) | `int ft_memcmp(const void *s1, const void *s2, size_t n);` |
| [ft_memcpy](ft_memcpy.c) | `void *ft_memcpy(void *dest, const void *src, size_t n);` |
| [ft_memmove](ft_memmove.c) | `void *ft_memmove(void *dst, const void *src, size_t len);` |
| [ft_memset](ft_memset.c) | `void *ft_memset(void *b, int c, size_t len);` |
| [ft_strchr](ft_strchr.c) | `char *ft_strchr(const char *s, int c);` |
| [ft_strdup](ft_strdup.c) | `char *ft_strdup(const char *s1);` |
| [ft_strlcat](ft_strlcat.c) | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` |
| [ft_strlcpy](ft_strlcpy.c) | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);` |
| [ft_strlen](ft_strlen.c) | `size_t ft_strlen(const char *s);` |
| [ft_strncmp](ft_strncmp.c) | `int ft_strncmp(const char *s1, const char *s2, size_t n);` |
| [ft_strnstr](ft_strnstr.c) | `char *ft_strnstr(const char *haystack, const char *needle, size_t len);` |
| [ft_strrchr](ft_strrchr.c) | `char *ft_strrchr(const char *s, int c);` |
| [ft_tolower](ft_tolower.c) | `int ft_tolower(int c);` |
| [ft_toupper](ft_toupper.c) | `int ft_toupper(int c);` |


| PART 2 (11 / 11)    | Prototype        | 
|------------------|---------------------|
| [ft_itoa](ft_itoa.c) | `char *ft_itoa(int n);` |
| [ft_putchar_fd](ft_putchar_fd.c) | `void ft_putchar_fd(char c, int fd);` |
| [ft_putendl_fd](ft_putendl_fd.c) | `void ft_putendl_fd(char *s, int fd);` |
| [ft_putnbr_fd](ft_putnbr_fd.c) | `void ft_putnbr_fd(int n, int fd);` |
| [ft_putstr_fd](ft_putstr_fd.c) | `void ft_putstr_fd(char *s, int fd);` |
| [ft_split](ft_split.c) | `char **ft_split(char const *s, char c);` |
| [ft_strjoin](ft_strjoin.c) | `char *ft_strjoin(char const *s1, char const *s2);` |
| [ft_strmapi](ft_strmapi.c) | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` |
| [ft_strtrim](ft_strtrim.c) | `char *ft_strtrim(char const *s1, char const *set);` |
| [ft_substr](ft_substr.c) | `char *ft_substr(char const *s, unsigned int start, size_t len);` |
| [ft_striteri](ft_striteri.c) | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` |


| Bonus Functions (9 / 9)    | Prototype        |
|------------------|---------------------|
| [ft_lstadd_back](ft_lstadd_back_bonus.c) | `void	ft_lstadd_back(t_list **lst, t_list *new);` |
| [ft_lstadd_front](ft_lstadd_front_bonus.c) | `void	ft_lstadd_front(t_list **lst, t_list *new);` |
| [ft_lstclear](ft_lstclear_bonus.c) | `void	ft_lstclear(t_list **lst, void (*del)(void *));` |
| [ft_lstdelone](ft_lstdelone_bonus.c) | `void	ft_lstdelone(t_list *lst, void (*del)(void *));` |
| [ft_lstiter](ft_lstiter_bonus.c) | `void	ft_lstiter(t_list *lst, void (*f)(void *));`|
| [ft_lstlast](ft_lstlast_bonus.c) | `t_list	*ft_lstlast(t_list *lst);` |
| [ft_lstmap](ft_lstmap_bonus.c) | `t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` |
| [ft_lstnew](ft_lstnew_bonus.c) | `t_list	*ft_lstnew(void *content)` | 
| [ft_lstsize](ft_lstsize_bonus.c) | `int	ft_lstsize(t_list *lst);` |

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

## ⚙️ USAGE

### Step 1 :

Run in your shell environment :

```bash
git clone https://github.com/maitreverge/libft.git libft
```

### Step 2 :

Enter into the cloned repo :
```bash
cd libft
```

and run :

```bash
make all bonus
```

You'll end up with a file called `libft.a`, which is a static library.

### Step 3 :

Now you can import this `libft.a` and the `libft.h` files at the root of your own project, and use the functions linked to it.

Do do so, let's write an simple program called `test.c` :

```c
// Includes header from the libft
#include "libft.h"

int main(void)
{
    // ft_putstr_fd takes a string and a file descriptor as an input
    ft_putstr_fd("Hello World !\n", 1);

    return (0);
}
```

### Step 4 :

Once the three files `libft.a` `libft.h` and `test.c` are here, run :

```bash
gcc libft.a test.c -o program && ./program
```
This command will compile your `test.c` and link it to the static library `libft.a`.


We end up with a file called `program`, once executed gives :
```bash
Hello, World !
```


## 🤝 CONTRIBUTION

Contributions are open, make a pull request or open an issue 🚀

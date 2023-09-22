# Libft
The "libft" project at 42 School involves creating a C library with general-purpose functions. This library will serve as a foundation for future projects at 42 Madrid, teaching students essential skills in C programming and custom library creation. Once completed, it will be a key tool for students in their future projects.

## Parte 1 - Functions of libc
It consists of remaking the functions of **libc** with the same prototypes and implementing the same behaviors as the original functions.
### ialpha
```int	ft_isalpha(int c);```  
It is used to determine if a character is a letter of the alphabet, regardless of whether it's uppercase or lowercase.  If the character is alphabetic, it returns 1; otherwise, returns 0.
### isdigit
```int	ft_isdigit(int c);```  
The **isdigit** function in C is employed to check whether a character is a numeric digit, and it returns 1 if the character is a digit and 0 otherwise.
### isalnum
```int	ft_isalnum(int c);```  
The **isalnum** function in C is utilized to ascertain if a character is either a letter of the alphabet (uppercase or lowercase) or a numeric digit. It returns 1 if the character is alphanumeric and 0 if it's not.
### isascii
```int	ft_isascii(int c);```  
The **isascii** function in C is employed to check if a character is within the ASCII character set, returning 1 if the character is an ASCII character and 0 if it's not.
### isprint
```int	ft_isprint(int c);```  
The **isprint** function in C is used to determine whether a character is a printable character in the ASCII character set. If the character is printable, it returns 1; otherwise, it returns 0.
### strlen
```size_t	ft_strlen(const char *s);```  
The **strlen** function in C is utilized to calculate the length of a null-terminated string, returning the count of characters in the string excluding the null terminator.
### memset
```void	*ft_memset(void *b, int c, size_t n);```  
The  **memset**  function  fills  the  first  n  bytes of the memory area pointed to by b with the constant byte c. The **memset** function returns a pointer to the memory area b.
### bzero
```void	ft_bzero(char *s, size_t n);```  
The  **bzero**  function  erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes  containing '\0') to that area.
### memcpy
```void	*ft_memcpy(void *dst, const void *src, size_t n);```  
The  **memcpy**  function  copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use **memmove**  if  the memory areas do overlap. The **memcpy** function returns a pointer to dest.
### memmove
```void	*ft_memmove(void *dest, const void *src, size_t n);```  
The  **memmove**  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the  bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from  the  temporary array to dest. The **memmove** function returns a pointer to dest.
### strlcpy
```size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);```  
The **strlcpy** function copies characters from a source string to a destination buffer, making sure not to overflow the destination buffer. It terminates the destination buffer with a null character and takes into account the specified buffer size. 
### strlcat
```size_t	ft_strlcat(char *dst, const char *src, size_t size);```  
The **strlcat** is a C function used for safely concatenating strings. It appends characters from a source string to the end of a destination string, ensuring that the destination string does not overflow. Similar to **strlcpy**, it takes into account the size of the destination buffer and always null-terminates the result. This function is useful for secure string concatenation in C to prevent buffer overflows.
### toupper
```int	ft_toupper(int c);```  
The toupper function in C is used to convert a given character to its uppercase equivalent if it is a lowercase letter. If the input character is already in uppercase or not a letter, it remains unchanged.
### tolower
```int	ft_tolower(int c);```  
The **tolower** function in C is used to convert a given character to its lowercase equivalent if it is an uppercase letter. If the input character is already in lowercase or not a letter, it remains unchanged.
### strchr
```char	*ft_strchr(const char *s, int c);```  
The **strchr** function in C is used to find the first occurrence of a specified character within a given string. It searches the string from the beginning and returns a pointer to the first occurrence of the character if found, or a null pointer if the character is not present in the string.
### strrchr
```char	*ft_strrchr(const char *s, int c);```  
The **strrchr** function in C is used to find the last occurrence of a specified character within a given string. It searches the string from the end toward the beginning and returns a pointer to the last occurrence of the character if found, or a null pointer if the character is not present in the string.
### strncmp
```int	ft_strncmp(const char *s1, const char *s2, size_t n);```
### memchr
```void	*ft_memchr(const void *s, int c, size_t n);```
### memcmp
```int	ft_memcmp(const void *s1, const void *s2, size_t n);```
### strnstr
```char	*ft_strnstr(const char *big, const char *little, size_t len);```
### atoi
```int	ft_atoi(const char *nptr);```
### calloc
```void	*ft_calloc(size_t nmemb, size_t size);```
### strdup
```char	*ft_strdup(const char *s);```

## Parte 2 - Additional functions
### ft_substr
```char	*ft_substr(char const *s, unsigned int start, size_t len);```
### ft_strjoin
```char	*ft_strjoin(char const *s1, char const *s2);```
### ft_strtrim
```char	*ft_strtrim(char const *s1, char const *set);```
### ft_split
```char	**ft_split(char const *s, char c);```
### ft_itoa
```char	*ft_itoa(int n);```
### ft_strmapi
```char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));```
### striteri
```void    ft_striteri(char *s, void (*f)(unsigned int, char*));```
### ft_putchar_fd
```void	ft_putchar_fd(char c, int fd);```
### ft_putstr_fd
```void	ft_putstr_fd(char *s, int fd);```
### ft_putendl_fd
```void	ft_putendl_fd(char *s, int fd);```
### ft_putnbr_fd
```void	ft_putnbr_fd(int n, int fd);```
## Parte bonus - List manipulation
```
typedef struct	s_list
{
	void		*content;
 	struct s_list	*next;
}			t_list;
```
### ft_lstnew
```t_list	*ft_lstnew(void *content);```
### ft_lstadd_front
```void	ft_lstadd_front(t_list **lst, t_list *new);```
### ft_lstsize
```int	ft_lstsize(t_list *lst);```
### ft_lstlast
```t_list	*ft_lstlast(t_list *lst);```
### ft_lstadd_back
```void	ft_lstadd_back(t_list **lst, t_list *new);```
### ft_lstdelone
```void	ft_lstdelone(t_list *lst, void (*del)(void *));```
### ft_lstclear
```void	ft_lstclear(t_list **lst, void (*del)(void *));```
### ft_lstiter
```void	ft_lstiter(t_list *lst, void (*f)(void *));```
### ft_lstmap
```t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));```

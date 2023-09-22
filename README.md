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
The **strncmp** function is used to compare two strings character by character up to a specified maximum number of characters or until a terminating null character is encountered in either string, whichever comes first. It returns 0 if the specified portions of the two strings are identical, a negative value if the first string is lexicographically less than the second, and a positive value if the first string is lexicographically greater.
### memchr
```void	*ft_memchr(const void *s, int c, size_t n);```  
The **memchr** function is used to search for the first occurrence of a specified byte value within a given block of memory. It scans the memory block and returns a pointer to the first occurrence of the specified byte if found, or a null pointer if the byte is not present in the memory block.
### memcmp
```int	ft_memcmp(const void *s1, const void *s2, size_t n);```  
The **memcmp** function in C is used to compare two blocks of memory byte by byte. It takes two memory pointers and a specified number of bytes to compare. It returns an integer value indicating the result of the comparison. If the two blocks of memory are identical, it returns 0. If the first differing byte in the first block is less than the corresponding byte in the second block, it returns a negative value. If the first differing byte in the first block is greater, it returns a positive value. 
### strnstr
```char	*ft_strnstr(const char *big, const char *little, size_t len);```  
The **strnstr** function is used to locate the first occurrence of a substring within a given string, similar to strstr. The key difference is that strnstr also takes a maximum length parameter, limiting the search within a specified number of characters from the beginning of the string. If the substring is found within the specified length, it returns a pointer to the first occurrence of the substring; otherwise, it returns a null pointer.
### atoi
```int	ft_atoi(const char *nptr);```  
The **atoi** function is used to convert a string containing numeric characters (integer representation) into an integer value. It takes a null-terminated character string as input, processes it from left to right, and converts the characters into an integer until it encounters a non-numeric character or the end of the string. The resulting integer value is returned. If the input string does not begin with a valid numeric representation, or if it encounters non-numeric characters before any valid numeric characters, atoi returns 0.
### calloc
```void	*ft_calloc(size_t nmemb, size_t size);```  
The **calloc** function is used for dynamic memory allocation, specifically for allocating and initializing a block of memory for an array of elements. It takes two arguments: the number of elements to allocate memory for and the size (in bytes) of each element. It allocates a contiguous block of memory that can hold the specified number of elements, and it initializes all the bytes to zero. The function returns a pointer to the first byte of the allocated memory block. If memory allocation fails, it returns a null pointer. **calloc** is often used when you need to allocate memory for an array or a data structure and ensure that all its elements are initially set to zero. After using the allocated memory, it should be freed using the **free** function to avoid memory leaks.
### strdup
```char	*ft_strdup(const char *s);```  
The **strdup** function is used to create a new dynamically allocated string by duplicating an existing null-terminated string. The function takes a string as its argument, allocates memory to hold a copy of the string (including the null-terminator), copies the original string into the newly allocated memory, and returns a pointer to the duplicated string. The newly created string is essentially a deep copy of the input string.  

## Parte 2 - Additional functions
### ft_substr
```char	*ft_substr(char const *s, unsigned int start, size_t len);```  
The **ft_substr** function allocates memory using malloc and returns a substring of the string s. The substring begins at the index specified by start and has a maximum length of len. The function returns the resulting substring or NULL if memory allocation fails.
### ft_strjoin
```char	*ft_strjoin(char const *s1, char const *s2);```  
The **ft_strjoin** function allocates memory using malloc and returns a new string, formed by the concatenation of 's1' and 's2'. The function returns the new string or NuLL if memory allocation fails.
### ft_strtrim
```char	*ft_strtrim(char const *s1, char const *set);```  
The **ft_strtrim** functiion removes all characters from the string 'set' from the beginning and from the end of 's1', until it finds a character not belonging to 'set'. The resulting string is returned with memory allocated using malloc. It returns the trimmed string, or NULL if memory allocation fails.
### ft_split
```char	**ft_split(char const *s, char c);```  
The **ft_split** function takes a string s and a delimiter character c as input and splits the string into an array of substrings based on the delimiter. It returns a pointer to an array of strings, where each element of the array represents a separate substring extracted from s using c as the separator. 
### ft_itoa
```char	*ft_itoa(int n);```  
The **ft_itoa** function takes an integer n as input and converts it into a null-terminated string (char array) representing the integer in base 10 (decimal). It dynamically allocates memory for the resulting string using malloc and returns a pointer to this newly created string.
### ft_strmapi
```char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));```  
The **ft_strmapi** function takes two parameters: a string s and a function pointer f. Its purpose is to apply the function f to each character of the string s, with f taking two arguments: an unsigned integer representing the index of the character in the string and the character itself. The function then creates a new string with the modified characters resulting from the application of f and returns a pointer to this newly created string. 
### striteri
```void    ft_striteri(char *s, void (*f)(unsigned int, char*));```  
The **ft_striteri** function takes two parameters: a string s and a function pointer f. Its purpose is to apply the function f to each character in the string s while also passing the index (position) of the character as the first argument to f. The function f is defined to take two parameters: an unsigned integer representing the index and a pointer to the character.
### ft_putchar_fd
```void	ft_putchar_fd(char c, int fd);```  
The **ft_putchar_fd** function takes two parameters: a character c and an integer file descriptor fd. Its purpose is to write the character c to the output stream associated with the given file descriptor fd.
### ft_putstr_fd
```void	ft_putstr_fd(char *s, int fd);```  
The ft_putstr_fd function takes two parameters: a string s and an integer file descriptor fd. Its purpose is to write the characters from the string s to the output stream associated with the given file descriptor fd.
### ft_putendl_fd
```void	ft_putendl_fd(char *s, int fd);```  
The **ft_putendl_fd** function takes two parameters: a string s and an integer file descriptor fd. Its purpose is to write the characters from the string s to the output stream associated with the given file descriptor fd, followed by a newline character ('\n'). 
### ft_putnbr_fd
```void	ft_putnbr_fd(int n, int fd);```  
The ft_putnbr_fd function is a custom C function that takes two parameters: an integer n and an integer file descriptor fd. Its purpose is to write the integer value n to the output stream associated with the given file descriptor fd.  

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

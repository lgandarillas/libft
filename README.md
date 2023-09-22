# Libft - Tu primera librería
El proyecto "libft" de 42 School implica crear una biblioteca en C con funciones de propósito general. Esta biblioteca servirá como base para futuros proyectos en 42 Madrid, enseñando a los estudiantes habilidades esenciales en programación en C y la creación de bibliotecas personalizadas. Una vez completada, será una herramienta clave para los estudiantes en sus proyectos futuros.

## Parte 1 - Funciones de libc
Consiste en rehacer las funciones de **libc** con los mismos prototipos y que implementen los mismos comportamientos que las funciones originales.
### ialpha
```int	ft_isalpha(int c);```
### isdigit
```int	ft_isdigit(int c);```
### isalnum
```int	ft_isalnum(int c);```
### isascii
```int	ft_isascii(int c);```
### isprint
```int	ft_isprint(int c);```
### strlen
```size_t	ft_strlen(const char *s);```
### memset
```void	*ft_memset(void *b, int c, size_t n);```
### bzero
```void	ft_bzero(char *s, size_t n);```
### memcpy
```void	*ft_memcpy(void *dst, const void *src, size_t n);```
### memmove
```void	*ft_memmove(void *dest, const void *src, size_t n);```
### strlcpy
```size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);```
### strlcat
```size_t	ft_strlcat(char *dst, const char *src, size_t size);```
### toupper
```int	ft_toupper(int c);```
### tolower
```int	ft_tolower(int c);```
### strchr
```char	*ft_strchr(const char *s, int c);```
### strrchr
```char	*ft_strrchr(const char *s, int c);```
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

## Parte 2 - Funciones adicionales
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
## Parte bonus - Manipulación de listas
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

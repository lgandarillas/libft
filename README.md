# Libft - Tu primera librería
El proyecto "libft" de 42 School implica crear una biblioteca en C con funciones de propósito general. Esta biblioteca servirá como base para futuros proyectos en 42 Madrid, enseñando a los estudiantes habilidades esenciales en programación en C y la creación de bibliotecas personalizadas. Una vez completada, será una herramienta clave para los estudiantes en sus proyectos futuros.

## Parte 1 - Funciones de libc
Consiste en rehacer las funciones de **libc** con los mismos prototipos y que implementen los mismos comportamientos que las funciones originales.
### isdigit
### isdigit
### isalnum
### isascii
### isprint
### strlen
### memset
### bzero
### memcpy
### memmove
### strlcpy
### strlcat
### toupper
### tolower
### strchr
### strrchr
### strncmp
### memchr
### memcmp
### strnstr
### atoi
### calloc
### strdup

## Parte 2 - Funciones adicionales
### ft_substr
### ft_strjoin
### ft_strtrim
### ft_split
### ft_itoa
### ft_strmapi
### striteri
### ft_putchar_fd
### ft_putstr_fd
### ft_putendl_fd
### ft_putnbr_fd

## Parte bonus - Manipulación de listas
typedef struct	s_list
{
	void			*content;
 	struct s_list	*next;
}					t_list;
### ft_lstnew
### ft_lstadd_front
### ft_lstsize
### ft_lstlast
### ft_lstadd_back
### ft_lstdelone
### ft_lstclear
### ft_lstiter
### ft_lstmap

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>

typedef struct s_list
{
    void			*content;
    struct s_list	*next;
}	t_list;

int ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
/* La función memset (que significa "memory set") se utiliza en el lenguaje de
 programación C y en C++ para establecer un valor específico en una parte de 
la memoria, es decir, para llenar un bloque de memoria con un valor dado.
La función memset se utiliza para llenar un bloque de memoria con un valor específico. 
En su forma más común, se usa para establecer una serie de bytes en cero.
void ft_bzero(void *s, size_t n): Esta es la declaración de la función ft_bzero. Toma dos parámetros:

void *s: Un puntero void que apunta al inicio del bloque de memoria que se llenará con ceros. void se utiliza 
aquí para que la función pueda funcionar con cualquier tipo de datos.

size_t n: El número de bytes que se llenarán con ceros, es decir, el tamaño del bloque de memoria.

size_t i; char *str;: Aquí se declaran dos variables locales:

size_t i: Una variable de tipo size_t que se utilizará como un contador en el bucle.

char *str: Un puntero a char que se inicializa con el valor del puntero void *s. 

Esto se hace para permitir la manipulación de los bytes individuales en el bloque de memoria.

str = s;: Esta línea asigna el valor del puntero s a la variable str, lo que permite que str se utilice 
para acceder y modificar el bloque de memoria al que apunta s.

i = 0;: Inicializa la variable i a cero. Esto prepara la variable para el bucle while que se utilizará 
para llenar el bloque de memoria con ceros.

while (i < n): Esto inicia un bucle while que se ejecutará mientras i sea menor que n, es decir, 
mientras no se haya llenado todo el bloque de memoria con ceros.

str[i] = 0;: En cada iteración del bucle, se asigna el valor cero (0) al byte en la posición i del bloque 
de memoria al que apunta str. Esto efectivamente llena ese byte con cero.

i++;: Incrementa la variable i en uno para pasar al siguiente byte en el bloque de memoria.

En resumen, esta función ft_bzero toma un puntero a un bloque de memoria y un tamaño, y 
llena ese bloque de memoria con ceros byte a byte hasta que se haya llenado el número de bytes especificado por n. 
Es una función útil para inicializar la memoria a cero, 
por ejemplo, antes de usarla para almacenar datos importantes.

*/




/* La función atoi() convierte la porción inicial de la cadena apuntada       */
/* por str a representación int. En resumen,                                  */
/* esta función ftatoi toma una cadena como entrada y la convierte en un valor*/
/* entero, teniendo en cuenta espacios en blanco y el signo del número.       */
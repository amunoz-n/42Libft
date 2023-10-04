/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-n <amunoz-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:28:04 by amunoz-n          #+#    #+#             */
/*   Updated: 2023/10/04 15:43:20 by amunoz-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función strnstr es una función en el lenguaje de programación C que se utiliza para buscar una subcadena dentro de una cadena (string) 
de manera limitada por una longitud dada. 
Su funcionamiento es similar a strstr, pero strnstr agrega un límite a la cantidad de caracteres que se buscarán en la cadena fuente.

-haystack   es un puntero a la cadena en la que deseas buscar la subcadena.
-needle     es un puntero a la subcadena que deseas encontrar en haystack.
-len        es un valor de tipo size_t que especifica la cantidad máxima de caracteres que se buscarán en haystack. Esto evita que la función 
            busque más allá de una cierta longitud.
            
La función "strnstr" devuelve un puntero al primer carácter de la primera aparición de la subcadena "needle" en "haystack", 
o devuelve "NULL" si la subcadena no se encuentra dentro de los primeros "len" caracteres de "haystack".

#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "La programación es genial";
    const char *needle = "programación";
    size_t len = 20;

    char *resultado = strnstr(haystack, needle, len);

    if (resultado) {
        printf("Subcadena encontrada: %s\n", resultado);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    return 0;
}
En este ejemplo, estamos buscando la subcadena "programación" dentro de la cadena "La programación es genial", 
pero estamos limitando la búsqueda a los primeros 20 caracteres. 
Si la subcadena se encuentra dentro de esos primeros 20 caracteres, se imprimirá el resultado; 
de lo contrario, se imprimirá que la subcadena no se encontró.

*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t  i;
	size_t  j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
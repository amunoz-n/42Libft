/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-n <amunoz-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:37:14 by amunoz-n          #+#    #+#             */
/*   Updated: 2023/10/04 19:47:51 by amunoz-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	index = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char c))
			return (((unsigned char)s) + i);
		i++;
	}
	return (0);
}

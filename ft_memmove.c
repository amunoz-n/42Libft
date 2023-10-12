/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-n <amunoz-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:49:15 by amunoz-n          #+#    #+#             */
/*   Updated: 2023/10/05 15:40:47 by amunoz-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst[len] = (unsigned char *)src[len]);
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst[i] = (unsigned char *)src[i]);
			i++;
		}
	}
	return (dst);
}

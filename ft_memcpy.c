/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:00:09 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/04 15:00:13 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;
	size_t				i;

	i = 0;
	cdst = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	int *ary1 = {1, 2, 3, 4};
	int ary2[4];

	ft_memcpy(ary2, ary1, sizeof(int) * 4);
	printf("%s\n", ary2);
	return (0);
}*/

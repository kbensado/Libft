/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbensado <kbensado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 15:02:57 by kbensado          #+#    #+#             */
/*   Updated: 2016/11/12 02:36:33 by kbensado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src == dst || src > dst)
		ft_memcpy(dst, src, n);
	else
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (dst);
}

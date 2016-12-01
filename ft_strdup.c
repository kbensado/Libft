/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbensado <kbensado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 12:19:18 by kbensado          #+#    #+#             */
/*   Updated: 2016/11/12 02:09:45 by kbensado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*dst;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	if (!(dst = ft_strnew(len)))
		return (NULL);
	ft_bzero(dst, len);
	while (i < len)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

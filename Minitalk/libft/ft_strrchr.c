/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:57:08 by mbardett          #+#    #+#             */
/*   Updated: 2022/02/12 17:08:03 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*(unsigned char *)s == (unsigned char) c)
			ptr = (unsigned char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *) ptr);
}

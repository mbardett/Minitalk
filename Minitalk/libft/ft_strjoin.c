/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:00:15 by mbardett          #+#    #+#             */
/*   Updated: 2022/02/04 13:00:18 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*nstr;
	int		length;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	nstr = (char *)malloc(sizeof(char) * (length + 1));
	if (!nstr)
		return (NULL);
	while (*s1)
		nstr[i++] = *s1++;
	while (*s2)
		nstr[i++] = *s2++;
	nstr[i] = '\0';
	return (nstr);
}

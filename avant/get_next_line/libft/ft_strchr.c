/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltran <ltran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 23:51:35 by ltran             #+#    #+#             */
/*   Updated: 2017/02/15 19:07:33 by ltran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*b;

	i = 0;
	b = (char*)s;
	while (b[i] != c && b[i] != '\0')
		i++;
	if (b[i] == c)
		return (&b[i]);
	return (NULL);
}

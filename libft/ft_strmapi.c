/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:54:27 by syusof            #+#    #+#             */
/*   Updated: 2016/05/11 15:48:54 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if ((str = ft_strnew(ft_strlen(s))))
	{
		i = 0;
		while (s && s[i] && f)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}

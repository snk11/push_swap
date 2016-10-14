/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 11:53:11 by syusof            #+#    #+#             */
/*   Updated: 2016/10/14 13:15:38 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int		ft_checkint(char *s)
{
	char	*s1;

	s1 = NULL;
	s1 = s;
	if(*s1 == '-' || *s1 == '+')
	{
		if (ft_strlen(s) == 11)
		{
			if(*s1 == '-')
			{
				s1++;
				if(*s1 == '2')
				{
					s1++;
					if(*s1 == '1')
					{
						s1++;
						if(*s1 == '4')
						{
							s1++;
							if(*s1 == '7')
							{
								s1++;
								if(*s1 == '4')
								{
									s1++;
									if(*s1 == '8')
									{
										s1++;
										if(*s1 == '3')
										{
											s1++;
											if(*s1 == '6')
											{
												s1++;
												if(*s1 == '4')
												{
													s1++;
													if(*s1 == '8')
														return (1);
													else if(*s1 > '8')
														return (0);
												}
												else if(*s1 > '4')
													return (0);
											}
											else if(*s1 > '6')
												return (0);
										}
										else if(*s1 > '3')
											return (0);
									}
									else if(*s1 > '8')
										return (0);
								}
								else if(*s1 > '4')
									return (0);
							}
							else if(*s1 > '7')
								return (0);
						}
						else if(*s1 > '4')
							return (0);
					}
					else if(*s1 > '1')
						return (0);
				}
				else if (*s1 > '2')
					return (0);
			}
			else if(*s1 == '+')
			{
				s1++;
				if(*s1 == '2')
				{
					s1++;
					if(*s1 == '1')
					{
						s1++;
						if(*s1 == '4')
						{
							s1++;
							if(*s1 == '7')
							{
								s1++;
								if(*s1 == '4')
								{
									s1++;
									if(*s1 == '8')
									{
										s1++;
										if(*s1 == '3')
										{
											s1++;
											if(*s1 == '6')
											{
												s1++;
												if(*s1 == '4')
												{
													s1++;
													if(*s1 == '7')
														return (1);
													else if(*s1 > '7')
														return (0);
												}
												else if(*s1 > '4')
													return (0);
											}
											else if(*s1 > '6')
												return (0);
										}
										else if(*s1 > '3')
											return (0);
									}
									else if(*s1 > '8')
										return (0);
								}
								else if(*s1 > '4')
									return (0);
							}
							else if(*s1 > '7')
								return (0);
						}
						else if(*s1 > '4')
							return (0);
					}
					else if(*s1 > '1')
						return (0);
				}
				else if (*s1 > '2')
					return (0);
			}
		}
		else if (ft_strlen(s) > 11)
			return (0);
		else
			s1++;
	}
	else if (ft_strlen(s) > 10)
		return (0);
	while(*s1)
	{
		if (!(*s1 >= '0' && *s1 <= '9'))
			return (0);
		s1++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:38:04 by acostaz           #+#    #+#             */
/*   Updated: 2018/11/30 12:48:18 by acostaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] == c)
			return ((char*)str + i);
	if (c == 0)
		return ((char*)str + i);
	return (0);
}
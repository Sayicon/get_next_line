/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 13:02:40 by mcekici           #+#    #+#             */
/*   Updated: 2024/12/24 13:02:40 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len ++;
	return (len);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*ptr;
	char	*iter;
	int		str_len;

	if (!str1)
	{
		str1 = (char *)malloc(1);
		*str1 = '\0';
	}
	if (!str1 || !str2)
		return ((void *)0);
	str_len = ft_strlen(str1) + ft_strlen(str2);
	ptr = (char *)malloc(str_len + 1);
	if (!ptr)
		return (NULL);
	iter = ptr;
	while (*str1)
		*(iter++) = *(str1++);
	while (*str2)
		*(iter++) = *(str2++);
	*iter = '\0';
	free(str1);
	return (ptr);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

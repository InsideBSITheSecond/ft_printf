/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:29:06 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/24 15:29:06 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  The oracle will predict the size needed to hold the split string
 * @param  char *s
 * @param  char c
 * @retval size_t
 */
static size_t	ft_sizeoracle(const char *s, char c)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		if (*s != c)
		{
			size++;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (size);
}

/** 
 * @brief Helper function to free allocated memory
 * @note  I only exist because my caller is too long >_<
 * @param  char **split
 * @retval int*
 */
static char	**ft_splitfree(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	return (0);
}

/** 
 * @brief  Splits the [s] string using the [c] character delimiter
 * @note   Memory for the new string is obtained 
 * with malloc and can be freed with free
 * @param  char *s
 * @param  char c
 * @retval char**
 */
char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	i = 0;
	split = (char **)ft_calloc(sizeof(char *), (ft_sizeoracle(s, c) + 1));
	if (!split)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			split[i] = ft_substr(s - len, 0, len);
			if (!split[i++])
				return (ft_splitfree(split));
		}
		else
			++s;
	}
	split[i] = 0;
	return (split);
}

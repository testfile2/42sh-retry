/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpaste.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:00:26 by knage             #+#    #+#             */
/*   Updated: 2016/09/10 13:46:35 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpaste(char *str, int start, char *clip, int end)
{
	char	*begin;
	char	*rest;
	char	*ret;
	char	*temp;

	begin = ft_strsub(str, 0, start);
	rest = ft_strsub(str, end, ft_strlen(str) - end);
	ret = ft_strjoin(begin, clip);
	temp = ft_strdup(ret);
	free(ret);
	ret = ft_strjoin(temp, rest);
	free(begin);
	free(temp);
	free(rest);
	return (ret);
}

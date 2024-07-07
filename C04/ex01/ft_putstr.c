/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablabib <ablabib@student.your42net>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:26:43 by ablabib           #+#    #+#             */
/*   Updated: 2024/07/04 11:30:42 by ablabib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!str)
	{
		return ;
	}
	while (*str)
	{
		write (1, str, 1);
		str++ ;
	}
}
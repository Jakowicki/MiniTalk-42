/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:16:20 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/09 15:20:44 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_sig(pid_t pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (((c >> i) & 1) == 1)
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		usleep(100);
		i++;
	}
}

int	main(int ac, char *av[])
{
	pid_t	pid;
	char	*str;

	if (ac != 3)
	{
		ft_printf("Usage: %s <pid> <string>\n", av[0]);
		return (1);
	}
	pid = ft_atoi(av[1]);
	str = av[2];
	while (*str)
	{
		send_sig(pid, *str);
		str++;
	}
	send_sig(pid, '\n');
	send_sig(pid, '\n');
	return (0);
}

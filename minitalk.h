/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:55:01 by mjakowic          #+#    #+#             */
/*   Updated: 2024/05/09 15:20:33 by mjakowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct State
{
	int	c;
	int	i;
}		t_State;

void	send_sig(pid_t pid, char c);
void	sig_user1(int sig);
void	sig_user2(int sig);

#endif

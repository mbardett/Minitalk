/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:57:35 by mbardett          #+#    #+#             */
/*   Updated: 2022/08/13 22:59:49 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_handler(int signum)
{
	static int	i;

	if (signum == SIGUSR1)
		ft_putstr_fd("Roger!\n", 1);
	else
	{
		ft_putstr_fd("All the eagles returned to their nests\n", 1)
		exit(0);
	}
}
//check the number of args and the existence of a message to send;
//then convert the(Server's PID)from *char to int using ft_atoi then send
//signals to ft_handler; the "while,pause()"is in order to wait for signals from
//clients
int	main(int argc, char **argv)
{
	pid_t	ser_pid;

	if (argc != 3)
	{
		ft_putstr_fd("Error: expected 2 arguments", 2);
		return ;
	}
	if (ft_strlen(argv[2]) == 0)
	{
		ft_putstr_fd("The sound of silence...\n", 2);
		return ;
	}
	ser_pid = ft_atoi(argv[1]);
	signal(SIGUSR2, ft_handler);
	signal(SIGUSR1, ft_handler);
	while (1)
		pause();
	return (0);
}

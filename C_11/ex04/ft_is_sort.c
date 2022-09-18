/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgo <rgo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:51:22 by rgo               #+#    #+#             */
/*   Updated: 2022/09/14 18:12:11 by rgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sign;

	i = 0;
	sign = '0';
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
		{
			if (sign == '-')
				return (0);
			sign = '+';
		}	
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			if (sign == '+')
				return (0);
			sign = '-';
		}
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:59:01 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/06 00:35:47 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *erase, size_t bytes)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)erase;
	i = 0;
	while (i < bytes)
	{
		ptr[i] = 0;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:20:52 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/02 14:23:13 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *memory, int fill, size_t bytes)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)memory;
	i = 0;
	while (i < bytes)
	{
		ptr[i] = (unsigned char)fill;
		i++;
	}
	return (memory);
}

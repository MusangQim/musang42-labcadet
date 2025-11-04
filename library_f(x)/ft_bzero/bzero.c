/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:45:55 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/04 09:06:42 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bytezero(void *erase, size_t count_bytes)
/* fill memory with zeros "\0", not delete it */
{
	unsigned char	*ptr;
	int			i;

	ptr = (unsigned char *)erase;
	i = 0;
	while (i < count_bytes)
	{
		ptr[i] = 0; /*kalau ft_memset, dia declare variable 'fill', sbb isi memory, tapi ni kira 0 */
		i++;
	}
	/* just remind, if void, then no return() */
}

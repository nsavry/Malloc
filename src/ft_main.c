/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/12 16:17:35 by nsavry            #+#    #+#             */
/*   Updated: 2015/10/12 19:30:51 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "malloc.h"

void	*ft_malloc(size_t len)
{
	void	*ret;

	ret = mmap(0, len, PROT_READ | PROT_WRITE , MAP_ANON | MAP_PRIVATE, -1, 0);
	return (ret);
}

int 	main(void)
{
	char	lol[] = "bonjour";
	char	*swag;

	swag = (char *)ft_malloc(sizeof(char) * (ft_strlen(lol) + 1));
	swag = ft_strcpy(swag, lol);
	ft_printf("swag:%s\n", swag);
	return (0);
}

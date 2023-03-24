/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segfault.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:03:32 by jcaron            #+#    #+#             */
/*   Updated: 2023/03/11 14:13:58 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int	*invalid;

	srand(time(0));
	invalid = malloc(0);
	while (1)
	{
		invalid += rand();
		*invalid = 42;
	}
}

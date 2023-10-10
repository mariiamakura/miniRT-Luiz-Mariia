/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init_image.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:15:38 by mparasku          #+#    #+#             */
/*   Updated: 2023/10/04 16:19:04 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/miniRT.h"

t_xyz ft_V_init(void)
{
	t_xyz V;

	V.x = 0.0;
	V.y = 0.0;
	V.z = 1.0;

	return (V);
} 
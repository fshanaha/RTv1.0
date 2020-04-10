/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:57:22 by wqarro-v          #+#    #+#             */
/*   Updated: 2019/07/23 11:57:24 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

t_vector3	vec_mult(t_vector3 vec, double i)
{
	t_vector3	r;

	r.x = vec.x * i;
	r.y = vec.y * i;
	r.z = vec.z * i;
	return (r);
}
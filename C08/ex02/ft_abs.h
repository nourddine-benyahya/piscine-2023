/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:26:34 by nbenyahy          #+#    #+#             */
/*   Updated: 2023/09/04 19:15:48 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) 	\
	({					\
	 int result;		\
	 result = Value;	\
	 if (Value < 0)		\
	 	result = -Value;\
	result;				\
	})					\
		
#endif

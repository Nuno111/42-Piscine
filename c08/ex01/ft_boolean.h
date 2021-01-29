/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngregori <ngregori@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:15:15 by ngregori          #+#    #+#             */
/*   Updated: 2021/01/29 00:01:38 by ngregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define EVEN(nbr) ((nbr) % 2 == 0)
# define SUCCESS 0
# define FALSE 0
# define TRUE 1

typedef int		t_bool;

#endif

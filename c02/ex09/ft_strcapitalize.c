/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erhenriq <erhenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:49:55 by erhenriq          #+#    #+#             */
/*   Updated: 2022/04/10 14:00:52 by erhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Capitalizes first word of every word
char	*ft_strcapitalize(char *str)
{
	int		i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A'))
				str[i] -= 32;
			else if ((str[i - 1] > 'Z' && str[i - 1] < 'a'))
				str[i] -= 32;
			else if (str[i - 1] > 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

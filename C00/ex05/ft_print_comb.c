/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:14:12 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/17 15:28:31 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a < '7')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}	
}
/*int main (void)
{
	ft_print_comb();
	return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:48:17 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/17 12:07:12 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int 	i;
	size_t  j;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << static_cast<char> (std::toupper(argv[i][j]));
			j++;
		}
		i++;
	}
	std::cout << "\n";
    return (0);
}

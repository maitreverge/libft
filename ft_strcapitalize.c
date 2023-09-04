/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:35:19 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 21:52:03 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_islower.c"
#include "ft_isupper.c"
#include "ft_toupper.c"
#include "ft_tolower.c"

static int	check_upper(char c)
{
	if (c == '.' || c == '?' || c == '!')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (!str || str[0] == '\0')
		return (NULL);
	if (ft_islower(str[0]) == 1)
	{
		ft_toupper(str[0]);
		i++;
	}
	while (str[i])
	{
		if (check_upper(str[i - 1]) == 1 && ft_islower(str[i]))
			ft_toupper(str[i]); // ! to upper
		else if (check_upper(str[i - 1]) == 0 && ft_isupper(str[i]))
			ft_tolower(str[i]); // ! to lower
		i++;
	}
	return (str);
}

int	main(void)
{
	char *test1 = "C";
	char *test2 = "c";
	char *test3 = "Ce";
	char *test4 = "ce";
	char *test5 = "ceci EsT uNe PhrasE. un Peu Bizarr! euuuh !";
	char *test6 = "Ceci. est. une. phrase.";
	char *test7 = " Ceci. est. une. phrase.";
	char *test8 = "        Ceci. est ! une ? phrase;detype";
	char *test9 = "        Ceci. est. une. phrase.";

	printf("Test1 \n%s\n\n---\n", ft_strcapitalize(test1));
	printf("Test2 \n%s\n\n---\n", ft_strcapitalize(test2));
	printf("Test3 \n%s\n\n---\n", ft_strcapitalize(test3));
	printf("Test4 \n%s\n\n---\n", ft_strcapitalize(test4));
	printf("Test5 \n%s\n\n---\n", ft_strcapitalize(test5));
	printf("Test6 \n%s\n\n---\n", ft_strcapitalize(test6));
	printf("Test7 \n%s\n\n---\n", ft_strcapitalize(test7));
	printf("Test8 \n%s\n\n---\n", ft_strcapitalize(test8));
	printf("Test9 \n%s\n\n---\n", ft_strcapitalize(test9));

}
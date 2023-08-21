/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:45:58 by nope              #+#    #+#             */
/*   Updated: 2023/08/21 14:58:22 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	count_words(char const *str, char c)
{
	size_t	result;
	int		i;

	result = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			result++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (result);
}

// int	main(void)
// {
// 	char s1 = ""; 
// 	char s2 = "c";
// 	char s3 = "co";
// 	char s4 = "COUCOU";
// 	char s5 = "COUCOU BANDE";
// 	char s6 = "COUCOU BANDE DE";
// 	char s7 = "COUCOU BANDE DE GROSSEs SALOPES";
// 	char s8 = " COUCOU BANDE DE GROSSEs SALOPES";
// 	char s9 = "COUCOU BANDE DE GROSSEs SALOPES ";
// 	char s10 = "COUCOU BANDE DE GROSSEs SALOPES ";
// 	char s11 = " COUCOU  BANDE  DE  GROSSEs  SALOPES ";
// 	char s12 = "  COUCOU   BANDE   DE   GROSSEs   SALOPES  ";
// 	char s13 = " ";
// 	char s14 = " c ";
// 	char s15 = "     c   ";
// 	char s16 = "c             c                c";
// 	char s17 = NULL;
// 	char s18 = " COUCOU ";
// 	char s19 = "  COUCOU  ";

// 	char c = ' ';

// 	printf("Result is supposed to be 0\n\nResult of s1 = %i\n\n--------\n\n", count_words(s1, c));
// 	printf("Result is supposed to be 1\n\nResult of s2 = %i\n\n--------\n\n", count_words(s2, c));
// 	printf("Result is supposed to be 1\n\nResult of s3 = %i\n\n--------\n\n", count_words(s3, c));
// 	printf("Result is supposed to be 1\n\nResult of s4 = %i\n\n--------\n\n", count_words(s4, c));
// 	printf("Result is supposed to be 2\n\nResult of s5 = %i\n\n--------\n\n", count_words(s5, c));
// 	printf("Result is supposed to be 3\n\nResult of s6 = %i\n\n--------\n\n", count_words(s6, c));
// 	printf("Result is supposed to be 5\n\nResult of s7 = %i\n\n--------\n\n", count_words(s7, c));
// 	printf("Result is supposed to be 5\n\nResult of s8 = %i\n\n--------\n\n", count_words(s8, c));
// 	printf("Result is supposed to be 5\n\nResult of s9 = %i\n\n--------\n\n", count_words(s9, c));
// 	printf("Result is supposed to be 5\n\nResult of s10 = %i\n\n--------\n\n", count_words(s10, c));
// 	printf("Result is supposed to be 5\n\nResult of s11 = %i\n\n--------\n\n", count_words(s11, c));
// 	printf("Result is supposed to be 5\n\nResult of s12= %i\n\n--------\n\n", count_words(s12, c));
// 	printf("Result is supposed to be 0\n\nResult of s13 = %i\n\n--------\n\n", count_words(s13, c));
// 	printf("Result is supposed to be 1\n\nResult of s14 = %i\n\n--------\n\n", count_words(s14, c));
// 	printf("Result is supposed to be 1\n\nResult of s15 = %i\n\n--------\n\n", count_words(s15, c));
// 	printf("Result is supposed to be 3\n\nResult of s16 = %i\n\n--------\n\n", count_words(s16, c));
// 	printf("Result is supposed to be 0\n\nResult of s17 = %i\n\n--------\n\n", count_words(s17, c));
// 	printf("Result is supposed to be 1\n\nResult of s18 = %i\n\n--------\n\n", count_words(s18, c));
// 	printf("Result is supposed to be 1\n\nResult of s19 = %i\n\n--------\n\n", count_words(s19, c));
// }
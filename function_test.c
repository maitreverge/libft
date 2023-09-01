
	  //////////////////////////////////////////
	 //         FUNCTION    FT_STRCASECMP    //
	//////////////////////////////////////////
int	main (void)
{
	char *s1 = "TINY FROG";
	char *s2 = "TINY FROG";

	char *s3 = "TINY FROG";
	char *s4 = "tINy FrOg";

	char *s5 = "tINy FrOg";
	char *s6 = "TINY FROG";

	char *s7 = "tiny FROG";
	char *s8 = "tiny FROGs";

	char *s9 = "tiny FROGs";
	char *s10 = "tiny FROG";



	printf("Real strcasecmp = %i\nMyft_strcasecmp = %i\n\n---------\n\n", strcasecmp(s1, s2), ft_strcasecmp(s1, s2));
	printf("Real strcasecmp = %i\nMyft_strcasecmp = %i\n\n---------\n\n", strcasecmp(s3, s4), ft_strcasecmp(s3, s4));
	printf("Real strcasecmp = %i\nMyft_strcasecmp = %i\n\n---------\n\n", strcasecmp(s5, s6), ft_strcasecmp(s5, s6));
	printf("Real strcasecmp = %i\nMyft_strcasecmp = %i\n\n---------\n\n", strcasecmp(s7, s8), ft_strcasecmp(s7, s8));
	printf("Real strcasecmp = %i\nMyft_strcasecmp = %i\n\n---------\n\n", strcasecmp(s9, s10), ft_strcasecmp(s9, s10));

}

	  //////////////////////////////////////////
	 //         FUNCTION    COUNT_WORD       //
	//////////////////////////////////////////

 int	main(void)
{
	char s1 = ""; 
	char s2 = "c";
	char s3 = "co";
	char s4 = "COUCOU";
	char s5 = "COUCOU BANDE";
	char s6 = "COUCOU BANDE DE";
	char s7 = "COUCOU BANDE DE GROSSEs SALOPES";
	char s8 = " COUCOU BANDE DE GROSSEs SALOPES";
	char s9 = "COUCOU BANDE DE GROSSEs SALOPES ";
	char s10 = "COUCOU BANDE DE GROSSEs SALOPES ";
	char s11 = " COUCOU  BANDE  DE  GROSSEs  SALOPES ";
	char s12 = "  COUCOU   BANDE   DE   GROSSEs   SALOPES  ";
	char s13 = " ";
	char s14 = " c ";
	char s15 = "     c   ";
	char s16 = "c             c                c";
	char\n\nResult of s11 = %i\n\n--------\n\n", count_words(s11, c));
	printf("Result is supposed to be 5\n\nResult of s12= %i\n\n--------\n\n", count_words(s12, c));
	printf("Result is supposed to be 0\n\nResult of s13 = %i\n\n--------\n\n", count_words(s13, c));
	printf("Result is supposed to be 1\n\nResult of s14 = %i\n\n--------\n\n", count_words(s14, c));
	printf("Result is supposed to be 1\n\nResult of s15 = %i\n\n--------\n\n", count_words(s15, c));
	printf("Result is supposed to be 3\n\nResult of s16 = %i\n\n--------\n\n", count_words(s16, c));
	printf("Result is supposed to be 0\n\nResult of s17 = %i\n\n--------\n\n", count_words(s17, c));
	printf("Result is supposed to be 1\n\nResult of s18 = %i\n\n--------\n\n", count_words(s18, c));
	printf("Result is supposed to be 1\n\nResult of s19 = %i\n\n--------\n\n", count_words(s19, c));
}
*/
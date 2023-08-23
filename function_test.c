
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


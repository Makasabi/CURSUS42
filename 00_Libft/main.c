/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:05:53 by mrony             #+#    #+#             */
/*   Updated: 2022/11/21 14:53:24 by mrony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	f(unsigned int n, char c)
void	f(unsigned int i, char *s)
{
//	(void)n;
//	return(c + 1);
	*s += i;	
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

// FT_STRLEN
	printf("ft_strlen\n");
	printf("ft_strlen of 'hello world' is: %ld\n",ft_strlen("Hello world"));
	
// FT_STRLCPY
	char	dst[30];
	const char	src[] = "hello world";
	size_t	size = 16;
	
	printf("\nft_strlcpy\n");
	printf("ft_strlcpy of 'hello world' is: %ld\n", ft_strlcpy(dst, src, size));

// FT_STRLCAT
	char dststrlcat[] = "hello ";
	const char srcstrlcat[] = "world";
	
	printf("\nft_strlcat\n");
	printf("ft_strlcat of 'hello ' $ 'world' is: %ld\n", ft_strlcat(dststrlcat, srcstrlcat, size));

// FT_STRCHR
	const char srcstrchr[] = "hello world";

	printf("\nft_strchr\n");
	printf("The first 'w' character in '%s' is: %s\n", srcstrchr, ft_strchr(srcstrchr, 'w'));

// FT_STRRCHR
	printf("\nft_strrchr\n");
	printf("The last 'l' character in '%s' is: %s\n", srcstrchr, ft_strrchr(srcstrchr, 'l'));

// FT_STRNSTR
	const char big[] = "J'aime le persil et la cardamone mais pas la coriandre.";
	const char little[] = "la coriandre";
	
	printf("\nft_strnstr\n");
	printf("big = %s\n", big);
	printf("little = %s\n", little);
	printf("string found within a 3 bytes len: %s\n", ft_strnstr(big, little, 3));
	printf("string found within a 15 bytes len: %s\n", ft_strnstr(big, little, 15));
	
// FT_STRDUP
	printf("\nft_strdup\n");
	printf("String to duplicate: %s\n", big);
	printf("New string : %s\n", ft_strdup(big));

// FT_MEMSET
	char	smemset[] = "J'aime le persil et la cardamone mais pas la coriandre.";

	printf("\nft_memset\n");
	printf("String before ft_memset: '%s'\n", smemset);
	printf("String after ft_memset: '%s'\n", (char*)ft_memset(smemset, '.', sizeof(smemset)-1));

// FT_BZERO
	char	sbzero[100] = "J'aime le persil et la cardamone mais pas la coriandre.";

	printf("\nft_bzero\n");
	printf("String before ft_bzero: '%s'\n", sbzero);
	ft_bzero(sbzero, sizeof(sbzero)-1);
	printf("String after ft_bzero: '%s'\n", sbzero);
	
// FT_MEMCPY
	char	smemcpy[5] = "abcd";

	printf("\nft_memcpy\n");
	printf("str before memcpy = %s\n", smemcpy);
	ft_memcpy(smemcpy + 1, smemcpy, 2);
	printf("str1 after memcpy = %s\n", smemcpy);

// FT_MEMMOVE
	char	smemmove[] = "abcd";

	printf("\nft_memmove\n");
	printf("str before ft_memmove = %s\n", smemmove);
	ft_memmove(smemmove + 1, smemmove, 2);
	printf("str after ft_memmove = %s\n", smemmove);

// FT_MEMCHR
	const char smemchr[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	int     cmemchr = 'm';
	size_t  nmemchr = 16;

	printf("\nft_memchr\n");
	printf("The ft_memchr occurence of %d is - %p -  in ft_memchr\n", cmemchr, ft_memchr(smemchr, cmemchr, nmemchr));

// FT_CALLOC
	size_t	nmemb = 1;
	size_t	sizecalloc = 0;
	char	*array;
	
	printf("\nft_calloc\n");
	array = ft_calloc(nmemb, sizecalloc);
	printf("The size of the array initialized in Calloc is : %ld\n", sizeof(array));
	free(array);

// FT_ISALPHA
// FT_ISDIGIT
// FT_ISALNUM
// FT_ISASCII
// FT_ISPRINT
// FT_TOUPPER
// FT_TOLOWER

	int	a = 'a';
	int	b = '2';
	int	c = 'B';
	int	d = '*';
	int	e = '\t';
	
	printf("\nft_isalpha\n");
	if (ft_isalpha(a) == 0)
		printf("'%c' is not an alpha character\n", a);
	else
		printf("'%c' is an alpha character\n", a);
	if (ft_isalpha(b) == 0)
		printf("'%c' is not an alpha character\n", b);
	else
		printf("'%c' is an alpha character\n", b);
	if (ft_isalpha(c) == 0)
		printf("'%c' is not an alpha character\n", c);
	else
		printf("'%c' is an alpha character\n", c);
	if (ft_isalpha(d) == 0)
		printf("'%c' is not an alpha character\n", d);
	else
		printf("'%c' is an alpha character\n", d);
	if (ft_isalpha(e) == 0)
		printf("'%c' is not an alpha character\n", e);
	else
		printf("'%c' is an alpha character\n", e);	

	printf("\nft_isdigit\n");
	if (ft_isdigit(a) == 0)
		printf("'%c' is not a digit character\n", a);
	else
		printf("'%c' is a digit character\n", a);
	if (ft_isdigit(b) == 0)
		printf("'%c' is not a digit character\n", b);
	else
		printf("'%c' is a digit character\n", b);
	if (ft_isdigit(c) == 0)
		printf("'%c' is not a digit character\n", c);
	else
		printf("'%c' is a digit character\n", c);
	if (ft_isdigit(d) == 0)
		printf("'%c' is not a digit character\n", d);
	else
		printf("'%c' is a digit character\n", d);
	if (ft_isdigit(e) == 0)
		printf("'%c' is not a digit character\n", e);
	else
		printf("'%c' is a digit character\n", e);

	printf("\nft_isalnum\n");
	if (ft_isalnum(a) == 0)
		printf("'%c' is not an alnum character\n", a);
	else
		printf("'%c' is an alnum character\n", a);
	if (ft_isalnum(b) == 0)
		printf("'%c' is not an alnum character\n", b);
	else
		printf("'%c' is an alnum character\n", b);
	if (ft_isalnum(c) == 0)
		printf("'%c' is not an alnum character\n", c);
	else
		printf("'%c' is an alnum character\n", c);
	if (ft_isalnum(d) == 0)
		printf("'%c' is not an alnum character\n", d);
	else
		printf("'%c' is an alnum character\n", d);
	if (ft_isalnum(e) == 0)
		printf("'%c' is not an alnum character\n", e);
	else
		printf("'%c' is an alnum character\n", e);
	
	printf("\nft_isascii\n");
	if (ft_isascii(a) == 0)
		printf("'%c' is not an ascii character\n", a);
	else
		printf("'%c' is an ascii character\n", a);
	if (ft_isascii(b) == 0)
		printf("'%c' is not an ascii character\n", b);
	else
		printf("'%c' is an ascii character\n", b);
	if (ft_isascii(c) == 0)
		printf("'%c' is not an ascii character\n", c);
	else
		printf("'%c' is an ascii character\n", c);
	if (ft_isascii(d) == 0)
		printf("'%c' is not an ascii character\n", d);
	else
		printf("'%c' is an ascii character\n", d);
	if (ft_isascii(e) == 0)
		printf("'%c' is not an ascii character\n", e);
	else
		printf("'%c' is an ascii character\n", e);

	printf("\nft_isprint\n");
	if (ft_isprint(a) == 0)
		printf("'%c' is not a printable character\n", a);
	else
		printf("'%c' is a printable character\n", a);
	if (ft_isprint(b) == 0)
		printf("'%c' is not a printable character\n", b);
	else
		printf("'%c' is a printable character\n", b);
	if (ft_isprint(c) == 0)
		printf("'%c' is not a printable character\n", c);
	else
		printf("'%c' is a printable character\n", c);
	if (ft_isprint(d) == 0)
		printf("'%c' is not a printable character\n", d);
	else
		printf("'%c' is a printable character\n", d);
	if (ft_isprint(e) == 0)
		printf("'%c' is not a printable character\n", e);
	else
		printf("'%c' is a printable character\n", e);

	printf("\nft_toupper\n");
	printf("%c --> %c\n", a, ft_toupper(a));
	printf("%c --> %c\n", b, ft_toupper(b));
	printf("%c --> %c\n", c, ft_toupper(c));
	printf("%c --> %c\n", d, ft_toupper(d));

	printf("\nft_tolower\n");
	printf("%c --> %c\n", a, ft_tolower(a));
	printf("%c --> %c\n", b, ft_tolower(b));
	printf("%c --> %c\n", c, ft_tolower(c));
	printf("%c --> %c\n", d, ft_tolower(d));

// FT_STRNCMP
	const char	s1strncmp[] = "abcdefgh";
	const char	s2strncmp[] = "abcdezgh";
	unsigned int    j = 8;

	printf("\nft_strncmp\n");
	printf("the difference between s1 and s2 with ft_strncmp is: %d\n", ft_strncmp(s1strncmp, s2strncmp, j));

// FT_MEMCMP
	const char	s1memcmp[] = "abcdezgh";
	const char	s2memcmp[] = "abcdefgh";
	size_t		nmemcmp = 8;

	printf("\nft_memcmp\n");
	printf("String 1: %s\n", s1memcmp);
	printf("String 2: %s\n", s2memcmp);
	printf("The difference between s1 and s2 in the first %ld bytes is : %d in ft_memcmp\n", nmemcmp, ft_memcmp(s1memcmp, s2memcmp, nmemcmp));

// FT_ATOI
	const char nptr [] = "      \t    \n    +1476316654khdfvl hshb jzhvk.jh";
	int	k;

	printf("\nft_atoi\n");
	printf("String to import the int from: '%s'\n", nptr);
	k = ft_atoi(nptr);
	printf("The number is %d\n", k);

/************/
/* PARTIE 2 */
/************/

	printf("\n/////////////// PARTIE 2 /////////////////\n");

// FT_SUBSTR

 	char const      *ssubstr = "tripouille";
 	unsigned int    startsubstr = 8; 
 	size_t          lensubstr = 5;
 	char    *strsubstr;

 	strsubstr = ft_substr(ssubstr, startsubstr, lensubstr);
	printf("\nft_substr\n");
	printf("Original String: %s\n", ssubstr);
	printf("Max len of Substr: %ld\n", lensubstr);
	printf("Index of new str in original str: %d\n", startsubstr);
	printf("New string: %s\n", strsubstr);
	free(strsubstr);

// FT_STRJOIN

	char 	s1join[] = "Hello ";
	char 	s2join[] = "world";
	char 	*s3join;
	
	printf("\nft_strjoin\n");
	printf("String s1 is '%s'\n", s1join);
	printf("String s2 is '%s'\n", s2join);
	s3join = ft_strjoin(s1join, s2join);
	printf("String s3 after ft_strjoin is '%s'\n", s3join);

// FT_STRTRIM

	char	s1strtrim[] = "   xxxx      x    xxxxxx";
	char const	setstrtrim[] = "x ";
	char	*strtrim;
	
	printf("\nft_strtrim\n");
	printf("s1 before ft_strtrim: '%s'\n", s1strtrim);
	printf("set of char is: '%s'\n", setstrtrim);
	strtrim = ft_strtrim(s1strtrim, setstrtrim);
	printf("str(s1) after ft_strtrim: '%s'\n", strtrim);
	printf("strlen str = %ld\n", ft_strlen(strtrim));
	printf("strlen str + 1 = %ld\n", ft_strlen(strtrim) + 1);
	free(strtrim);

// FT_SPLIT

	char	ssplit[] = "Abcd  Ef GHIJ k lmno prst uv w xyz ";
	char 	csplit = ' ';
	char		**strsplit;
	int		isplit;

	isplit = 0;
//	if (ac != 3)
//	{
//		printf("Wrong argument count - please try again.\n");
//		return (0);
//	}
	printf("\nft_split\n");
	printf("orignal string: %s\n", ssplit);
	printf("Delimiter character : '%c'\n", csplit);
	strsplit= ft_split(ssplit, csplit);
	while (isplit <= 9)
	{
		printf("Tab[%d]: '%s'\n", isplit, strsplit[isplit]);
		isplit++;
	}
	isplit = 0;
	while (isplit <= 9)
	{
		free(strsplit[isplit]);
		isplit++;
	}
	free(strsplit);

// FT_ITOA

	int     aitoa = -247483648;
	int     bitoa = 247483647;
	int     citoa = 0;
	int     ditoa = 1;
	int     eitoa = -1;
	char	*caitoa;
	char	*cbitoa;
	char	*ccitoa;
	char	*cditoa;
	char	*ceitoa;
	
	printf("\nft_itoa\n");
	printf("Int to convert in char: %d\n", aitoa);
	caitoa = ft_itoa(aitoa);
	printf("Converted char ----->  %s\n", caitoa);
	printf("Int to convert in char: %d\n", bitoa);
	cbitoa = ft_itoa(bitoa);
	printf("Converted char ----->  %s\n", cbitoa);
	printf("Int to convert in char: %d\n", citoa);
	ccitoa = ft_itoa(citoa);
	printf("Converted char ----->  %s\n", ccitoa);
	printf("Int to convert in char: %d\n", ditoa);
	cditoa = ft_itoa(ditoa);
	printf("Converted char ----->  %s\n", cditoa);
	printf("Int to convert in char: %d\n", eitoa);
	ceitoa = ft_itoa(eitoa);
	printf("Converted char ----->  %s\n", ceitoa);
	free(caitoa);
	free(cbitoa);
	free(ccitoa);
	free(cditoa);
	free(ceitoa);

// FT_STRMAPI

/*	char (*plusn)(unsigned int, char) = &f;
	char strmapi[] = "This is a test";
	char *strmapi2;
	printf("\nft_strmapi\n");
	printf("str before: %s\n", strmapi);
	strmapi2 = ft_strmapi(strmapi, plusn);
	printf("str after: %s\n", strmapi2);
	free(strmapi2);
*/

// FT_STRITERI

	char    striteri[] = "0000000000 This is a test";
	printf("\nft_striteri\n"); 
	printf("str before: %s\n", striteri);
	ft_striteri(striteri, &f);
	printf("str after: %s\n", striteri);
		
	return (0);

}

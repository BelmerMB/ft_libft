/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:39:22 by emetras-          #+#    #+#             */
/*   Updated: 2022/06/25 18:50:08 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	// printf("is alpha? %d\n", ft_isalpha('a'));
	// printf("is alpha? %d\n", ft_isalpha('A'));
	// printf("is alpha? %d\n", ft_isalpha('Z'));
	// printf("is alpha? %d\n", ft_isalpha('z'));
	// printf("is alpha? %d\n", ft_isalpha('1'));
	// printf("is alpha? %d\n", ft_isalpha('/'));
	// printf("my strleng? %zu\n", ft_strlen("groselha"));
	// printf("my strleng? %zu\n", ft_strlen(""));
	// printf("my strleng? %zu\n", ft_strlen("12560 suco de batata+15"));
	// printf("my strleng? %zu\n", ft_strlen(" "));
	// printf("my strleng? %zu\n", ft_strlen("\0"));
	// printf("they strleng? %zu\n", strlen("groselha"));
	// printf("they strleng? %zu\n", strlen(""));
	// printf("they strleng? %zu\n", strlen("12560 suco de batata+15"));
	// printf("they strleng? %zu\n", strlen(" "));
	// printf("they strleng? %zu\n", strlen("\0"));
	//  printf("to lower? %c\n", ft_tolower('A'));
	// printf("to upper? %c\n", ft_toupper('a'));
	// printf("to lower? %c\n", ft_tolower('Z'));
	// printf("to upper? %c\n", ft_toupper('z'));
	// printf("to lower? %c\n", ft_tolower('1'));
	// printf("to upper? %c\n", ft_toupper('1'));
	// printf("to lower? %c\n", ft_tolower('\0'));
	// printf("to upper? %c\n", ft_toupper('\0'));
	// printf("to lower? %c\n", ft_tolower('\n'));
	// printf("to upper? %c\n", ft_toupper('\n'));

	//STRCHR
	// char string_10[] = "ab10cde0f0gh";
	// printf("TEST 1\nmeu  = %s\n", ft_strrchr(string_10, '0'));
	// char string_1[] = "ab10cde0f0gh";
	// printf("dele = %s\n", strrchr(string_1, '0'));
	
	// char string[] = "abcdefgh";
	// printf("TEST 2\nmeu  = %s\n", ft_strrchr(string, 1));
	// char stringx[] = "abcdefgh";
	// printf("dele = %s\n", strrchr(stringx, 1));
	
	// char string10[] = "abc defgh";
	// printf("TEST 3\nmeu  = %s\n", ft_strrchr(string10, 12354463));
	// char string1[] = "abc defgh";
	// printf("dele = %s\n", strrchr(string1, 12354463));

	// strncmp test
	
	// char string_10[] = "ab10cde0f0gh";
	// printf("TEST 1 strncmp\nmeu  = %d\n", ft_strncmp(string_10, "string_10", 5));

	// printf("dele = %d\n", strncmp(string_10, "string_10", 5));
	
	
	// char string[] = "grose";  //8 +1
	// printf("TEST 2\nmeu  = %d\n", ft_strncmp(string, "groselha12", 25));
	// printf("dele = %d\n", strncmp(string, "groselha12", 25));
	
	
	// char string10[] = "123456789";
	// printf("TEST 3\nmeu  = %d\n", ft_strncmp(string10, "122456789", 4));
	// printf("dele = %d \n", strncmp(string10, "122456789", 4));

	// printf("TEST 4\nmeu  = %d\n", ft_strncmp("grose", "groselha12", 20));
	// printf("dele = %d\n", strncmp("grose", "groselha12", 20));


	//TEST MEMSET

	// char test[] = " ";
	// ft_memset(test, 'z', 1);
	// char test1[] = "TESTE da string";
	// ft_memset(test1, 'a', 10);
	// char test2[] = "TESTE da string";
	// ft_memset(test2, '5', 50);
	// char test3[] = "TESTE da string";
	// ft_memset(test3, 'a', 10);
	// char test4[] = "TESTE da string";
	// ft_memset(test4, 'z', -50);
	// // printf("my function \"%s\"\n", test);
	// printf("my function \"%s\"\n", test1);
	// printf("my function \"%s\"\n", test2);
	// printf("my function \"%s\"\n", test3);
	// printf("my function \"%s\"\n original \n", test4);
	// char test5[] = "A";
	// memset(test5, 'z', 1);
	// char test6[] = "TESTE da string";
	// memset(test6, 'a', 14);
	// char test7[] = "TESTE da string";
	// memset(test7, 'u', 25);
	// char test8[] = "TESTE da string";
	// memset(test8, 'a', 10);
	// char test9[] = "TESTE da string";
	// memset(test9, 'z', 20);
	// printf("function \"%s\"\n", test5);
	// printf("function \"%s\"\n", test6);
	// printf("function \"%s\"\n", test7);
	// printf("function \"%s\"\n", test8);
	// printf("function \"%s\"\n", test9);

	// test memft_memchr

	// char test[] = "TESTE da string";
	// ft_memchr(test[5], 0);
	// char test1[] = "TESTE da string";
	// ft_memchr(test1[10], 2);
	// char test2[] = "TESTE da string";
	// ft_memchr(test2[10], 5);
	// char test3[] = "TESTE da string";
	// ft_memchr(test3[10], 5);
	// char test4[] = "TESTE da string";
	// ft_memchr(test4[1], 15);
	// printf("my function \"%s\"\n", test);
	// printf("my function \"%s\"\n", test1);
	// printf("my function \"%s\"\n", test2);
	// printf("my function \"%s\"\n", test3);
	// printf("my function \"%s\"\n original \n", test4);
	// char test5[] = "TESTE da string";
	// memft_memchr(test5[5], 0);
	// char test6[] = "TESTE da string";
	// memft_memchr(test6[10], 2);
	// char test7[] = "TESTE da string";
	// memft_memchr(test7[10], 5);
	// char test8[] = "TESTE da string";
	// memft_memchr(test8[10], 5);
	// char test9[] = "TESTE da string";
	// memft_memchr(test9[1], 15);
	// printf("original \"%s\"\n", test5);
	// printf("original \"%s\"\n", test6);
	// printf("original \"%s\"\n", test7);
	// printf("original \"%s\"\n", test8);
	// printf("original \"%s\"\n", test9);

	//test memchr

	// char test[] = "TESTE da string";
	// char test1[] = "TESTE da string";
	// char test2[] = "TESTE da string";
	// char test3[] = "TESTE da string";
	// char test4[] = "TESTE da string";
	// printf("my function \"%s\"\n", (char *)ft_memchr(test, 'T', 0));
	// printf("my function \"%s\"\n", (char *)ft_memchr(test1, 'D', -10));
	// printf("my function \"%s\"\n", (char *)ft_memchr(test2, ' ', 10));
	// printf("my function \"%s\"\n", (char *)ft_memchr(test3, 'g', 10));
	// printf("my function \"%s\"\n original \n", (char *)ft_memchr(test4, '\0', 10));
	
	// char test5[] = "TESTE da string";
	// char test6[] = "TESTE da string";
	// char test7[] = "TESTE da string";
	// char test8[] = "TESTE da string";
	// char test9[] = "TESTE da string";
	
	// printf("original \"%s\"\n", (char *)memchr(test5, 'T', 1));
	// printf("original \"%s\"\n", (char *)memchr(test6, 'D', -10));
	// printf("original \"%s\"\n", (char *)memchr(test7, ' ', 10));
	// printf("original \"%s\"\n", (char *)memchr(test8, 'g', 10));
	// printf("original \"%s\"\n", (char *)memchr(test9, '\0', 10));
	
	//strlcat
	// char name[20] = " de groselha", complete[20] = "suco";
	// //last[10] = "Brum",
	// size_t i;

	
 	// i = ft_strlcat(complete,name,2);
	// printf("name - \"%s\" %ld\n", complete, i);

	// i = ft_strlcat(complete,name,15);
	// printf("name - \"%s\"%ld\n", complete, i);

	// teste strnstr

// 	char name[25] = "aaabcabcd";
// 	char src[10] = "aabc";
// 	char *ptr;
	
// 	printf("Phrase \'%s\' | word \'%s\' \n ",name, src);
// //primeiro teste
// 	ptr = ft_strnstr(name, src, 10);
// 	printf("my function - \"%s\"\n", ptr);
	
// 	ptr = strnstr(name, src, 10);
// 	printf("original - \"%s\"\n\n", ptr);
	
// //segundo teste
// 	printf("Phrase \'%s\' | word \'de\' \n ",name);
// 	ptr = ft_strnstr(name, "de", 15);
// 	printf("my function - \"%s\"\n", ptr);
	
// 	ptr = strnstr(name, "de", 15);
// 	printf("Original function - \"%s\"\n\n", ptr);
	
// //terceiro teste
// 	printf("Phrase \'%s\' | word \'\' \n ",name);
// 	ptr = ft_strnstr(name, "", 15);
// 	printf("my function - \"%s\"\n", ptr);
	
// 	ptr = strnstr(name, "", 15);
// 	printf("Original function - \"%s\"\n\n", ptr);
	
// //quarto teste
// 	printf("Phrase \'%s\' | word \'aaabc\' \n ",name);
// 	ptr = ft_strnstr(name, "aaabc", 5);
// 	printf("my function - \"%s\"\n", ptr);
	
// 	ptr = strnstr(name, "aaabc", 5);
// 	printf("Original function - \"%s\"\n\n", ptr);

	//atoi tester
	// printf("\noriginal function\n");
	// printf("%i\n", atoi(" -123junk"));
    // printf("%i\n", atoi("1"));
    // printf("%i\n", atoi("0"));
    // printf("%i\n", atoi("-junk-123"));         // no conversion can be performed
    // printf("%i\n", atoi("12321474836471"));
	// printf("%i\n", atoi("2147483648"));
	// printf("%i\n", atoi("48"));
	// printf("%i\n", atoi("000000"));

	// printf("\nmy function\n");
	// printf("%i\n", ft_atoi(" -123junk"));
    // printf("%i\n", ft_atoi("1"));
    // printf("%i\n", ft_atoi("0"));
    // printf("%i\n", ft_atoi("-junk-123"));         // no conversion can be performed
    // printf("%i\n", ft_atoi("12321474836471"));
	// printf("%i\n", ft_atoi("2147483648"));
	// printf("%i\n", ft_atoi("48"));
	// printf("%i\n", ft_atoi("000000"));


	//teste substr

	// char	frase[] = "	";
	// char	frase2[] = "";
	// char 	*ptr;
	// ptr = ft_strjoin(frase, frase2);
	// printf("\"%s\"\n", ptr);
	// free(ptr);

	//teste itoa
	// int test = 12;
	// char *ptr;

	// ptr = ft_itoa(test);
	// printf("\"%s\"\n", ptr);
	// free (ptr);

	// test = 0;
	// ptr = ft_itoa(test);
	// printf("\"%s\"\n", ptr);
	// free (ptr);

	// test = 2147483647;
	// ptr = ft_itoa(test);
	// printf("\"%s\"\n", ptr);
	// free (ptr);

	// test = -2147483648;
	// ptr = ft_itoa(test);
	// printf("\"%s\"\n", ptr);
	// free (ptr);
	//test putnbr

	// int i = 0;
	// ft_putnbr_fd(i, 1);
	// i = -255;
	// putchar('\n');
	// ft_putnbr_fd(i, 1);
	// i = 255;
	// putchar('\n');
	// ft_putnbr_fd(i, 1);
	// putchar('\n');
	// i = 2147483647;
	// ft_putnbr_fd(i, 1);
	// putchar('\n');
	// i = -2147483648;
	// ft_putnbr_fd(i, 1);
	

	// teste sizesTR

	// char name [] = "aaaaaaaasuco de baaaatatat";  //26 +1
	// char name2 [] = "la le li lu dominadora"; //22 +1
	// char **split;
	// int i=0;
	
	// char * * tab = ft_split("  tripouille  42  ", ' ');
	// // split = ft_split("aaaaaaaasuco de baaaatatat", 'a');
	// // while(split[i])
	// // {
	// 	printf("\"%s\"", tab[2]);
	// 	free(tab[0]);
	// 	free(tab[1]);
	// 	free(tab);
	// 	i++;
	// }
	// printf("resultado \"%s\"\n", split[i]);
	// i = 0;
	// free(split[0]);
	// free(split[1]);
	// free(split[2]);
	// free(split[3]);
	// free(split);
	// split = ft_split("name2", 0);
	// while(split[i])
	// {
	// 	printf("resultado \"%s\"\n", split[i]);
	// 	i++;
	// }
	// printf("resultado \"%s\"\n", split[i]);
	// free(split);

	char *str = ft_memchr("bonjourno", 'n', 2);
	printf("%s", str);

	
}



//exemplo
/*
	ft_strsplit("exemplo", "ex");
	

*/
int str_len(char *adress) /* Directly Sending Adress */
{
	int n=0;
	for(n=0 ; *adress!='\0' ; ++adress)
		++n;
	return n;
}
//author: Geetesh Mandaogade
//question link: https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633

bool isValid(char c)
{
	if ((c>='a' and c<='z')or(c>='A' and c<='Z')or(c>='0' and c<='9'))
		return 1;
	else 
		return 0;
}

char toLower(char c)
{
	if ((c>='a' and c<='z')or(c>='0' and c<='9'))
		return c;
	else
	{
		char temp= c-'A'+'a';
		return temp;
	}
}

bool checkPalindrome(string s)
{
    // Write your code here.
	int lo=0;
	int hi=s.length()-1;
	while (lo<=hi)
	{
		if ( !isValid(s[lo]) )
			lo++;
		else if ( !isValid(s[hi]) )
			hi--;
		//cout<<toLower(s[lo])<<toLower(s[hi]);
		else 
		{
			if ( toLower(s[lo])!=toLower(s[hi]) )
				return 0;
			else
			{
				lo++;
				hi--;
			}
		}
	}
	return 1;
}

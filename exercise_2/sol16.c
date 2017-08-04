#include<stdio.h>
#include<string.h>

int start_index(char string1[10])
{

	int i,j,str1len,str2len,found=0, c;
	char string[256] = "Ah Love! could you a I with Fate conspire To grasp this sorry scheme of things entire,Would not we shatter it to bits --- and then Re-mould it nearer to the Heart’s Desire!";
	
	str1len = strlen(string);
	str2len = strlen(string1);
	for (i=0;i<str1len - str2len;i++)
	{       c= str2len;
		
		for(j=0;j<str2len;j++)
		{
			if (string[i+j]==string1[j])
				
                                c--;
				//break;

		}
              if (c == 0) 
		{
		 found = 1;
		break;
  		}
}
		if (found == 1)
		{
			printf("%s found at index: %d\n",string1,i);
			return i;
		}



	return 0;
	
}





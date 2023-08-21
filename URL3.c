#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void valid_string(char *url) 
{
    int flag=0;
   
    char *p[] = {"http://","https://", "ftp://"};
    int n = sizeof(p)/sizeof(p[0]);
    char *w="www.";
    char *a[] = {".com/",".org/",".net/",".gov/",".edu/"};
    int m = sizeof(a)/sizeof(a[0]);
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (strstr(url, p[i]) != NULL || strstr(url, w) != NULL || strstr(url, a[j]) != NULL)
            {
               flag=1;
            }
        }
    }
    if(flag = 1)
    {
        printf("Valid URL\n");
    }
    else
    {
        printf("Invalid URL\n");
    }
}

void main() 
{
    int n;
    char *url;
    url = (int*)malloc(n * sizeof(char));
    printf("Enter URL: ");
    scanf("%s", url);
    valid_string(url);
}
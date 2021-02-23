#include<stdio.h>
#include<wchar.h>
#include<string.h>
int main()
{
    wchar_t *a = L"Abhishek Singh", b[300];
    gets(b);
    //wscanf(L"%ls",b);
    wprintf(L"%ls%s",a,b);
    
    return 0;
}
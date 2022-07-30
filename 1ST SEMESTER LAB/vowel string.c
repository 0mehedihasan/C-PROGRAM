#include<stdio.h>

int main()
{
    char name[100],ch;
    int word,other,vowel,constant,number,i;
    printf("Enter a Sentence=");
    gets(name);
    printf("Check your sentence=%s\n",name);
    word=vowel=other=constant=number=i=0;
    
    while((ch=name[i])!=0)
    {
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
         || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
        else if((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z'))
            constant++;
        else if(ch>='0'&& ch<='9')
            number++;
        else if(ch=' ')
            word++;
        else
            other++;
        i++;
    }
    word++;
    }
    printf("Vowel=%d\n",vowel);
    printf("Word=%d\n",word);
    printf("Number=%d\n",number);
    printf("Constant=%d\n",constant);

    return 0;
}
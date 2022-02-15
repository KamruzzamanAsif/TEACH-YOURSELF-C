#include <stdio.h>
#include <string.h>

 int main()
 {
    char a[10000],arr[1000][500],n_arr[1000][500],new[2][20],preposition[50][50]={"in", "at", "to", "of", "from", "by", "over", "up", "above", "out", "on", "through", "below", "for", "about", "after", "before", "with","behind", "with", "but", "But", "into", "within", "between", "among"},
    conjunction[50][50]={"that","who","how","when","but","both","where","which","however","and"},be_verb[50][50]={"am", "is", "are", "has", "have","had", "been", "will", "shall", "be","was","were"},interjection[50][50]={"How!","Alas!","Wow!","Hurray!","What!","Yeah!"},
    pronoun[50][50]={"I", "We", "He", "She", "They", "It", "You", "One", "Who", "How", "When", "Where", "Which","we","he","his","her","she","it","you"},article[50][50]={"A","An","The","a","an","the"};
    int i,r=0,c=0,k=0,x=0,count=0,m=0,j,frequency[1000]={};
    gets(a);

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' '||a[i]=='\0'||a[i]==','||a[i]=='.'||a[i]=='?')
        {
            arr[r][c]='\0';
            r++;
            c=0;
        }
        else
        {
            arr[r][c]=a[i];
            c++;
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<50;j++)
        {
            if(strcmp(arr[i],preposition[j])==0 || strcmp(arr[i],pronoun[j])==0 || strcmp(arr[i],be_verb[j])==0 || strcmp(arr[i],conjunction[j])==0 || strcmp(arr[i],interjection[j])==0 || strcmp(arr[i],article[j])==0)
            {
                for(int k = i; k < r; k++)
                {
                strcpy(arr[k], arr[k+1]);
                }
            }
        }
    }

    for (i = 0;i <r;i++)
    {
        for (j = 0;j <r;j++)
        {
            if (i == j)
            {
                strcpy(n_arr[k], arr[i]);
                k++;
                count++;

                break;
            }
            else
            {
                if (strcmp(n_arr[j], arr[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }

    for (i = 0;i < count;i++)
    {
        for (j = 0;j < r;j++)
        {
            if (strcmp(n_arr[i], arr[j]) == 0)
                frequency[i]++;
        }

    }


    for (i = 0; i < count; ++i)
    {
          for (j = i + 1; j < count; ++j)
          {
                if (frequency[i] < frequency[j])
                {
                    k = frequency[i];
                    strcpy(new[0],n_arr[i]);
                    frequency[i] = frequency[j];
                    strcpy(n_arr[i],n_arr[j]);
                    frequency[j] = k;
                    strcpy(n_arr[j],new[0]);
                }
          }
    }

    printf("Paragraph Keywords:");
    for(i=0;i<count;i++)
    {
        printf("\n%s",n_arr[i]);
        m++;
        if(m==3)
        break;
    }

  return 0;
 }

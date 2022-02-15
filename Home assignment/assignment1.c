#include <stdio.h>
#include <string.h>

int main()
{
    char a[5000];  //main array which is to be inputed.
    char arr[500][500],be_verb[50][50]={"am", "is", "are", "has", "have","had", "been", "will", "shall", "be","was","were"},pronoun[50][50]={"I", "We", "He", "She", "They", "It", "You", "One", "Who", "How", "When", "Where", "Which","we","he","she","it","you"},
	preposition[50][50]={"in", "at", "to", "of", "from", "by", "over", "up", "above", "out", "on", "through", "below", "for", "about", "after", "before", "with",
	"behind", "with", "but", "But", "into", "within", "between", "among"},verb[50][50]={"am", "is", "are", "was", "were", "been", "being", "have", "has", "had", "will", "would", "shall", "should", "may", "might", "must", "need",
	"can", "could", "be","do","does","did","ought", "used"},conjunction[50][50]={"that","who","how","when","but","both","where","which","however"},interjection[50][50]={"How!","Alas!","Wow!","Hurrey!","What!","Yeah!"};
    int i,j=0,k,count=0,len,sp=0,pun=0,ar=0,vb=0,r=0,c=0;
    gets(a);
    len=strlen(a);

    //code for problem a.
    for(i=0;i<len;i++)
    {
        if(a[i]=='.' || a[i]=='?' || a[i]=='!')
            count++;
    }
    printf("a.No of Sentences:%d",count);

    //code for problem b. & c. & d.
    for(i=0;i<len;i++)
    {
        if(a[i]==' ')
            sp++;
    }
    printf("\nb.No of Characters:\n\ta. %d with white spaces\n\tb. %d without white spaces",len,(len-sp));
    printf("\nc.Word count:%d",(sp+1));
    printf("\nd.NO of spaces:%d",sp);

    //code for problem e.
    for(i=0;i<len;i++)
    {
        if(a[i]=='.' || a[i]==',' || a[i]==';' || a[i]=='\'' || a[i]==':' || a[i]=='?' || a[i]=='(' || a[i]=='{' || a[i]=='[' || a[i]=='...' || a[i]=='!' || a[i]=='-' || a[i]=='/' || a[i]=='"')
            pun++;
    }
    printf("\ne.NO of punctuations:%d",pun);

    //code for problem f.
    for(i=0;i<len;i++)          //Here I made a 2D array from our main inputed 1D array to make easy solution for further problems.
    {
        if(a[i]==' '||a[i]=='\0')
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
        if((strcmp(arr[i],"a")==0)||(strcmp(arr[i],"A")==0)||(strcmp(arr[i],"an")==0)||(strcmp(arr[i],"An")==0)||(strcmp(arr[i],"the")==0)||(strcmp(arr[i],"The")==0))
        {
            ar++;
            printf("\n%s",arr[i]);
        }
    }
    printf("\nf.NO of Articles:%d\n",ar);

    //code for problem g.
    for(i=0;i<r;i++)
    {
        for(j=0;j<10;j++)
    	{
    		if(strcmp(arr[i],verb[j])==0)
    		{
    			printf(" %s", arr[i]);
    			vb++;
    			break;
			}
		}
    }
    printf("\ng.No of be verbs:%d",vb);

    //code for problem h.
    printf("\nh.Parts of Speech:");
    printf("\n\ti.Noun:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<50;j++)
    	{
    		if(strcmp(arr[i],verb[j])==0)
    		{
    		    for(k=0;k<14;k++)
    		    {
    		        if(strcmp(arr[i-1],pronoun[k])!=0)
    		        printf(" %s",arr[i-1]);
    		        break;
    		    }

			}
		}
    }
    printf("\n\tii.Pronoun:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<14;j++)
        {
            if(strcmp(arr[i],pronoun[j])==0)
            {
                printf(" %s",arr[i]);
                break;
            }
        }

    }
    printf("\n\tiii.Verb:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<50;j++)
        {
            if(strcmp(arr[i],verb[j])==0)
            {
                printf(" %s",arr[i]);
                break;
            }
        }

    }
    printf("\n\tiv.Adverb:");
    for(i=0;i<=r;i++)
    {
    	for(j=0;arr[i][j] != '\0';j++)
    	{
    		if(arr[i][j] == 'l' && arr[i][j+1] =='y')
    		printf(" %s", arr[i]);
		}
	}
    printf("\n\tv.preposition:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<50;j++)
        {
            if(strcmp(arr[i],preposition[j])==0)
            {
                printf(" %s",arr[i]);
                break;
            }
        }

    }
    printf("\n\tvi.conjunction:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<50;j++)
        {
            if(strcmp(arr[i],conjunction[j])==0)
            {
                printf(" %s",arr[i]);
                break;
            }
        }

    }
    printf("\n\tvii.interjection:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<50;j++)
        {
            if(strcmp(arr[i],interjection[j])==0)
            {
                printf(" %s",arr[i]);
                break;
            }
        }

    }


    return 0;
}

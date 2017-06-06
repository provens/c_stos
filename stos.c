#include <stdio.h>
#define N 5
 
struct stos
{
    int sts[N];
    int top;
};
typedef struct stos STOS;
STOS s;


void push ()
{
    int liczba;
    if (s.top==(N-1))
    {
        printf("\nStos jest pelny\n");
        return;
    }
    else
    {
        printf("\nCo dodajesz do stosu?\n : ");
        scanf("%d", &liczba);
        s.top=s.top + 1;
        s.sts[s.top]=liczba;
    }
    
}

int pop ()
{
    int liczba;
    if (s.top==-1)
    {
        printf("\nStos jest pusty\n");
        return(s.top);
    }
    else
    {
        liczba = s.sts[s.top];
        printf("\nWyrzucony ze stosu element to %d \n\n", s.sts[s.top]);
        s.top = s.top - 1;
    }
    return(liczba);
}

void pokaz ()
{
    int i;
    if (s.top==-1)
    {
        printf("---------------------------");
		printf("\nStos jest pusty\n");
		 printf("---------------------------\n\n");
        return;
    }
    else
    {
         printf("---------------------------");
		printf("\n Na stosie znajduje sie: \n\n\n");
		
        for (i=s.top;i>=0;i--)
        {
            printf("%d\n",s.sts[i]);
        }
        printf("---------------------------\n\n");
    }
    printf("\n");
}
int clear(){
	
	return s.top=-1;
} 

void isfull(){
	if (s.top==(N-1))
    {
        printf("\n\nStos jest pelny\n\n");
       }
       else
       printf("\n\nStos nie jest pelny\n\n");
} 
void isempty(){
if (s.top==-1)
            printf("\n\nStos jest pusty\n\n");
    else
    		printf("\n\nStos nie jest pusty\n\n");
} 

int main (void)
{
    int wybor;
    int menu=1;
    s.top=-1;
 
    printf("\n\nMenu\n\n");
    while(menu)
    {
    
        printf("1.POKAZ STOS \n");
        printf("2.PUSH \n");
        printf("3.POP \n");
        printf("4.CZYSC \n");
        printf("5.IsFull \n");
        printf("6.IsEmpty \n");
        printf("7.WYJSCIE \n\n");
       
        printf("Wybierz opcje: \n");
        scanf("%d", &wybor);
        switch (wybor)
        {
        case 1:
            pokaz();
           
            break;
        case 2:
           push();
           break;
		    
        case 3:
            pop();
            break;
        case 4:
			clear();
			break;    
        case 5:
            isfull();
			break;
		case 6:
            isempty();
			break;
		case 7:
            return 0;
        }
       
    
        
    
    }
}



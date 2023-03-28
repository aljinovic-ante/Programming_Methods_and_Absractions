/*
7. **Napisati program u kojem korisnik unosi podatke o položenim vježbama studenata.
Korisnik unosi broj vježbi, broj studenata, vrijednosti jednog po jednog studenta:
broj položenih vježbi i brojeve koji označavaju položenu vježbu. Za svakog studenta
u varijabli se postavljaju bitovi koji po poziciji odgovaraju broju položene vježbe. Na
temelju unesenih podataka izračunati sljedeće (obavezno korištenje bitovnih operatora):
(a) koliko studenata je riješilo sve vježbe,
(b) koje vježbe su riješili svi studenti,
(c) koje vježbe nije riješio nijedan student.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int brvj,brst,i,polvj;
    int b=0;
    int brojacsvevjezbe=0;
    int nijednavjezba=0;
    int usporedba;
    printf("unesi broj vjezbi\n");
    scanf_s("%d",&brvj);
    printf("unesi broj studenata\n");
    scanf_s("%d",&brst);
    
    int svevjezbe=(pow(2,brvj)-1);
    
    for(i=1;i<=brst;i++)
    {
        b=0;
        do{
            printf("koju vjezbu je %d. student rijesio?\n",i);
            scanf_s("%d",&polvj);
            
            if(polvj!=0)
                b|=(1<<(polvj-1));
            else
                break;
        
            
        }while(polvj!=0 || polvj>brvj);
        
        
        usporedba=(pow(2,brvj)-1);
        
        if(    (usporedba&b)   ==   usporedba    )
            brojacsvevjezbe++;
            
        svevjezbe=svevjezbe&b;
        nijednavjezba=nijednavjezba|b;
    }
    
    i=brvj-1;
    
    for(i; i>=0 ;--i)
             if(svevjezbe&(1<<i))
                {
                  printf("vjezbu broj %d su rijesili svi studenti\n",i+1);
                }
             else
                continue;
    
    i=brvj-1;
    
    for(i; i>=0 ;--i)
             if(nijednavjezba&(1<<i))
                {
                  continue;
                }
             else
                printf("vjezbu broj %d nitko nije rijesio\n",i+1);
    
                
                
    printf("%d studenta je rijesilo sve vjezbe\n",brojacsvevjezbe);
    

    
    return 0;
}
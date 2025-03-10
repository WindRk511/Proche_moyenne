/*Algorithme element_proche_moyenne
Variable n,i,vp,T[50]:entier;
         m,p,k,s:reel
debut 
    ecrire("Entrer la taille de tableau:");
    lire(n);

    tantque (n<1 ou n>50)
        afficher("Veuillez entrer une valeur entre 1 et 50:");
        lire(n);
    fintantque
    
    afficher("Entre les contenus du tableau:\n");
    s<-0;
    pour(i<-0;i<n;i++)
        afficher("T[",i,"]=");
        lire(T[i]);
        s=s+T[i];
    finpour

    m<-s/n;
    k<-m-T[0];
    si k<0 alors
        k=(-k);
    finsi
    pour(i<-1;i<n;i++)
        p<-m-T[i];
        si p<0 alors
            p<-(-p);
        finsi
        
        si p<k alors
            vp<-T[i];
        finsi    

        k<-p;
    finpour 
    
    afficher("L'element le plus proche de la moyenne est ",vp);
    
    
*/

//programme C

#include<stdio.h>

int main ()
{
    int n,i,vp,T[50];
    float m,p,s,k;
    
    printf("Entrer la taille de tableau:");
    scanf("%d",&n);

    while (n<1 || n>50) {
        printf("Veuillez entrer une valeur entre 1 et 50:");
        scanf("%d",&n);
    }
    
    printf("Entre les contenus du tableau:\n");
    s=0;
    for (i=0;i<n;i++) {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
        s=s+T[i];           //calcul somme des contenus du tableau
    }

    m=s/n;          //calcul moyenne
    k=m-T[0];       //calcul difference entre le moyenne et le contenu du tableau
    if (k<0) {
        k=(-k);
    }
    for (i=1;i<n;i++) {
        p=m-T[i];    //calcul autre difference entre le moyenne et le contenu du tableau    
       
        if (p<0) {
            p=(-p);
        }

        if (p<k) {     //comparaison entre les difference des contenus du tableau à la valeur du moyenne 
            vp=T[i];
        }  
        k=p;
    } 
    
    printf("L'element le plus proche de la moyenne est %d\n",vp);

    return (0);
}
    
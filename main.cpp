#include <iostream>
#include "CommandeFleur.cpp"

using namespace std;

enum autorisation {gestionnaire=1, chauffeur, administrateur};

struct conducteur{
    Funeraire fun;
    Entreprise ent;
    Simple simp;

}chauffeur1, chauffeur2, chauffeur3, chauffeur4, chauffeur5 ;
//fonction pour tester et completer les differents heures de livraison
float lesHeures[150];
enum lesChauffeurs {ch1=1, ch2, ch3, ch4, ch5 };
int main()
{
    void setHeureLivraisonFun(int nbr1,int nbr2,float tab[]);
    void setHeureLivraisonEnt(int nbr1,int nbr2,float tab[]);
    void setHeureLivraisonSimple(int nbr1,int nbr2,float tab[]);
    void afficherlesHeures(int nbr1,int nbr2, float tab[],char typE[]);
    int entrEnombreCommande();
    int i;
    cout <<"bienvenu a livreur-professionel"<< endl;
    cout <<"securite et rapidite nous caracterise"<< endl;
    cout<<"si vous etes gestionnaire entrer 1"<<endl;
    cout<<"si vous etes chauffeur entrer 2"<<endl;

    cin>>i;
    switch(i){
    case gestionnaire:
        cout<<"veillez distribuez les commandes aux 5 chauffeurs, chacun aura 8 commandes a livrer"<<endl;

        cout<<"nous allons ecrire 15.30 heure pour signifier 15h30..."<<endl;
        cout<<endl;
        cout<<"pour le chauffeur 1 donner les nombres de commandes funeraires"<<endl;
        chauffeur1.fun.setFuneraire_A_Livr(entrEnombreCommande());
        setHeureLivraisonFun(0,chauffeur1.fun.getNbreFuneraire(),lesHeures);


        cout<<"pour le chauffeur 1,donner le nombre des commandes pour Entreprise :"<<endl;
        chauffeur1.ent.setNbrEntreprise(entrEnombreCommande());
        setHeureLivraisonEnt(10,10+chauffeur1.ent.getNbreEntreprise(),lesHeures);

        cout<<"pour le chauffeur 1,donner le nombre des commandes Simple :"<<endl;
        chauffeur1.simp.setNbreCommandSimple(entrEnombreCommande());
        setHeureLivraisonSimple(20,20+chauffeur1.simp.getNbreCommandSimple(),lesHeures);


        cout<<"Entrer les donner pour le chauffeur 2 svp :"<<endl;


        cout<<"pour le chauffeur 2,donner le nombre des commandes funeraires"<<endl;
        chauffeur2.fun.setFuneraire_A_Livr(entrEnombreCommande());
        setHeureLivraisonFun(30,30+chauffeur2.fun.getNbreFuneraire(),lesHeures);

        cout<<"pour le chauffeur2,donner le nombre des commandes pour Entreprise"<<endl;
        chauffeur2.ent.setNbrEntreprise(entrEnombreCommande());
        setHeureLivraisonEnt(40,40+chauffeur2.ent.getNbreEntreprise(),lesHeures);

        cout<<"pour le chauffeur 2,donner le nombre des commandes Simple"<<endl;
        chauffeur2.simp.setNbreCommandSimple(entrEnombreCommande());
        setHeureLivraisonSimple(50,50+chauffeur2.simp.getNbreCommandSimple(),lesHeures);





        cout<<"pour le chauffeur 3,donner le nombre des commandes funeraire"<<endl;
        chauffeur3.fun.setFuneraire_A_Livr(entrEnombreCommande());
        setHeureLivraisonFun(60,60+chauffeur3.fun.getNbreFuneraire(),lesHeures);

        cout<<"pour le chauffeur 3,donner le nombre des commandes pour Entreprise"<<endl;
        chauffeur3.ent.setNbrEntreprise(entrEnombreCommande());
        setHeureLivraisonEnt(70,70+chauffeur3.ent.getNbreEntreprise(),lesHeures);

        cout<<"pour le chauffeur 3,donner le nombre des commandes Simple"<<endl;
        chauffeur3.simp.setNbreCommandSimple(entrEnombreCommande());
        setHeureLivraisonSimple(80,80+chauffeur3.simp.getNbreCommandSimple(),lesHeures);





        cout<<"pour le chauffeur 4,donner le nombre des commandes funeraire"<<endl;
        chauffeur4.fun.setFuneraire_A_Livr(entrEnombreCommande());
        setHeureLivraisonFun(90,90+chauffeur4.fun.getNbreFuneraire(),lesHeures);

        cout<<"pour le chauffeur 4,donner le nombre des commandes pour Entreprise"<<endl;
        chauffeur4.ent.setNbrEntreprise(entrEnombreCommande());
        setHeureLivraisonEnt(100,100+chauffeur4.ent.getNbreEntreprise(),lesHeures);

        cout<<"pour le chauffeur 4,donner le nombre des commandes Simple"<<endl;
        chauffeur4.simp.setNbreCommandSimple(entrEnombreCommande());
        setHeureLivraisonSimple(110,110+chauffeur4.simp.getNbreCommandSimple(),lesHeures);




        cout<<"pour le chauffeur 5,donner le nombre des commandes funeraire :"<<endl;
        chauffeur5.fun.setFuneraire_A_Livr(entrEnombreCommande());
        setHeureLivraisonFun(120,120+chauffeur5.fun.getNbreFuneraire(),lesHeures);


        cout<<"pour ;le chauffeur 5,donner le nombre des commandes pour Entreprise :"<<endl;
        chauffeur5.ent.setNbrEntreprise(entrEnombreCommande());
        setHeureLivraisonEnt(130,130+chauffeur5.ent.getNbreEntreprise(),lesHeures);

        cout<<"pour le chauffeur 5 donner le nombre des commandes Simple :"<<endl;
        chauffeur5.simp.setNbreCommandSimple(entrEnombreCommande());
        setHeureLivraisonSimple(140,140+chauffeur1.simp.getNbreCommandSimple(),lesHeures);







    case chauffeur:
        cout<<"si vous etes chauffeur, entrez votre identifiant, il doit etre compris entre 1 et 5"<<endl;
        switch(entrEnombreCommande()){
        case ch1:
            cout<<"voici les commandes que vous avez a livrer,et les heures des livraison :"<<endl;
            cout<<chauffeur1.fun.getNbreFuneraire()<< "Commande funeraire"<<endl;
            afficherlesHeures(0,chauffeur1.fun.getNbreFuneraire(), lesHeures,"funeraire");
            cout<<endl;
            cout<<chauffeur1.ent.getNbreEntreprise()<<" Commande pour entreprise "<<endl;
            afficherlesHeures(10,10+chauffeur1.ent.getNbreEntreprise(), lesHeures,"Entreprise");
            cout<<endl;
            cout<<chauffeur1.simp.getNbreCommandSimple()<<" commandes simples"<<endl;
            afficherlesHeures(20,20+chauffeur1.simp.getNbreCommandSimple(),lesHeures,"simple");
            cout<<endl;
        break;
        case ch2:
            cout<<"voici les commandes que vous avez a livrer,et les heures des livraison :"<<endl;
            cout<<chauffeur2.fun.getNbreFuneraire()<<" Commande funeraire "<<endl;
            afficherlesHeures(30,30+chauffeur2.fun.getNbreFuneraire(),lesHeures,"funeraille");
            cout<<endl;
            cout<<chauffeur2.ent.getNbreEntreprise()<<" Commande pour entreprise "<<endl;
            afficherlesHeures(40,40+chauffeur2.ent.getNbreEntreprise(),lesHeures,"Entreprise");
            cout<<endl;
            cout<<chauffeur2.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
            afficherlesHeures(50,50+chauffeur2.simp.getNbreCommandSimple(),lesHeures,"Simple");
            cout<<endl;
        break;
        case ch3:
            cout<<"voici les commandes que vous avez a livrer,et les heures des livraison :"<<endl;
            cout<<chauffeur3.fun.getNbreFuneraire()<<" Commande funeraire, "<<endl;
            afficherlesHeures(60,60+chauffeur3.fun.getNbreFuneraire(),lesHeures,"funeraire");
            cout<<endl;
            cout<<chauffeur3.ent.getNbreEntreprise()<<"Commande pour entreprise, "<<endl;
            afficherlesHeures(70,70+chauffeur3.ent.getNbreEntreprise(),lesHeures,"Entreprise");
            cout<<endl;
            cout<<chauffeur3.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
            afficherlesHeures(80,80+chauffeur3.simp.getNbreCommandSimple(),lesHeures,"Simple");
            cout<<endl;
        break;
        case ch4:
            cout<<"voici les commandes que vous avez a livrer,et les heures des livraison :"<<endl;
            cout<<chauffeur4.fun.getNbreFuneraire()<<" Commande funeraire "<<endl;
            afficherlesHeures(90,90+chauffeur4.fun.getNbreFuneraire(),lesHeures,"Funeraire");
            cout<<endl;
            cout<<chauffeur4.ent.getNbreEntreprise()<<" Commande pour entreprise,"<<endl;
            afficherlesHeures(100,100+chauffeur4.ent.getNbreEntreprise(),lesHeures,"entreprises");
            cout<<endl;
            cout<<chauffeur4.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
            afficherlesHeures(110,110+chauffeur4.simp.getNbreCommandSimple(),lesHeures,"Simple");
            cout<<endl;
        break;
        case ch5:
            cout<<"voici les commandes que vous avez a livrer,et les heures des livraison :"<<endl;
            cout<<chauffeur5.fun.getNbreFuneraire()<<" Commande funeraire, "<<endl;
            afficherlesHeures(120,120+chauffeur5.fun.getNbreFuneraire(),lesHeures,"Funeraire");
            cout<<endl;
            cout<<chauffeur5.ent.getNbreEntreprise()<<"Commande pour entreprise, "<<endl;
            afficherlesHeures(130,130+chauffeur5.ent.getNbreEntreprise(),lesHeures,"Entreprise");
            cout<<endl;
            cout<<chauffeur5.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
            afficherlesHeures(140,140+chauffeur1.simp.getNbreCommandSimple(),lesHeures,"Simple");
            cout<<endl;
        break;
        default :
            cout<<"vous avez tapez le mauvais chiffre"<<endl;
        break;
        }
        cout<<"voudrier vous afficher le rapport de l administrateur? tapez 1 si oui vous voulez le voir"<<endl;
        if(entrEnombreCommande()==1){
            cout<<"le voici "<<endl;
        }else{break;}

        case administrateur:
            cout<<"le chauffeur1 doit livrer :"<<endl;
        cout<<chauffeur1.fun.getNbreFuneraire()<< "Commande funeraire"<<endl;
        afficherlesHeures(0,chauffeur1.fun.getNbreFuneraire(), lesHeures,"funeraire");
        cout<<endl;
        cout<<chauffeur1.ent.getNbreEntreprise()<<" Commande pour entreprise "<<endl;
        afficherlesHeures(10,10+chauffeur1.ent.getNbreEntreprise(), lesHeures,"Entreprise");
        cout<<endl;
        cout<<chauffeur1.simp.getNbreCommandSimple()<<" commandes simples"<<endl;
        afficherlesHeures(20,20+chauffeur1.simp.getNbreCommandSimple(),lesHeures,"simple");
        cout<<endl;cout<<endl;

        cout<<"le chauffeur2 a :"<<chauffeur2.fun.getNbreFuneraire()<<" Commande funeraire "<<endl;
        afficherlesHeures(30,30+chauffeur2.fun.getNbreFuneraire(),lesHeures,"funeraille");
        cout<<endl;
        cout<<chauffeur2.ent.getNbreEntreprise()<<" Commande pour entreprise "<<endl;
        afficherlesHeures(40,40+chauffeur2.ent.getNbreEntreprise(),lesHeures,"Entreprise");
        cout<<endl;
        cout<<chauffeur2.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
        afficherlesHeures(50,50+chauffeur2.simp.getNbreCommandSimple(),lesHeures,"Simple");
        cout<<endl;
        cout<<endl;

        cout<<"le chauffeur3 a :"<<chauffeur3.fun.getNbreFuneraire()<<" Commande funeraire, "<<endl;
         afficherlesHeures(60,60+chauffeur3.fun.getNbreFuneraire(),lesHeures,"funeraire");
         cout<<endl;
        cout<<chauffeur3.ent.getNbreEntreprise()<<"Commande pour entreprise, "<<endl;
        afficherlesHeures(70,70+chauffeur3.ent.getNbreEntreprise(),lesHeures,"Entreprise");
        cout<<endl;
        cout<<chauffeur3.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
        afficherlesHeures(80,80+chauffeur3.simp.getNbreCommandSimple(),lesHeures,"Simple");
        cout<<endl;cout<<endl;

         cout<<"le chauffeur4 a :"<<chauffeur4.fun.getNbreFuneraire()<<" Commande funeraire "<<endl;
         afficherlesHeures(90,90+chauffeur4.fun.getNbreFuneraire(),lesHeures,"Funeraire");
         cout<<endl;
        cout<<chauffeur4.ent.getNbreEntreprise()<<" Commande pour entreprise,"<<endl;
        afficherlesHeures(100,100+chauffeur4.ent.getNbreEntreprise(),lesHeures,"entreprises");
        cout<<endl;
        cout<<chauffeur4.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
        afficherlesHeures(110,110+chauffeur4.simp.getNbreCommandSimple(),lesHeures,"Simple");
        cout<<endl;cout<<endl;

         cout<<"le chauffeur5 a : "<<chauffeur5.fun.getNbreFuneraire()<<" Commande funeraire, "<<endl;
         afficherlesHeures(120,120+chauffeur5.fun.getNbreFuneraire(),lesHeures,"Funeraire");
         cout<<endl;
        cout<<chauffeur5.ent.getNbreEntreprise()<<"Commande pour entreprise, "<<endl;
        afficherlesHeures(130,130+chauffeur5.ent.getNbreEntreprise(),lesHeures,"Entreprise");
        cout<<endl;
        cout<<chauffeur5.simp.getNbreCommandSimple()<<" commandes simple"<<endl;
        afficherlesHeures(140,140+chauffeur1.simp.getNbreCommandSimple(),lesHeures,"Simple");
        cout<<endl;cout<<endl;
            break;
    default:
        cout<<"Vous n etes pas de l entreprise"<<endl;
        break;
    }

    return 0;
}




 void setHeureLivraisonFun(int nbr1,int nbr2,float tab[]){
        float heure;
        cout<<"A quel heure voudriez vous qu on vous livre votre commande? :"<<endl;
        for(int i=nbr1;i<nbr2;i++){

            do{
                cout<<"mettez l heure "<<i-nbr1+1<<" : "<<endl;
                cin>>heure;
            }while(heure<=14 || heure>=18);
            tab[i]=heure;
        }
}
void setHeureLivraisonEnt(int nbr1,int nbr2,float tab[]){
        float heure2;
        cout<<"A quel heure voudrier vous qu on vous livre votre commande? :"<<endl;
        for(int i=nbr1;i<nbr2;i++){

            do{
                cout<<"mettez l heure "<<i-nbr1+1<<" : "<<endl;
                cin>>heure2;
            }while(heure2<=14 || heure2>=16);
            tab[i]=heure2;
        }
}
void setHeureLivraisonSimple(int nbr1,int nbr2,float tab[]){
        float heure1;

        cout<<"A quel heure voudrier vous qu on vous livre votre commande? :"<<endl;
        for(int i=nbr1;i<nbr2;i++){

            do{
                cout<<"mettez l heure "<<i-nbr1+1<<" : "<<endl;
                cin>>heure1;
            }while(heure1<=8||heure1>=18);
            tab[i]=heure1;
        }
}
void afficherlesHeures(int nbr1,int nbr2, float tab[],char typE[]){
    cout<<"les commandes "<<typE<<"doivent etre livree a : "<<endl;
    for(int i=nbr1;i<nbr2;i++){
        cout<<"la "<<i-nbr1+1<<" ieme commande est a livrer a "<<(int)tab[i]<<"h"<<(tab[i]-(int)tab[i])*100<<" min"<<endl;

    }
}
int entrEnombreCommande(){
        int funer1;
        cin>> funer1;
        return funer1;
}

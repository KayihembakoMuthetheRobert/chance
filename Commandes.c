
class TypeCommand{
protected:
    int nbreCommandT;
public:
    int getNbreCommandT(){
        return nbreCommandT;
    }
    void setNbreCommandT(int nbreC){
        nbreCommandT=nbreC;
    }
    void heureDeLivraison(){
        cout << "vous devez livrer toutes vos commandes entre 14h et 18h"<<endl;
    }
};
class Funeraire:public TypeCommand{
private:
    //permettre au gestionnaire d attribuer les nmbre de commande funeraire a faire une fois pour toute
    //penser a permettre aussi au chauffeur , une fois la commande faite , de confirmer en faisant diminuer l nbre funeraire
    int nbreFuneraire;
    int heureLiv;
public:
    void setHeureLivraison(int heureFuner){
        heureLiv=heureFuner;
    }
    void heureDeLivraison(){
        cout<<"votre livraison est privue a :"<<heureLiv<<endl;
    }
    void type(){
        cout<<"ceci est une commande pour deuil"<<endl;
    }
    // ici le chauffeur verra combien des commandes lui reste a livrer
    int getNbreFuneraire(){
        return nbreFuneraire;
    }
    // une fois la commande faites , le chauffeur appelera cette methode pour signifier que la commande a ete livrE
    void funeraireFait(){
        nbreFuneraire--;
    }
    //ici le gestionnaire donne le nombre des funeraire a livre
    void setFuneraire_A_Livr(int nbrFuner){
        nbreFuneraire=nbrFuner;
    }
};
class Entreprise: public TypeCommand{
private:
    int nbreEntreprise;
public:
    // cet accesseur permettra au chauffeur de voir combien des livraison il lui reste
    int getNbreEntreprise(){
        return nbreEntreprise;
    }
    void entrepriseFait(){
        nbreEntreprise--;
    }
    //gestionnaire donne les nombre des commande entreprise... ou sinon penser  au gestionnaire la gestion de cette classe
    //et au chauffeur le main
    void setNbrEntreprise(int nbreEntrep){
        nbreEntreprise=nbreEntrep;
    }
    void type(){
        cout<<"ceci est une commande pour entreprise"<<endl;
    }
};
class Simple:public TypeCommand{
private:
    int nbreCommandSimple;

public:
    // accesseur pour le chauffeur
    int getNbreCommandSimple(){
        return nbreCommandSimple;
    }
    //accesseur chauffeur produit livree
    void commandSimpleFait(){
        nbreCommandSimple--;
    }
    //accessuer gestionnaire
    void setNbreCommandSimple(int commandSimpl){
        nbreCommandSimple=commandSimpl;
    }
    void type(){
        cout<<"ceci est une commande simple"<<endl;
    }
};
//Dans le programme principale penser a utiliser le swich pour le gestionnaire et la chauffeur .merci

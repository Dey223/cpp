#include <iostream>
#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    Voiture() 
        : marque("Inconnu"), modele("Inconnu"), annee(0), kilometrage(0.0f), vitesse(0.0f) {}

    Voiture(const std::string& ma, const std::string& mo, int a, float km, float v)
        : marque(ma), modele(mo), annee(a), kilometrage(km), vitesse(v) {}

    void accelerer(float valeur) {
        vitesse += valeur;
        std::cout << "La voiture accélère. Vitesse actuelle : " << vitesse << " km/h" << std::endl;
    }
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) vitesse = 0;
        std::cout << "La voiture freine. Vitesse actuelle : " << vitesse << " km/h" << std::endl;
    }

    void afficherInfo() const {
        std::cout << "Marque : " << marque << std::endl;
        std::cout << "Modèle : " << modele << std::endl;
        std::cout << "Année : " << annee << std::endl;
        std::cout << "Kilométrage : " << kilometrage << " km" << std::endl;
        std::cout << "Vitesse : " << vitesse << " km/h" << std::endl;
    }

    void avancer(float distance) {
        kilometrage += distance;
        std::cout << "La voiture avance. Kilométrage actuel : " << kilometrage << " km" << std::endl;
    }

   
    ~Voiture() {
        std::cout << "La voiture est détruite." << std::endl;
    }
};

int main() {
    Voiture voiture1;
    voiture1.afficherInfo();
    Voiture voiture2("Toyota", "Corolla", 2021, 15000.0f, 80.0f);
    voiture2.afficherInfo();
    voiture2.accelerer(20.0f);
    voiture2.freiner(50.0f);

    voiture2.avancer(100.0f);

    return 0;
}

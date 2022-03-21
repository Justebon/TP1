#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <string>

class Vecteur
{
  public :
  Vecteur(); //Constructeur par défaut
  Vecteur(float x, float y); //Constructeur
  void affiche();
  float norme();
  Vecteur *addition(const Vecteur& v);
  float get_x() const;
  float gey_y() const;

  protected :
  float x;
  float y;

}

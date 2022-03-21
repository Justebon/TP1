#include <cmath>

Vecteur::Vecteur
{
  this->x=0;
  this->y=0;
}

Vecteur::Vecteur(float x_init, float y_init)
{
  this->x=x_init;
  this->y=y_init;
}

void affiche()
{
  std::cout << "Coordonnée x : " + this.x + '\n';
  std::cout << "Coordonnée y : " + this.y + '\n';
}

float norme()
{
  float norme = sqrt(this->x^2 + this->y^2);
  return norme;
}

Vecteur *addition(const Vecteur& v)
{
  float x_res = this->x + v->x;
  float y_res = this->y + v->y;
  Vecteur result = Vecteur(x,y);
  return result;
}

float get_x() const;
{
  return this->x;
}

float gey_y() const;
{
  return this->y;
}

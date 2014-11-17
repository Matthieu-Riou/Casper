#ifndef TORE_HPP
#define TORE_HPP

#include <vector>
#include "AbstractCell.hpp"

class Tore
{
  private:
    std::vector<std::vector<AbstractCell*> > cells;
    
  public:
    Tore(int longueur, int largeur);
};

#endif //TORE_HPP
#ifndef CELL_HPP
#define CELL_HPP

#include <string>
#include "StateCell.hpp"

class Cell
{
  private:
    Cell* north;
    Cell* northEast;
    Cell* east;
    Cell* southEast;
    Cell* south;
    Cell* southWest;
    Cell* west;
    Cell* northWest;
    
    StateCell* state;
    
  public:
    Cell(StateCell* s);
    
    std::string getStringState() const;
    
    void iterate();
    bool isState(StateCell* state) const;
    
    const StateCell& getState() const;
    
    const Cell& getNorth() const;
    const Cell& getNorthEast() const;
    const Cell& getEast() const;
    const Cell& getSouthEast() const;
    const Cell& getSouth() const;
    const Cell& getSouthWest() const;
    const Cell& getWest() const;
    const Cell& getNorthWest() const;
  
    void setNorth(Cell* cell);
    void setNorthEast(Cell* cell);
    void setEast(Cell* cell);
    void setSouthEast(Cell* cell);
    void setSouth(Cell* cell);
    void setSouthWest(Cell* cell);
    void setWest(Cell* cell);
    void setNorthWest(Cell* cell);
};

#endif //CELL_HPP

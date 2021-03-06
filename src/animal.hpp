#ifndef ALIFE_ANIMAL_HPP
#define ALIFE_ANIMAL_HPP

#include <list>

#include "brain.hpp"
#include "environment.hpp"

class Animal
{
    private:
        Brain m_brain;
        std::string m_genome;
        double m_energy;
        // spatial coordinates
        double m_x;
        double m_y;
        double m_dir;

    public:
        Animal(const std::string &genome, double x, double y, double dir);
        std::vector<Pheromone> step(const std::list<Pheromone> &env);
        void feed(double amount);
        void hurt(double amount);
        double get_x() const;
        double get_y() const;
};

#endif // ALIFE_ANIMAL_HPP

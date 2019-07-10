//
// Created by Peti on 2019. 07. 10..
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal
{
public:
    Animal();
    Animal(int hunger, int thirst);

    void eat();
    void drink();
    void play();


    int getHunger() const;

    void setHunger(int hunger);

    int getThirst() const;

    void setThirst(int thirst);





private:
    int _hunger;
    int _thirst;

};


#endif //ANIMAL_ANIMAL_H

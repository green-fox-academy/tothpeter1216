//
// Created by Peti on 2019. 07. 10..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter
{
public:

    Counter();

    Counter(int value);

    void add(int a);

    void add();

    void reset();

    int get() const;

    void set(int value);

    int originalValue;

private:
    int _value;
};


#endif //COUNTER_COUNTER_H

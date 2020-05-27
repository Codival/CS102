#include "lab.h"
double rnd(double d)
{
    d=d*100;
    d=std::round(d);
    d=d/100;
    return d;
}

void cb_Calculate(Fl_Button*,void*)
{
    p->value(rnd(f(r->value(),a->value(),ppy->value(),n->value())));
}

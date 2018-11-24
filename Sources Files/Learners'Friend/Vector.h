#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        int x1, y1, z1, x2, y2, z2;

    protected:
        int option;
    public:
        Vector();
        void Basic_idea_about_Vector();
        void vector_additon();
        void vector_subtraction();
        void scalar_multiplication();
        void vector_multiplication();
        void get_vector();
};

#endif // VECTOR_H

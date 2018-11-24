#ifndef NEWTONIANMECHANICS_H
#define NEWTONIANMECHANICS_H


class NewtonianMechanics
{
    public:
        NewtonianMechanics();
        ~NewtonianMechanics();
        float force;
        float mass;
        float accel;
        float rad_of_gyaration;
        float moment_of_inertia;
        float angular_mass;
        float distance;
    protected:
        int option;
       private:
        void Basic_theories_of_mechanics();
        void Newtons_laws();
        void radius_of_gyration();
        void angular_momentum();
        void torque();
        void centrifugal_force();

};

#endif // NEWTONIANMECHANICS_H

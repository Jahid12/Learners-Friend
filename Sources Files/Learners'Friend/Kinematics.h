#ifndef KINEMATICS_H
#define KINEMATICS_H


class Kinematics
{
    public:
        Kinematics();
        ~Kinematics();
        void basic_theories_of_kinematics();
        void constant_velocity();
        void acceleration();
        void angular_velocity();



    protected:
        int option;
    private:

        float distance;
        float initial_veclocity;
        float final_velocity;
        float accel;
        float time;
        float ang_rotation;
        float ang_velocity;

};

#endif // KINEMATICS_H

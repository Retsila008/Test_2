#ifndef DISK_H
#define DISK_H

// Create disk class
class Disk {
    public:
        // Member functions
        Disk(double x, double y, double r);
        void move(double dx, double dy);
        double distance(Disk &d);

        // Member Variables
        double x;
        double y;
        double r;
};

#endif
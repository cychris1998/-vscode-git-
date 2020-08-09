class Box{
    public:
        double length;
        double breadth;
        double height;

        double getVolume();

        double getvolume(){
            return length * breadth * height;
        }
};
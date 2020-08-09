class Box{
    public:
        double length;
        double breadth;
        double height;

        double getVolume();
        bool compare(Box box){
            return getVolume() > box.getVolume;
        }
};
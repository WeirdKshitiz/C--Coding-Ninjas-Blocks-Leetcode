template <typename T,typename V> //TELLING COMPILER ki abhi hum T ko as a temporary datatype use kr rhe hain

class Pair{
    T x;
    V y;

    public:

    void setX(T x){
        this->x=x;
    }

    T getX(){
        return x;
    }

    void setY(V y){
        this->y=y;
    }

    V getY(){
        return y;
    }
};
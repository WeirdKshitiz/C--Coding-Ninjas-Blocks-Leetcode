#include <iostream>
// #include "hero.cpp"
using namespace std;

class Hero{


    //properties
    // char name[100];
    private:
    int health;
        public:
        char *name;
    char level;
    static int timeToComplete;

//constructor
Hero(){
    cout<<"Constructor Called"<<endl;
    name=new char[100];
}

//PARAMETERISED CONSTRUCTOR
Hero(int health){
    cout<<"this-> "<<this<<endl;
   this-> health=health;
}

Hero(int health,int level){
    cout<<"this-> "<<this<<endl;
    this->level=level;
   this-> health=health;
}

//copy constructor
Hero(Hero& temp){
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;

    this->health=temp.health; //statically allocated hai isliye dot operator aaya
    this->level=temp.level;

}

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"health"<<this->health<<" ,";
        cout<<"level"<<this->level<<" ]";
        cout<<endl<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
      
        health=h;
        
    }

    void setLevel(char ch){
        level=ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

static int random(){
   return timeToComplete;
}


    //destructor
    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }

};
//static keyword
int Hero::timeToComplete=5;

int main(){

//static keyword
// cout<<Hero::timeToComplete<<endl;

//static function
cout<<Hero::random()<<endl;





// -------


// //Static
// Hero a;

// //Dynamic
// Hero *b=new Hero();

// //manually calling destructor
// delete b;



// Hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('D');
// char name[7]="Babbar";
// hero1.setName(name);

// hero1.print();

// //use defau;t copy constructor
// Hero hero2(hero1);
// hero2.print();
// // Hero hero2=hero1;

// hero1.name[0]='G';
// hero1.print();

// hero2.print();


// hero1=hero2;
// hero1.print();
// hero2.print();



// //copy constructor
// // Hero suresh(70,'C');
// // suresh.print();
// // // suresh.setHealth(70);
// // // suresh.setLevel('C');

// // //copy constructor
// // Hero R(suresh);
// // R.print();


// //object created statically
// // Hero ramesh;
// // cout<<"ADDRESS OF RAMESH "<<&ramesh<<endl;
// // ramesh.print();
// // //dynamically
// // Hero *h=new Hero;
// // h->print();

// // Hero temp(22,'B');
// // temp.print();



// //Static allocation
// // Hero a;
// // cout<<"Level is "<<a.level<<endl;
// // cout<<"health is "<<a.getHealth()<<endl;


// // //dynamic allocation
// // Hero *b=new Hero;
// // cout<<"Level is "<<(*b).level<<endl;
// // cout<<"health is "<<(*b).getHealth()<<endl;

// //creation of object
// // Hero h1;
// // Hero ramesh;

// // cout<<"Ramesh health is"<<ramesh.getHealth()<<endl;

// // //use of setter
// // ramesh.health=70;
// // ramesh.level='A';

// // cout<<"health is:"<<ramesh.health<<endl;
// // cout<<"level is:"<<ramesh.level<<endl;

// // // cout<<"size: "<<sizeof(h1)<<endl;
// // cout<<endl;
// return 0;
}
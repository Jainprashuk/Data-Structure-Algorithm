// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class Animal{
    public:
    int Id ;
    char Gender;
    
    void SetName(string Name){
        this->Name = Name;
    }
    
    string GetName(){
        return Name;
    }
    
    Animal(){
        cout<<"Default Constructor Called"<<endl;
    }
    
    Animal(int Id , char Gender , string Name){
        this->Id = Id;
        this->Gender = Gender;
        this->Name = Name;
        cout<<"Parameterised constructor called"<<endl;
    }
    
    Animal( Animal& otherAnimal) {
        this->Id = otherAnimal.Id;
        this->Gender = otherAnimal.Gender;
        this->Name = otherAnimal.Name;
        cout << "Copy constructor called";
    }
    
    ~Animal(){
        cout<<"Destructor Called ";
    }
    
    private:
    string Name ;
    
    
    
};

int main() {
    
    // Animal Tiger;
    // Tiger.Id = 1;
    // cout<<Tiger.Id;
    // Tiger.SetName("SherHuMe");
    // Tiger.GetName();
    
    // Animal *Monkey = new Animal;
    // Monkey->Id = 2;
    // cout<<Monkey->Id;
    // Monkey->SetName("BandarHuMe");
    // Monkey->GetName();
    
    
    // Animal Donkey;
    // Animal Donkey(2,'M',"gadha");
    // cout<<Donkey.Id<<" "<<Donkey.Gender<<" "<<Donkey.GetName();
    
    // Animal *Donkey = new Animal;
    // Animal *Donkey = new Animal(2,'M',"gadha");
    // cout<<Donkey->Id<<" "<<Donkey->Gender<<" "<<Donkey->GetName();
    
    
    // Animal DonkeyCopy = Donkey; // Creating a copy using the copy constructor
    // Animal DonkeyCopy(Donkey);
    // cout << DonkeyCopy.Id << " " << DonkeyCopy.Gender << " " << DonkeyCopy.GetName() << endl;


    // delete Donkey;
    
    
    
    
    
    return 0;
}
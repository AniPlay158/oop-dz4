#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

class Human // ËÞÄÈÍÀ
{
private:
    float growth;
    string hair_color;
    string name;
    string gender;
    int age;
    string laugh;
    string massage;
    bool tshirts;
    string color_tshorts;
    int energy;
    int hungry;

public:
    bool sits;

    void SetGrowth(float growth)
    {
        if (this->growth > 0 && growth <= 50)
        {
            this->growth = growth;
        }
        else
            cout << "Ви не можете встановити такий рівень голоду (1 - 50)";
    }
    float GetGrowth() const
    {
        return growth;
    }

    void SetHairColor(string hair_color)
    {
        if (this->hair_color != "white")
        {
            this->hair_color = hair_color;
        }
        else
            cout << "Ви не можете встановити такий колір волосся!";
    }
    string GetHairColor() const
    {
        return hair_color;
    }

    void SetName(string name)
    {
        if (this->name != " ")
        {
            this->name = name;
        }
        else
            cout << "Ви не можете вписати таке ім'я!";
    }
    string GetName() const
    {
        return name;
    }

    void SetGender(string gender)
    {
        if (this->gender != "male" || this->gender != "female")
        {
            this->gender = gender;
        }
        else
            cout << "Немає такого гендеру!";
    }
    string GetGender() const
    {
        return gender;
    }

    void SetAge(int age)
    {
        if (this->age > 1 && age < 99)
        {
            this->age = age;
        }
        else
            cout << "Не можливе значення!";
    }
    int GetAge() const
    {
        return age;
    }

    void SetLaugh(string laugh)
    {
        if (this->laugh != " ")
        {
            this->laugh = laugh;
        }
        else
            cout << "Це не сміх!";
    }
    string GetLaugh() const
    {
        return laugh;
    }

    void SetMassage(string massage)
    {
        if (this->massage != " ")
        {
            this->massage = massage;
        }
        else
            cout << "Це не повідомлення!";
    }
    string GetMassage() const
    {
        return massage;
    }

    void SetEnergy(int energy)
    {
        if (this->energy > 0 && this->energy <= 100)
        {
            this->energy = energy;
        }
        else
            cout << "Це не повідомлення!";
    }
    int GetEnergy() const
    {
        return energy;
    }

    void SetHungry(int hungry)
    {
        if (this->hungry > 0 && this->hungry <= 100)
        {
            this->hungry = hungry;
        }
        else
            cout << "Це не повідомлення!";
    }
    int GetHungry() const
    {
        return hungry;
    }

    void Sits()
    {
        cout << name << " сидить..." << endl;
        sits = true;
        if (this->hungry < 90 && this->energy > 0)
        {
            this->hungry += 5;
            this->energy -= 1;
            return;

        }
        else
            cout << "Хочу їсти" << endl;
    }
    void Drink(string liquid)
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << name << " п'є..." << liquid << endl;
            this->energy -= 20;
            this->hungry -= 10;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Say(string nick)
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << "Хей!" << nick << " хочешь їсти?" << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Laugh()
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << laugh << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void ToFeed()
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << name << " годує... " << endl;
            this->energy -= 10;
            this->hungry += 5;
            return;
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Print()
    {
        cout << "Людинa: " << endl;
        cout << "Ім'я:" << name << endl;
        cout << "Вік:" << age << endl;
        cout << "Енергія: " << energy << "%" << endl;
        cout << "Голод: " << hungry << "%" << endl;
    }
};
class ROOM // Ê²ÌÍÀÒÀ
{

private:
    int count_room = 1;
    float height = 3; // m
    float width = 5; //m
    int count_angle = 4;
    string color_wall = "green";
    bool stan_room = true;
public:
    string room_closed;


    void SetCountRoom(int count_room)
    {
        if (this->count_room > 0)
        {
            this->count_room = count_room;
        }
        else
            cout << "Не можливе число!";
    }
    int GetCountRoom() const
    {
        return count_room;
    }

    void SetHeight(float height)
    {
        if (this->height > 0)
        {
            this->height = height;
        }
        else
            cout << "Не можливе число!";
    }
    int GetHeight() const
    {
        return height;
    }

    void SetWidth(float width)
    {
        if (this->width > 0)
        {
            this->width = width;
        }
        else
            cout << "Не можливе число!";
    }
    float GetWidth() const
    {
        return width;
    }

    void SetCountAngle(float count_angle)
    {
        if (this->count_angle > 4)
        {
            this->count_angle = count_angle;
        }
        else
            cout << "Не можливе число!";
    }
    float GetCountAngle() const
    {
        return count_angle;
    }

    void SetColorWall(string color_wall)
    {
        if (this->color_wall != " ")
        {
            this->color_wall = color_wall;
        }
        else
            cout << "Не можливo!";
    }
    string GetColorWall() const
    {
        return color_wall;
    }

    void TheRoomIsVentilated()
    {
        cout << "кімната провітрюється..." << endl;
    }
    void TheRoomIsCleaned()
    {
        cout << "кфмната прибирається...." << endl;
    }
    void TheRoomIsClosed(Human human)
    {
        if (stan_room < false)
        {
            cout << "в замкнутій кімнаті..." << endl;
            human.Sits();
            return;
        }
        else
        {
            cout << "в відкитій кімнаті..." << endl;
            human.Sits();
            return;
        }
    }
    void TheRoomIsOpen()
    {
        cout << "кімната відімкнута..." << endl;
    }
    void TheRoomIsNotLit()
    {
        cout << "кімната не освітлюєься..." << endl;
    }
};
class MobilePhone // ÌÎÁ²ËÜÍÈÉ ÒÅËÅÔÎÍ
{
private:
    string color_phone = "white";
    string brand = "iphone";
    bool case_phone = true;
    string case_color = "purple";
    int count_camers = 2;
    string port_type = "lightning";
    double price = 25999; //$
    int count_contact = 32;
    string call;
public:

    void SetColorPhone(string color_phone)
    {
        if (this->color_phone != " ")
        {
            this->color_phone = color_phone;
        }
        else
            cout << "Не можливo!";
    }
    string GetColorPhone() const
    {
        return color_phone;
    }

    void SetColorCase(string case_color)
    {
        if (this->case_color != " ")
        {
            this->case_color = case_color;
        }
        else
            cout << "Не можливo!";
    }
    string GetColorCase() const
    {
        return case_color;
    }

    void SetCountCamers(int count_camers)
    {
        if (this->count_camers > 0)
        {
            this->count_camers = count_camers;
        }
        else
            cout << "Не можливo!";
    }
    int GetCoubtCamers() const
    {
        return count_camers;
    }

    void SetPrice(double price)
    {
        if (this->price > 0)
        {
            this->price = price;
        }
        else
            cout << "Не можливo!";
    }
    int GetPrice() const
    {
        return price;
    }

    void SetCountContact(int count_contact)
    {
        if (this->count_contact >= 0)
        {
            this->count_contact = count_contact;
        }
        else
            cout << "Не можливo!";
    }
    int GetCountContact() const
    {
        return price;
    }

    void PhoneCall()
    {
        cout << call << endl;
    }
    void Vibration()
    {
        cout << "вібрація..." << endl;
    }
    void TurnOnThePhone()
    {
        cout << "телефон вмикається..." << endl;
    }
    void WatchingVideo(Human& human)
    {
        if (human.GetEnergy() > 0 && human.GetHungry())
        {
            if (human.sits)
            {
                cout << "дивиться ютуб..." << endl;
                human.Laugh();
                human.SetEnergy(human.GetEnergy() - 20);
                human.SetHungry(human.GetHungry() + 5);
                return;
            }
        }
        else
            cout << "Закінчилася енергія або він голодний" << endl;
    }
    void Battery(string percent)
    {
        cout << "на тебефоні:" << percent << " %" << endl;
    }
};
class Microphone // Ì²ÊÐÎÔÎÍ
{
private:
    string color_micro = "black";
    bool buttom = true;//íàÿâí³òü êíîïêè äëÿ âìèêàííÿ ì³êðî
    string brand = "Trust GXT";
    int frequency_range = 5000;
    float cord_length = 1.5;//m
    string position;
    string connection;
    string connection_type = "USB";
public:

    void SetCordLength(float cord_length)
    {
        if (this->cord_length > 0)
        {
            this->cord_length = cord_length;
        }
        else
            cout << "Не можливo!";
    }
    float GetCordLength() const
    {
        return cord_length;
    }

    void SetFrequencyRange(int frequency_range)
    {
        if (this->frequency_range > 0)
        {
            this->frequency_range = frequency_range;
        }
        else
            cout << "Не можливo!";
    }
    int GetFrequencyRange() const
    {
        return frequency_range;
    }

    void SetConnectionType(string connection_type)
    {
        if (this->connection_type != " ")
        {
            this->connection_type = connection_type;
        }
        else
            cout << "Не можливo!";
    }
    string GetConnectionType() const
    {
        return connection_type;
    }

    void SetBrand(string brand)
    {
        if (this->brand != " ")
        {
            this->brand = brand;
        }
        else
            cout << "Не можливo!";
    }
    string GetBrand() const
    {
        return brand;
    }

    void SetColorMicro(string color_micro)
    {
        if (this->color_micro != " ")
        {
            this->color_micro = color_micro;
        }
        else
            cout << "Не можливo!";
    }
    string GetColorMicro() const
    {
        return color_micro;
    }

    void IncludeMiro()
    {
        cout << "мікрофон увімкнено..." << endl;
    }
    void TurnOffMiro()
    {
        cout << "мікрофон вимкнено..." << endl;
    }
    void Position()
    {
        cout << position << endl;
    }
    void Connection()
    {
        cout << connection << endl;
    }
    void NoConnection()
    {
        cout << "мікрофон не підключен до системи..." << endl;
    }
};
class Raccoon
{
private:
    string color_wool = "gray";
    float weight;
    string eyes_color = "green";
    string nick;
    string gender = "man";
    int energy;
    int hungry;
    string smell = "stink";
    bool wool = true;
public:
    string noize;
    int age;


    void SetEnergy(int energy)
    {
        if (this->energy > 0 && this->energy <= 100)
        {
            this->energy = energy;
        }
        else
            cout << "Це не повідомлення!";
    }
    int GetEnergy() const
    {
        return energy;
    }

    void SetHungry(int hungry)
    {
        if (this->hungry > 0 && this->hungry <= 100)
        {
            this->hungry = hungry;
        }
        else
            cout << "Це не повідомлення!";
    }
    int GetHungry() const
    {
        return hungry;
    }

    void SetNick(string nick)
    {
        if (this->nick != " ")
        {
            this->nick = nick;
        }
        else
            cout << "Не можливo!";
    }
    string GetColorWool() const
    {
        return nick;
    }

    void SetColorWool(string color_wool)
    {
        if (this->color_wool != " ")
        {
            this->color_wool = color_wool;
        }
        else
            cout << "Не можливo!";
    }
    string GetColorWool() const
    {
        return color_wool;
    }

    void SetWeight(float weight)
    {
        if (this->weight > 0)
        {
            this->weight = weight;
        }
        else
            cout << "Не можливo!";
    }
    float GetWeight() const
    {
        return weight;
    }

    void Run(Human& human)
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << "єнот біжить до..." << human.GetName() << "." << endl;
            human.Say(nick);
            this->energy -= 20;
            this->hungry += 10;
            this->weight -= 0.1;
            return;
        }
        else
            cout << "В єнота Закінчилася енергія або він голодний" << endl;
    }
    void MakeNoize()
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << noize << endl;
            this->energy -= 10;
            this->hungry += 10;
            return;
        }
        else
            cout << "В єнота Закінчилася енергія або він голодний" << endl;
    }
    void Walk()
    {
        cout << "єнот ходить..." << endl;
    }
    void Eat(Human& human, string meal)
    {
        if (this->energy > 0 && this->hungry > 90)
        {
            human.ToFeed();
            cout << "єнот їсть..." << meal << endl;
            this->energy -= 10;
            this->hungry -= 50;
            this->weight += 0.9;
            return;
        }
        else
            cout << "В єнота Закінчилася енергія або він голодний" << endl;
    }
    void Jump(Raccoon& human)
    {
        if (this->energy > 0 && this->hungry < 90)
        {
            cout << "єнот стрибає..." << endl;
            human.MakeNoize();
            this->energy -= 10;
            this->hungry += 10;
            return;
        }
        else
            cout << "В єнота Закінчилася енергія або він голодний" << endl;
    }
    void Print()
    {
        cout << "Єнот: " << endl;
        cout << "Ім'я:" << nick << endl;
        cout << "Вік:" << age << endl;
        cout << "Енергія: " << energy << "%" << endl;
        cout << "Голод: " << hungry << "%" << endl;
        cout << "Вага: " << weight << "кг" << endl;
    }
};


int main()
{
    //setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Human m;
    m.SetName("Ангеліна");
    m.SetLaugh("ХА-ХА-ХА!");
    m.SetEnergy(90);//%
    m.SetAge(18);//ðîê³â
    m.SetGrowth(170.2);//ñì
    m.SetHairColor("русий³");
    m.SetGender("жінка");
    m.sits = false;
    m.SetHungry(30);

    MobilePhone mb;

    Raccoon r;
    r.noize = "ГРРР!";
    r.SetNick("Степан");
    r.SetWeight(5.6); //kg
    r.age = 2;
    r.SetEnergy(100);
    r.SetHungry(70);

    ROOM room;
    room.room_closed = "кімната замкнута...";
    string meal;

    m.Print();
    r.Print();
    cout << "------------------------------------" << endl;
    room.TheRoomIsClosed(m);
    mb.WatchingVideo(m);
    r.Run(m);
    r.Jump(r);
    cout << "Що буде їсти єнот?" << endl;
    cin >> meal;
    r.Eat(m, meal);
    cout << "------------------------------------" << endl;
    m.Print();
    r.Print();


}
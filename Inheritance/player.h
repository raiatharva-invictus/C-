#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "person.h"
class Player : public Person{
    friend std::ostream& operator << (std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(string_view game_param, string_view first_name_param, string_view last_name_param);
        ~Player(); // we are defining it but it won't do anything since we are not doing any dynamic memory allcation

        void print_info(const Player& player){
            cout << player.first_name << " " << player.last_name << endl;
        }
    private:
        string game_name {"Chess"};
};
#endif
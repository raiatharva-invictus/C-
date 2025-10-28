#include "player.h"

Player::Player(string_view game_param, string_view first_name_param, string_view last_name_param){
    game_name = game_param;
    first_name = first_name_param;
    last_name = last_name_param;
}

std::ostream& operator << (std::ostream& out, const Player& player){
    out << "The game name : " << player.game_name << " is played by : " << player.get_fname() << " " << player.get_lname() << "." ;
    return out;
}

Player::~Player(){}
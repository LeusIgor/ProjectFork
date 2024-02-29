#include<iostream>
#include "Cellphone.h"

Cellphone::Cellphone(){
    std::string phone_number = 0;
    bool physical_sim_card = false;
    bool physical_keyboard = false;
}

Cellphone::Cellphone(std::string phone_number, bool physical_sim_card, bool physical_keyboard){
    phone_number_ = phone_number;
    physical_sim_card_ = physical_sim_card;
    physical_keyboard = physical_keyboard;
}

Cellphone::Cellphone(std::string phone_number, bool physical_sim_card){
    phone_number_ = phone_number;
    physical_sim_card_ = physical_sim_card;
    physical_keyboard = false;
}

const std::string &Cellphone::getPhoneNumber() const {
    return phone_number_;
}

bool Cellphone::isPhysicalSimCard() const {
    return physical_sim_card_;
}

void Cellphone::setPhoneNumber(const std::string &phoneNumber) {
    phone_number_ = phoneNumber;
}

void Cellphone::setPhysicalSimCard(bool physicalSimCard) {
    physical_sim_card_ = physicalSimCard;
}

bool Cellphone::isPhysicalKeyboard() const {
    return physical_keyboard;
}

void Cellphone::setPhysicalKeyboard(bool physicalKeyboard) {
    physical_keyboard = physicalKeyboard;
}

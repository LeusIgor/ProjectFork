#include<iostream>
#include "Cellphone.h"

Cellphone::Cellphone(){
    std::string phone_number = 0;
    physical_sim_card_ = false;
    physical_keyboard_ = false;
}

Cellphone::Cellphone(std::string phone_number, bool physical_sim_card, bool physical_keyboard){
    phone_number_ = phone_number;
    physical_sim_card_ = physical_sim_card;
    physical_keyboard = physical_keyboard;
}

Cellphone::Cellphone(std::string phone_number, bool physical_sim_card){
    phone_number_ = phone_number;
    physical_sim_card_ = physical_sim_card;
    physical_keyboard_ = false;
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
    return physical_keyboard_;
}

void Cellphone::setPhysicalKeyboard(bool physicalKeyboard) {
    physical_keyboard_ = physicalKeyboard;
}

bool Cellphone::make_calls(){
    return false;
}

std::string Cellphone::indestructible(){
    std::string temp="Empty string";
    return temp;
}
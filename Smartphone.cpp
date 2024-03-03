#include<iostream>
#include "Smartphone.h"

Smartphone::Smartphone():Cellphone(), Camera(){
    WiFi_ = false;
    Digital_fingerprint_ = false;
}

Smartphone::Smartphone(bool WiFi, bool Digital_fingerprint, int sensor_size, int resolution, int frame_rate, std::string phone_number, bool physical_sim_card):Cellphone(phone_number,physical_sim_card), Camera(sensor_size, resolution, frame_rate){
    WiFi_= WiFi;
    Digital_fingerprint_= Digital_fingerprint;
}

void Smartphone::watchSocialNetworks(std::string nameOfNetwork){
    std::cout << "Surfing the social networks is possible on this device.We choose to watch:"<< nameOfNetwork << std::endl;
}
bool Smartphone::surfInternet(std::string Url){
    if(Url.find("www")!=std::string::npos){
       std::cout<<"The Url is legit"<<std::endl;
       return true;
    }else{
        std::cout<<"We can't open this Url"<<std::endl;
    }
    return false;
}

bool Smartphone::isWiFi() const {
    return WiFi_;
}

bool Smartphone::isDigitalFingerprint() const {
    return Digital_fingerprint_;
}

void Smartphone::setWiFi(bool wiFi) {
    WiFi_ = wiFi;
}

void Smartphone::setDigitalFingerprint(bool digitalFingerprint) {
    Digital_fingerprint_ = digitalFingerprint;
}

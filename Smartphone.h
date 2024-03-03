#ifndef PROJECT_FORK_SMARTPHONE_H
#define PROJECT_FORK_SMARTPHONE_H

#include "Cellphone.h"
#include "Camera.h"

class Smartphone:Cellphone, Camera {
public:
    /** Default constructor. */
    Smartphone();
    /** Parameterized constructor for independent use.
     * @param bool WiFi, bool Digital_fingerprint, int sensor_size, int resolution,
     * int frame_rate, std::string phone_number, bool physical_sim_card
     * */
    Smartphone(bool WiFi, bool Digital_fingerprint, int sensor_size, int resolution, int frame_rate, std::string phone_number, bool physical_sim_card);

    /** SETTER: Sets the WiFi functionality.
    * @param bool wiFi
    * */
    void setWiFi(bool wiFi);
    /** SETTER: Sets the Digital Fingerprint functionality.
    * @param bool digitalFingerprint
    * */
    void setDigitalFingerprint(bool digitalFingerprint);
    /** GETTER: Checks if WiFi is accessible.
     * @return a bool value of WiFi is replaceable.
     * */
    bool isWiFi() const;
    /** GETTER: Checks if Digital Fingerprint is accessible .
     * @return a bool value of Digital Fingerprint is replaceable.
     * */
    bool isDigitalFingerprint() const;

//functions in public we can use in all places that we want
    /** Indicates which Social Network will be accessed.
     * @param nameOfNetwork
     */
    void watchSocialNetworks(std::string nameOfNetwork);
    /** Indicates which webpage will be accessed.
     * @param Url
     * @return bool value of string Url.
     */
    bool surfInternet(std::string Url);

private:
    /** Indicate the presence of WiFi. */
    bool WiFi_;
    /** Indicate the presence of digital fingerprint. */
    bool Digital_fingerprint_;
//functions in private we can use only in Smartphone.h and .cpp its a helper function for another functions

};
#endif //PROJECT_FORK_SMARTPHONE_H

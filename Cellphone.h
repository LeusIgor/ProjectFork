#ifndef PROJECT_FORK_CELLPHONE_H
#define PROJECT_FORK_CELLPHONE_H

#include <string>
#include "Types.h"

/**
 * Represents a cell phone with the following functionalities:
 * make calls, manage phone number, SIM card, and physical keyboard.
 */

class Cellphone {
public:
    /** Default constructor. */
    Cellphone();
    /** Parameterized constructor for independent use.
     * @param std::string phone_number, bool physical_sim_card, bool physical_keyboard
     * */
    Cellphone(std::string phone_number, bool physical_sim_card, bool physical_keyboard);
    /** Parameterized constructor for use in descendant classes.
     * @param std::string phone_number, bool physical_sim_card
     * */
    Cellphone(std::string phone_number, bool physical_sim_card);

    /** Retrieves the type of the device.
     * @return the type of the device as defined.
     * */
    Types getType() const;

    /** Sets the type of the device
     * @param specifies the new type of the device.
     * */
    void setType(Types type);

    /**
      Provide an answer to the question: "is the gadget make phone calls"?
     * @param none
     */
    bool make_calls();

    /** GETTER: Checks the presence of phone number.
     * @return  const std::string &
     * */
    const std::string &getPhoneNumber() const;
    /** GETTER: Checks the presence of physical sim card.
     * @return const bool
     * */
    bool isPhysicalSimCard() const;
    /** GETTER: Checks the presence of physical keyboard. */
    bool isPhysicalKeyboard() const;

    /** SETTER: Sets the phone number.
     * @param const std::string &phoneNumber
     * */
    void setPhoneNumber(const std::string &phoneNumber);
    /** SETTER: Sets the presence of physical sim card.
     * @param bool physicalSimCard
     * */
    void setPhysicalSimCard(bool physicalSimCard);
    /** SETTER: Sets the presence of physical keyboard.
     * @param bool physicalKeyboard
     */
    void setPhysicalKeyboard(bool physicalKeyboard);

protected:
    /** indicates the presence of phone number. */
    std::string phone_number_;
    /** Indicates the presence of physical sim card. */
    bool physical_sim_card_;

private:
    /** Indicates the presence of physical keyboard. */
    bool physical_keyboard_;
    /**
     * Provide an answer to the question: "is the gadget indestructible"?
     * @param none
     * @return the answer std::string
     */
    std::string indestructible();
    /** Allows for differentiation between different types of devices. */
    Types type_;
};


#endif //PROJECT_FORK_CELLPHONE_H

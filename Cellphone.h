#ifndef PROJECT_FORK_CELLPHONE_H
#define PROJECT_FORK_CELLPHONE_H

#include <string>

/**
 * Represents a cell phone with the following functionalities:
 * make calls, manage phone number, SIM card, and physical keyboard.
 */
class Cellphone {
public:
    /** Default constructor. */
    Cellphone();
    /** Parameterized constructor for independent use. */
    Cellphone(std::string phone_number, bool physical_sim_card, bool physical_keyboard);
    /** Parameterized constructor for use in descendant classes. */
    Cellphone(std::string phone_number, bool physical_sim_card);

    /**
     * Provide an answer to the question: "is the gadget make phone calls"?
     * @param empty
     * @return the answer
     */
    bool make_calls();

    /** GETTER: Checks the presence of phone number. */
    const std::string &getPhoneNumber() const;
    /** GETTER: Checks the presence of physical sim card. */
    bool isPhysicalSimCard() const;
    /** GETTER: Checks the presence of physical keyboard. */
    bool isPhysicalKeyboard() const;

    /** SETTER: Sets the phone number. */
    void setPhoneNumber(const std::string &phoneNumber);
    /** SETTER: Sets the presence of physical sim card. */
    void setPhysicalSimCard(bool physicalSimCard);
    /** SETTER: Sets the presence of physical keyboard. */
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
     * @param empty
     * @return the answer
     */
    std::string indestructible();
};

#endif //PROJECT_FORK_CELLPHONE_H

#include <string>

#ifndef PROJECT_FORK_CELLPHONE_H
#define PROJECT_FORK_CELLPHONE_H

class Cellphone {
public:
    Cellphone();// default
    Cellphone(std::string phone_number, bool physical_sim_card, bool physical_keyboard);
    Cellphone(std::string phone_number, bool physical_sim_card);

    bool make_calls();

    const std::string &getPhoneNumber() const;

    bool isPhysicalSimCard() const;

    bool isPhysicalKeyboard() const;

    void setPhoneNumber(const std::string &phoneNumber);

    void setPhysicalSimCard(bool physicalSimCard);

    void setPhysicalKeyboard(bool physicalKeyboard);

protected:
    std::string phone_number_;
    bool physical_sim_card_;

private:
    bool physical_keyboard_;
    /**
     * gives an answer for question is phone indestructible?
     * @param empty
     * @return the answer
     */
    std::string indestructible();
};


#endif //PROJECT_FORK_CELLPHONE_H

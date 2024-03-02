
#include "Smartphone.h"

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

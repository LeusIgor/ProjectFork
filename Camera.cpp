#include<iostream>
#include "Camera.h"

Camera::Camera(){
    sensor_size_= 0;
    resolution_= 0;
    frame_rate_= 0;
    replaceable_lenses_= false;
}

Camera::Camera(int sensor_size, int resolution, int frame_rate, bool replaceable_lenses){
    sensor_size_= sensor_size;
    resolution_= resolution;
    frame_rate_= frame_rate;
    replaceable_lenses_= replaceable_lenses;
}

Camera::Camera(int sensor_size, int resolution, int frame_rate){
    sensor_size_= sensor_size;
    resolution_= resolution;
    frame_rate_= frame_rate;
    replaceable_lenses_= false;
}

void Camera::make_photo() {
    std::cout << "Made picture" << std::endl;
}

void Camera::make_video() {
    std::cout << "Made video" << std::endl;
}

void Camera::physical_adjusters() {
    std::cout << "Physical levers adjusted" << std::endl;
}

int Camera::getSensorSize() const {
    return sensor_size_;
}

int Camera::getResolution() const {
    return resolution_;
}

int Camera::getFrameRate() const {
    return frame_rate_;
}

bool Camera::isReplaceableLenses() const {
    return replaceable_lenses_;
}

void Camera::setSensorSize(int sensorSize) {
    sensor_size_ = sensorSize;
}

void Camera::setResolution(int resolution) {
    resolution_ = resolution;
}

void Camera::setFrameRate(int frameRate) {
    frame_rate_ = frameRate;
}

void Camera::setReplaceableLenses(bool replaceableLenses) {
    replaceable_lenses_ = replaceableLenses;
}
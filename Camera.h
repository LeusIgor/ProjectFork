#ifndef PROJECT_FORK_CAMERA_H
#define PROJECT_FORK_CAMERA_H

class Camera {
public:
    Camera(); // default
    Camera(int sensor_size, int resolution, int frame_rate, bool replaceable_lenses); //параметризованный конструктор для самостоятельного использования
    Camera(int sensor_size, int resolution, int frame_rate); //параметризованный конструктор для использования в классах наследников

    int getSensorSize() const;

    int getResolution() const;

    int getFrameRate() const;

    bool isReplaceableLenses() const;

    void setSensorSize(int sensorSize);

    void setResolution(int resolution);

    void setFrameRate(int frameRate);

    void setReplaceableLenses(bool replaceableLenses);

    void make_photo();
    void make_video();

protected:
    int sensor_size_;
    int resolution_;
    int frame_rate_;

private:
    bool replaceable_lenses_;
    void physical_adjusters();
};

#endif //PROJECT_FORK_CAMERA_H

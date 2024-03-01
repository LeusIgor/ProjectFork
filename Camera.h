#ifndef PROJECT_FORK_CAMERA_H
#define PROJECT_FORK_CAMERA_H

/**
 * Represents a camera with the following functionalities:
 * make photos and videos, along with sensor size, camera resolution, frame rate, and
 * lens replaceability.
 */
class Camera {
public:
    /** Default constructor. */
    Camera();
    /** Parameterized constructor for independent use. */
    Camera(int sensor_size, int resolution, int frame_rate, bool replaceable_lenses);
    /** Parameterized constructor for use in descendant classes. */
    Camera(int sensor_size, int resolution, int frame_rate);

    /** GETTER: Returns the sensor size of phone number. */
    int getSensorSize() const;
    /** GETTER: Returns the camera resolution. */
    int getResolution() const;
    /** GETTER: Returns the frame rate. */
    int getFrameRate() const;
    /** GETTER: Checks if lenses are replaceable. */
    bool isReplaceableLenses() const;

    /** SETTER: Sets the sensor size of phone number. */
    void setSensorSize(int sensorSize);
    /** SETTER: Sets the camera resolution. */
    void setResolution(int resolution);
    /** SETTER: Sets the frame rate. */
    void setFrameRate(int frameRate);
    /** SETTER: Sets if lenses are replaceable. */
    void setReplaceableLenses(bool replaceableLenses);

    /**
 * Provide an answer to the question: "is the gadget shoots photos"?
 * @param empty
 * @return the answer
 */
    void make_photo();
    /**
  * Provide an answer to the question: "is the gadget record videos"?
  * @param empty
  * @return the answer
  */
    void make_video();

protected:
    /** Sensor size of the camera. */
    int sensor_size_;
    /** Resolution of the camera. */
    int resolution_;
    /** Frame rate for video recording. */
    int frame_rate_;

private:
    /** Indicate if lenses can be replaced. */
    bool replaceable_lenses_;
    /**
 * Provide an answer to the question: "is the gadget has physical adjusters"?
 * @param empty
 * @return the answer
 */
    void physical_adjusters();
};

#endif //PROJECT_FORK_CAMERA_H

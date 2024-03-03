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
    /** Parameterized constructor for independent use.
     * @param int sensor_size, int resolution, int frame_rate, bool replaceable_lenses
     * */
    Camera(int sensor_size, int resolution, int frame_rate, bool replaceable_lenses);
    /** Parameterized constructor for use in descendant classes.
     * @param int sensor_size, int resolution, int frame_rate
     * */
    Camera(int sensor_size, int resolution, int frame_rate);

    /** GETTER: Returns the sensor size of phone number.
     * @return an integer value of sensor_size
     * */
    int getSensorSize() const;
    /** GETTER: Returns the camera resolution.
     * @return an integer value of resolution
     * */
    int getResolution() const;
    /** GETTER: Returns the frame rate.
     * @return an integer value of frame rate
     * */
    int getFrameRate() const;
    /** GETTER: Checks if lenses are replaceable.
     * @return a bool value of is lenses are replaceable
     * */
    bool isReplaceableLenses() const;

    /** SETTER: Sets the sensor size of camera.
     * @param int sensorSize
     * */
    void setSensorSize(int sensorSize);
    /** SETTER: Sets the camera resolution.
     *   @param int resolution
     * */
    void setResolution(int resolution);
    /** SETTER: Sets the frame rate.
     *  @param int frameRate
     * */
    void setFrameRate(int frameRate);
    /** SETTER: Sets if lenses are replaceable.
     * @param bool replaceableLenses
     * */
    void setReplaceableLenses(bool replaceableLenses);

    /** Print an answer to the question: "is the gadget shoots photos"?*/
    void make_photo();
    /** Print an answer to the question: "is the gadget record videos"?
    * @param none
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
 * Print an answer to the question: "is the gadget has physical adjusters"?
 * @param none
 */
    void physical_adjusters();
};

#endif //PROJECT_FORK_CAMERA_H

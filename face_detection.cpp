
#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Unable to open the camera\n";
        return 1;
    }

    cv::CascadeClassifier face_cascade;
    face_cascade.load("haarcascade_frontalface_default.xml");

    cv::Mat frame;
    while (true) {
        cap >> frame;
        if (frame.empty()) break;

        std::vector<cv::Rect> faces;
        face_cascade.detectMultiScale(frame, faces, 1.1, 4);

        for (const auto& face : faces)
            cv::rectangle(frame, face, cv::Scalar(255, 0, 0), 2);

        cv::imshow("Face Detection - Press ESC to exit", frame);
        if (cv::waitKey(10) == 27) break;
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}


# Face Detection using OpenCV with oneAPI Compatibility

This is a simple face detection project using OpenCV, prepared for submission to the Intel oneAPI Student Ambassador program.

## Requirements
- OpenCV
- C++ Compiler
- Webcam

## How to Run
1. Install OpenCV.
2. Make sure you have `haarcascade_frontalface_default.xml` in the same folder.
3. Compile and run:

```bash
g++ face_detection.cpp -o face_detection `pkg-config --cflags --libs opencv4`
./face_detection
```

## Credits
Created for the Intel oneAPI Student Ambassador Application.

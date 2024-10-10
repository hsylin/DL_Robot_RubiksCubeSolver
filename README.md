# A Rubik's Cube Solution Using Deep Learning and Robotic Arm Coordination

With the rapid advancement of human-robot collaboration, we can now employ robotic arms for more human-centered tasks. Our goal is to help individuals solve a Rubik's Cube using robotic arms, image recognition, and specialized algorithms.

***
## **Introduction**

We are developing a Rubik's Cube collaboration system that integrates various software and hardware technologies to achieve human-robot interaction for solving the cube.

- Sensors: RGB-D Depth Camera Realsense D435
- Robotic Arm: TM Robotic Arm TM12M
- Image Processing: OpenCV
- Algorithm: Kociemba's two-phase algorithm
- Deep Learning: PointNetGPD

## Prerequisite

* Python 3.8.10
* Our requirements in requirements.txt

## Environment

* Ubuntu 20.04.6 LTS
* Intel® Core™ i7-10750H CPU @ 2.60GHz × 12
* NV166 / Mesa Intel® UHD Graphics (CML GT2) 
* Intel® RealSense™ Depth Camera D435

## Training the Model

Please refer to this repository for detailed steps on model training:
[PointCloud-GraspModel](https://github.com/hsylin/PointCloud-GraspModel)

## Usage

**Note:**  
We are currently working to ensure that points 1-5 can be executed independently, which will make testing more convenient and allow for easier integration of new features.

1.Start the hand-eye calibration process to align the coordinates between the camera and the robotics arm.

[TM-RobotArm-Calibration](https://github.com/hsylin/TM-RobotArm-Calibration)

2.Connect the TM robotic arm and import the relevant arm operation functions.

[TM-RobotArm-Control](https://github.com/hsylin/TM-RobotArm-Control)

3.Power on the RealSense D435 and process the input into point cloud data. 

[RealSense](https://github.com/hsylin/RealSense)

4.Receive point cloud data and input it into the trained model, then send the predicted grasping position and orientation to the TM robotic arm for grabbing. 

[TM-RobotArm-Go-Grasp](https://github.com/hsylin/TM-RobotArm-Go-Grasp)

5.Launch the UI to perform the Rubik's Cube solving steps and visualize relevant information about the cube.

[Rubiks-Cube-UI](https://github.com/hsylin/Rubiks-Cube-UI)

## Project Report
[Report](https://github.com/hsylin/DL-Robot-RubiksCubeSolver/blob/main/report.pdf)
## Project Poster
[Poster](https://github.com/hsylin/DL-Robot-RubiksCubeSolver/blob/main/poster.pdf)
## Demo Video

**Note:** The demo video has been sped up due to the slow movement speed of the robotic arm.

[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/aG4lePK26F8/0.jpg)](https://www.youtube.com/watch?v=aG4lePK26F8)

## Future Work


- **Integration of VLA Models**: We plan to integrate VLA models, such as RT-2, to facilitate true human-robot interaction. This will enable more sophisticated and intuitive communication between users and the robotic system.

- **Software Architecture Optimization**: We intend to optimize the software architecture to improve its modularity, allowing for the seamless integration of additional solutions and significantly enhancing the overall flexibility of the system.

## Reference

[Kociemba's two-phase algorithm](https://github.com/hkociemba/RubiksCube-TwophaseSolver)

[PointNet](https://github.com/charlesq34/pointnet)

[PointNetGPD](https://github.com/lianghongzhuo/PointNetGPD)







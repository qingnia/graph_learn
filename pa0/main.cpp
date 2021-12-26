#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;
    std::cout << "Example of dot multiply \n";
    std::cout << v.dot(w)  << std::endl;
    std::cout << "Example of cross multiply \n";
    std::cout << v.cross(w.transpose())  << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    std::cout << j << std::endl;
    // matrix add i + j
    std::cout << "Example of output2 \n";
    std::cout << i + j << std::endl;
    std::cout << i * 3 << std::endl;
    std::cout << i * j << std::endl;
    std::cout << i * v << std::endl;
    // matrix scalar multiply i * 2.0
    // matrix multiply i * j
    // matrix multiply vector i * v

    Eigen::Vector3f p(1.0f,2.0f,0.0f);
    Eigen::Matrix3f r, t, rt;
    float c = std::cos(45.0/180.0*acos(-1));
    float d = std::sin(45.0/180.0*acos(-1));
    r << c, -d, 0.0, d, c, 0.0, 0.0, 0.0, 1.0;
    t << 1.0, 0.0, 1.0, 0.0, 1.0, 2.0, 0.0, 0.0, 1.0;
    rt << c, -d, 1.0, d, c, 2.0, 0.0, 0.0, 1.0;
    std::cout << r * t * p << std::endl;
    std::cout << rt * p << std::endl;
    return 0;
}
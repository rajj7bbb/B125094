#include <iostream>
#include <string>
using namespace std;

class Image {  //multilevel
protected:
    int width, height;

public:
    Image(int w, int h) {
        width = w;
        height = h;
    }

    int originalPixels() {
        return width * height;
    }
};

class CompressedImage : public Image {
protected:
    double compression;

public:
    CompressedImage(int w, int h, double c)
        : Image(w, h) {
        compression = c;
    }

    double effectivePixels() {
        return originalPixels() * compression / 100.0;
    }
};

class EncryptedImage : public CompressedImage {
    string algorithm;

public:
    EncryptedImage(int w, int h, double c, string a)
        : CompressedImage(w, h, c) {
        algorithm = a;
    }

    void display() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Original Pixels: " << originalPixels() << endl;
        cout << "Compression: " << compression << "%" << endl;
        cout << "Effective Pixels: " << effectivePixels() << endl;
        cout << "Encryption Algorithm: " << algorithm << endl;
    }
};

int main() {
    EncryptedImage img(1920, 1080, 50, "AES");
    img.display();

    return 0;
}
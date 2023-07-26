
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>



class Report {
private:
    std::string description;
    std::string reporter; ///the driver which reported it
    int latitude;
    int longitude;
    std::string validation_status;
public:
    ///implement setters getters constructors
    Report() = default;
    Report(std::string description, std::string reporter, int latitude, int longitude, std::string validation_status) : description(description), reporter(reporter), latitude(latitude), longitude(longitude), validation_status(validation_status) {}
    Report(const Report& report) : description(report.description), reporter(report.reporter), latitude(report.latitude), longitude(report.longitude), validation_status(report.validation_status) {}
    ~Report() = default;

    void set_description(std::string description) { this->description = description; }
    void set_reporter(std::string reporter) { this->reporter = reporter; }
    void set_latitude(int latitude) { this->latitude = latitude; }
    void set_longitude(int longitude) { this->longitude = longitude; }
    void set_validation_status(std::string validation_status) { this->validation_status = "True"; }

    std::string get_description() { return this->description; }
    std::string get_reporter() { return this->reporter; }
    int get_latitude() { return this->latitude; }
    int get_longitude() { return this->longitude; }
    std::string get_validation_status() { return this->validation_status; }

    std::string toString()
    {
        return this->description + " " + this->reporter + " " + std::to_string(this->latitude) + " " + std::to_string(this->longitude) + " " + this->validation_status;
    }

};




// RingTracker.cpp - Track the One Ring for Bilbo Baggins
// By Gandalf the Grey, April 15, 2025

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class RingTracker {
private:
    std::vector<double> data;
    std::string logFile;

public:
    RingTracker(const std::string& log) : logFile(log) {
        std::cout << "The Grey Wizard awakens. Tracker forged, Bilbo!" << std::endl;
    }

    // Load sample data (e.g., market prices or Ring sightings)
    void loadData() {
        // Mock data - replace with real trails, lad
        double prices[] = {20.0, 21.0, 19.5, 25.0, 22.0};
        for (double price : prices) {
            data.push_back(price);
        }
        std::cout << "Data loaded: " << data.size() << " traces found." << std::endl;
    }

    // Seek the Ring’s mark (e.g., >10% change)
    void seekRing() {
        if (data.empty()) {
            std::cout << "No trails to follow, Bilbo! The Ring eludes us." << std::endl;
            return;
        }

        std::ofstream log(logFile, std::ios::app);
        log << "Ring Tracker Report - Gandalf’s Watch\n";

        double avg = 0;
        for (double val : data) avg += val;
        avg /= data.size();

        for (size_t i = 1; i < data.size(); i++) {
            double change = (data[i] - data[i - 1]) / data[i - 1];
            if (std::abs(change) > 0.1) {  // 10% threshold - Ring’s whisper
                std::cout << "The Ring stirs at index " << i << ": " << data[i] 
                          << " (Change: " << (change * 100) << "%)" << std::endl;
                log << "Day " << i << ": Power spike - " << data[i] << " (Change: " 
                    << (change * 100) << "%)\n";
            }
        }
        std::cout << "Search complete. Average trace: " << avg << std::endl;
        log << "Average: " << avg << "\n";
        log.close();
        std::cout << "Findings logged at " << logFile << ", Bilbo!" << std::endl;
    }
};

int main() {
    RingTracker tracker("../docs/ring_tracker_log.txt");
    tracker.loadData();
    tracker.seekRing();
    return 0;
}

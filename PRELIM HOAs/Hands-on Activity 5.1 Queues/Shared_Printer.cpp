#include <iostream>
#include <string>
#include "queueLL.h"

class Job {
public:
    int jobID;
    std::string userName;
    int pageCount;

    Job() : jobID(0), userName(""), pageCount(0) {}
    Job(int id, std::string name, int pages) : jobID(id), userName(name), pageCount(pages) {}
};

class Printer {
private:
    qNode<Job>* frontPtr;
    qNode<Job>* backPtr;

public:
    Printer() : frontPtr(nullptr), backPtr(nullptr) {}

    void addJob(int id, const std::string& name, int pages) {
        Job newJob(id, name, pages);
        enqueue(newJob, &frontPtr, &backPtr);
        std::cout << "Job ID " << id << " added by " << name << " (" << pages << " pages)\n";
    }

    void processJobs() {
        if (frontPtr == nullptr) {
            std::cout << "The queue is empty.\n";
            return;
        }

        while (frontPtr != nullptr) {
            Job currentJob = frontPtr->data;
            std::cout << "Processing Job ID " << currentJob.jobID << " for " << currentJob.userName << " (" << currentJob.pageCount << " pages)\n";
            dequeue(&frontPtr, &backPtr);
        }
    }
};

int main() {
    Printer officePrinter;

    officePrinter.addJob(101, "Alice", 5);
    officePrinter.addJob(102, "Bob", 12);
    officePrinter.addJob(103, "Charlie", 3);

    officePrinter.processJobs();

    return 0;
}
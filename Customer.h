#include <vector>
#include "Member.h"
using namespace std;

class Appointment; //forward declaration

class Customer : public Member
{
    private:
        vector<Appointment> appointments; // Sử dụng vector để lưu trữ các cuộc hẹn
        string requirements;
    public:
        Customer();
        ~Customer();
        void bookAppointment(string workerID, DateTime date);          // Minh
        void cancelAppointment(string appointmentID);                   //errorCode -> void
        void viewAppointments(vector<Appointment> appointmentList);
        void setRequirement();
        void giveFeedback(string workerID, string feedback); //?


};
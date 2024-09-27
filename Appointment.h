#include<string>
#include<vector>
using namespace std;

enum service
{
    CatToc,
    NhuomToc,
    TayToc,
    UocToc,
    PhucHoiToc, 
    TaoKieu,
    GoiDau
};

class Appointment
{
    private:
        string appointmentID;
        string customerID;
        vector <service> seviceList;   
        string requirement;
};
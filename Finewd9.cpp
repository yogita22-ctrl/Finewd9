#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct DietPlan 
{
    std::string description;
};


struct ExercisePlan 
{
    std::string description;
};

struct Doctor 
{
    std::string name;
    std::string contactNumber;
};

struct Patient 
{
    std::string name;
    std::string enrollmentDate;
    std::string contactNumber;
    std::string disease;
    std::string pregnancyWeeks;
    std::string height;
    std::string weight;
    Doctor attendingDoctor;
};
struct EmergencyContacts
{
	std::string name;
	std::string contactNumber;
};

void displayDoctors(const std::vector<Doctor>& doctors);
void bookAppointment(const Doctor& doctor);
void viewPatientInfo(const std::vector<Patient>& patients);
void viewPatientInfoIndex(const std::vector<Patient>& patients, int patientChoice);
void viewDietPlanForPregnancy();
void displayEmergencyContacts(const std::vector<EmergencyContacts>& contacts);

int main() 
{
    std::vector<Doctor> nearbyDoctors;
    nearbyDoctors.push_back({"Dr. Khurana", "789-222-3333"});
    nearbyDoctors.push_back({"Dr. Arora", "987-333-4444"});
    nearbyDoctors.push_back({"Dr. Sharma", "986-444-5555"});
    nearbyDoctors.push_back({"Dr. Menon", "777-444-5555"});
    nearbyDoctors.push_back({"Dr. Rudra", "897-444-5555"});
    nearbyDoctors.push_back({"Dr. Sneha", "888-444-5555"});

    std::vector<Patient> patients;
    patients.push_back({"Ishi Dikshit", "20-August-2023", "123-456-7890", "Thyroid", "8", "5.2", "160", "55", {"Dr. Khurana", "789-222-3333"}});
    patients.push_back({"Rakshita Rudra","22-April-2023", "987-654-3210","N/A", "5", "165", "62",{"Dr. Sneha", "888-444-5555"} });
    patients.push_back({"Anamika Mishra","20-February-2023", "555-123-4567","PCOD","9", "155", "70",{"Dr. Sharma", "986-444-5555"}});
    patients.push_back({"Diya Roy", "01-April-2023", "789-123-4567","Diabetes", "4", "162", "68",{"Dr. Rudra", "897-444-5555"}});
    patients.push_back({"Priya Sharma","22-july-2023", "987-654-3210","N/A", "7", "163", "60",{"Dr. Arora", "987-333-4444"}});
    patients.push_back({"Himanshi Patel","07-june-2023", "555-777-8888","Hypertension", "2", "157", "65",{"Dr. Khurana", "789-222-3333"} });
    patients.push_back({"Sneha Gupta","21-August-2023", "123-987-6543","Lactose intolrance", "5", "168", "58",{"Dr. Menon", "777-444-5555"} });
    patients.push_back({"Sunena Singh","20-january-2023", "777-555-9999", "N/A", "4", "170", "70",{"Dr. Khurana", "789-222-3333"} });
    patients.push_back({"Anita Verma","16-March-2023", "222-333-4444", "Hyperthyroid", "8", "155", "75",{"Dr. Arora", "987-333-4444"} });
    patients.push_back({"Maithili Mehta","16-March-2023", "444-555-6666","N/A", "7", "161", "63",{"Dr. Rudra", "897-444-5555"} });
    patients.push_back({"Pooja Malhotra","18-September-2023", "555-444-3333","Allergic to Root and tubers", "N/A", "166", "58", {"Dr. Menon", "777-444-5555"}});
    patients.push_back({"Mitali Sharma","29-September-2023","123-987-6543","N/A", "3", "159", "62", {"Dr. Rudra", "897-444-5555"}});

    std::vector<EmergencyContacts> contacts;
    contacts.push_back({"Apollo Hospitals","1066"});
    contacts.push_back({"Fortis Healthcare","105010"});
    contacts.push_back({"Emergency Ambulance Services","108"});
    
    int choice;
    int patientChoice;

    do {
        std::cout <<endl<< "1. View patient information\n";
        std::cout << "2. View diet plan for pregnancy\n";
        std::cout << "3. View exercise plan\n";
        std::cout << "4. View nearby doctors\n";
        std::cout << "5. Book an appointment\n";
        std::cout << "6. View emergency contact numbers\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) 
		{
            case 1:
                viewPatientInfo(patients);
                break;
            case 2:
                viewDietPlanForPregnancy();
                break;
            case 3:
               std::cout <<endl<< "Your exercise plan for pregnant women: ...\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 1: Gentle Cardio and Balance:\n";
               std::cout << "       - Morning: 20 minutes of prenatal walking or stationary cycling at a moderate pace\n";
               std::cout << "       - Afternoon: Balance exercises (standing on one leg, wall-supported squats) for 15 minutes\n";
               std::cout << "       - Evening: Prenatal yoga for relaxation and balance (15-20 minutes)\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 2: Rest and Relaxation:\n";
               std::cout << "       - Focus on rest, relaxation, and deep breathing exercises\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 3: Low-Impact Cardio and Core Strengthening:\n";
               std::cout << "       - Morning: 20 minutes of prenatal swimming or water aerobics (if available)\n";
               std::cout << "       - Afternoon: Gentle core exercises (pelvic tilts, seated leg lifts) for 15 minutes\n";
               std::cout << "       - Evening: Meditation and deep breathing exercises (15-20 minutes)\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 4: Rest and Relaxation:\n";
               std::cout << "       - Focus on rest, relaxation, and deep breathing exercises\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 5: Flexibility and Stretching:\n";
               std::cout << "       - Morning: 20 minutes of prenatal yoga for flexibility and stretching\n";
               std::cout << "       - Afternoon: Gentle full-body stretches for 15 minutes\n";
               std::cout << "       - Evening: Relaxing walk or gentle yoga (15-20 minutes)\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 6: Rest and Relaxation:\n";
               std::cout << "       - Focus on rest, relaxation, and deep breathing exercises\n";
               std::cout << "---------------------------------------------------------------------------\n";
               std::cout << "Day 7: Full-Body Relaxation:\n";
               std::cout << "       - Morning: 20 minutes of prenatal relaxation exercises (visualization, positive affirmations)\n";
               std::cout << "       - Afternoon: Gentle upper and lower body stretches with a focus on relaxation (15 minutes)\n";
               std::cout << "       - Evening: Cool down with deep breathing and gentle relaxation techniques (15-20 minutes)\n";
               std::cout << "---------------------------------------------------------------------------\n";   
               break;
            case 4:
                displayDoctors(nearbyDoctors);
                break;
            case 5:
                int doctorIndex;
                std::cout<<endl<< "Enter the doctor's index: ";
                std::cin >> doctorIndex;
                if (doctorIndex >= 1 && doctorIndex <= nearbyDoctors.size()) 
				{
                    bookAppointment(nearbyDoctors[doctorIndex - 1]);
                } 
	    else 
               {
                    std::cout<<endl<< "Invalid doctor index.\n";
                }
                break;
            case 6:
                displayEmergencyContacts(contacts);
                break;
            case 7:
                std::cout<<endl<< "Exiting...\n";
                break;
            default:
                std::cout<<endl<< "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 7);
    return 0;
}

void displayDoctors(const std::vector<Doctor>& doctors) 
{
    std::cout <<endl<< "Nearby Doctors:\n";
    for (size_t i = 0; i < doctors.size(); ++i) 
	{
        std::cout << i + 1 << ". " << doctors[i].name << "\n";
        std::cout << "   Contact Number  : " << doctors[i].contactNumber << "\n\n";
    }
}

void displayEmergencyContacts(const std::vector<EmergencyContacts>& contacts)
{
	std::cout <<endl<< "Emergency Contact Numbers:\n";
	for (size_t i = 0; i < contacts.size(); ++i)
	{
		std::cout << i + 1 << ". " << contacts[i].name << "\n";
	    std::cout << "   Contact Number : " << contacts[i].contactNumber << "\n\n";
	}
}
void bookAppointment(const Doctor& doctor) 
{
    std::cout <<endl<< "Booking an appointment with " << doctor.name<<"\n";
}

void viewPatientInfo(const std::vector<Patient>& patients) 
{
    std::cout <<endl<< "Enter the patient's index: ";
    int patientChoice;
    std::cin >> patientChoice;
    viewPatientInfoIndex(patients, patientChoice);
}
void viewPatientInfoIndex(const std::vector<Patient>& patients, int patientChoice) 
{
    if (patientChoice >= 1 && patientChoice <= patients.size()) 
	{
        const Patient& patient = patients[patientChoice - 1];
        std::cout <<endl<< "Name            : " << patient.name << "\n";
        std::cout << "Enrollment date : " << patient.enrollmentDate << "\n"; 
        std::cout << "Contact Number  : " << patient.contactNumber << "\n";
        std::cout << "Disease         : " << patient.disease << "\n";
        std::cout << "Pregnancy Weeks :  " << patient.pregnancyWeeks << "\n";
        std::cout << "Height          : " << patient.height << " cm\n";
        std::cout << "Weight          : " << patient.weight << " kg\n";
        std::cout << "Attending Doctor: " << patient.attendingDoctor.name << "\n";
        std::cout << "-------------------\n"<<endl;
    } 
   else 
   {
        std::cout <<endl<< "Invalid patient index.\n";
    }
}

void viewDietPlanForPregnancy() 
{
    std::cout <<endl<< "Diet Plan for Pregnancy (Vegetarian):\n";
    std::cout << "------------------------------------\n";
    std::cout << "   * Breakfast:\n";
    std::cout << "      - Oatmeal with fruits and nuts\n";
    std::cout << "      - A glass of milk or yogurt\n";
    std::cout << "\n";
    std::cout << "   * Lunch:\n";
    std::cout << "      - Roti or rice with lentils and vegetables\n";
    std::cout << "      - Green salad\n";
    std::cout << "\n";
    std::cout << "   * Snack:\n";
    std::cout << "      - Fresh fruit (e.g., apple, banana)\n";
    std::cout << "\n";
    std::cout << "   * Dinner:\n";
    std::cout << "      - Vegetable curry\n";
    std::cout << "      - Roti or rice\n";
    std::cout << "      - A glass of buttermilk\n";
    std::cout << "------------------------------------\n";


    std::cout <<endl<< "Diet Plan for Pregnancy (Non-Vegetarian):\n";
    std::cout << "---------------------------------------\n";
    std::cout << "   * Breakfast:\n";
    std::cout << "      - Scrambled eggs with spinach\n";
    std::cout << "      - Whole-grain toast\n";
    std::cout << "      - A glass of milk\n";
    std::cout << "\n";
    std::cout << "   * Lunch:\n";
    std::cout << "      - Chicken or fish with rice\n";
    std::cout << "      - Green vegetables\n";
    std::cout << "\n";
    std::cout << "   * Snack:\n";
    std::cout << "      - Greek yogurt with berries\n";
    std::cout << "\n";
    std::cout << "   * Dinner:\n";
    std::cout << "      - Beef or tofu stir-fry with vegetables\n";
    std::cout << "      - Brown rice\n";
    std::cout << "      - A glass of buttermilk\n";
    std::cout << "---------------------------------------\n"<<endl;
}    
  


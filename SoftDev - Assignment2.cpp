//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
//Accessed from https://iq.opengenus.org/2d-maps-in-cpp/ Accessed at:25/11/23
//Accessed at https://www.tutorialride.com/cpp-file-management/append-to-a-file-c-program.htm#google_vignette Accessed on(7/11/23)
//Accessed from https://www.geeksforgeeks.org/inheritance-in-c/ Accessed at:03/11/23
//Accessed from https://www.geeksforgeeks.org/encapsulation-in-cpp/ Accessed at: 8/11/23
//Accessed from https://www.youtube.com/watch?v=EjJY7yA5SWw Accessed at: 9/12/23
//Acessed from https://www.codesdope.com/blog/article/find-and-replace-word-in-file-by-another-word/ Accessed at: 15/12/23
//Accessd from: https://www.w3schools.blog/c-check-if-string-contains-substring#google_vignette Accesed at: 15/12/23
//Accessed from: https://www.scaler.com/topics/cpp-string-contains/ Accessed at: 15/12/23
//Accessed from: https://www.simplilearn.com/tutorials/cpp-tutorial/int-to-string-cpp#:~:text=In%20C%2B%2B%2C%20you%20can,argument%20and%20returns%20a%20string. Accessed at:15/12/23
//Accessed from: https://www.w3resource.com/cpp-exercises/file-handling/cpp-file-handling-exercise-6.php#google_vignette  Accessed at: 15/12/23
//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ Accessed at: 15/12/23
//Accessed from: https://www.tutorialspoint.com/replace-part-of-a-string-with-another-string-in-cplusplus Accessed at:16/12/23
//Accessed from: https://www.educative.io/answers/how-to-convert-a-string-to-an-int-in-cpp Accessed at: 17/12/23
//Accessed from: https://www.bogotobogo.com/DesignPatterns/template.php Accessed at: 17/12/23
//Accessed from: https://www.geeksforgeeks.org/map-insert-in-c-stl/ Accessed at: 19/12/23
//Accessed from: https://www.geeksforgeeks.org/map-erase-function-in-c-stl/ Accessed at: 19/12/23
//Accessed from: https://www.tutorialspoint.com/cplusplus-program-to-update-value-of-dictionary-using-key Accessed at: 19/12/23
//Accessed from: https://www.tutorialspoint.com/substring-in-cplusplus Accessed at: 21/12/23
//Accessed from: https://thispointer.com/how-to-iterate-over-a-map-in-c/ Accessed at: 21/12/23
//Acccessed from: https://stackoverflow.com/questions/22450423/how-to-use-crt-secure-no-warnings Accessed at:22/12/03
//Acccessed from: https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm Accessed at:22/12/03
//Accessed from: https://www.omnicalculator.com/conversion/hours-to-seconds-converter#:~:text=Multiply%20the%20hours%20by%2060,minutes%20%C3%97%2060%20%3D%203600%20seconds%20. Accessed at: 23/12/03
#define _CRT_SECURE_NO_WARNINGS
#include<iostream> 
#include <fstream>
#include <map>
#include <string>
#include <sstream>
using namespace std;


class login {
private: 
	string UserName;
	string Password;
public:
	bool s;
	void enter_login_details() {
		cout << "Enter Username:";
		cin >> UserName;
		cout << "Enter Password:";
		cin >> Password;
	
		set_login_details();
	
	};
	void set_login_details() {
		if (UserName == "Admin") 
		{
			if (Password == "abc") 
			{
				s = true;
				cout << "You are logged in" << endl;
			}
			
		}
		else {
			s = false;
			cout << "Incorrect details, try again" << endl;
			enter_login_details();
		}
	   
	
	};
};
class Get_Room_Map {
public:
	void templateStructure() {
		GetMapOfCollege();
		RoomAction();
		//DisplayCollegeMap();
	}

	std::map<string, std::string> loadedData;
	string key;
	std::string value;
	void GetMapOfCollege()
	{
		std::ifstream inputFile("map.txt");


		while (inputFile >> key >> value) {
			loadedData[key] = value;
		}
		inputFile.close();

	}

	virtual void RoomAction() = 0;
	//virtual void DisplayCollegeMap() = 0;


	

};

class Add_Rooms : public Get_Room_Map {
public:
	string buildingName;
	string room_number;

	string accessRoles;
	string room_type;
	string room_mode;

	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cin >> buildingName;
		cout << "What is the number of the room would you like to add ?";
		cin >> room_number;
		cout << "What types of users can access this room ?";
		cin >> accessRoles;
		cout << "What types of room is this ?";
		cin >> room_type;
		cout << "What is the current mode of the room ?";
		cin >> room_mode;
		loadedData.insert({ buildingName + room_number,accessRoles + room_type + room_mode });


		std::ofstream outputFile("map.txt");

		for (const auto& pair : loadedData) {
			outputFile << pair.first << ' ' << pair.second << '\n';
		}
		outputFile.close();

	}

};

class Delete_Rooms : public Get_Room_Map {
public:
	string buildingName;
	string room_number;

	

	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cin >> buildingName;
		cout << "What is the number of the room would you like to remove ?";
		cin >> room_number;
		
		loadedData.erase(buildingName + room_number );


		std::ofstream outputFile("map.txt");

		for (const auto& pair : loadedData) {
			outputFile << pair.first << ' ' << pair.second << '\n';
		}
		outputFile.close();

	}

};

class Update_Rooms : public Get_Room_Map {
public:
	string buildingName;
	string room_number;

	string accessRoles;
	string room_type;
	string room_mode;

	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cin >> buildingName;
		cout << "What is the number of the room would you like to update ?";
		cin >> room_number;
		cout << "What types of users can access this room ?";
		cin >> accessRoles;
		cout << "What type of room is this ?";
		cin >> room_type;
		cout << "What is the current mode of the room ?";
		cin >> room_mode;

		loadedData[buildingName + room_number] = accessRoles + room_type + room_mode;

		std::ofstream outputFile("map.txt");

		for (const auto& pair : loadedData) {
			outputFile << pair.first << ' ' << pair.second << '\n';
		}
		outputFile.close();

	}

};





class Get_user_list{
public:
	long barcode;
	string name;
	string course;
	string role;
	string l;
	void readuserprofiles() 
	{
		std::ifstream f("UserProfiles.txt");


		while (f >> l/*barcode >> name >> course*/) {
			cout << l/*barcode << "," << name << "," << course << role << */ << endl;
		}
		

	}

};
class Remove_users : public Get_user_list {
public:
	
	
	string temp;

	string replacement = " ";

	void remove_users() 
	{
		int deleted_barcode;
		int extracted_barcode;

		std::ifstream i("UserProfiles.txt"); 
		std::ofstream o("temp.txt"); 
		
		cout << "Enter the card barcode number of the user you wish to delete:" << endl;
		cin >> deleted_barcode;
		
		//string db = to_string(deleted_barcode);

		while (i >> temp)
		{
			stringstream var;
			var << temp;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode)
			{
				temp = replacement;

				
				
			}
			
			o << "\n";
			o << temp;

			
			

		}
		
		i.close();
		o.close();

		string l;
		// For writing text file 
		// Creating ofstream & ifstream class object 
		ifstream io{
			"temp.txt"
		}; // This is the original file 
		ofstream ou{ "UserProfiles.txt" };
		if (io && ou) {

			while (getline(io, l)) {
				ou << l << "\n";
			}
			
		}
		else {
			// Something went wrong 
			printf("Cannot read File");
		}
		// Closing file 
		io.close();
		ou.close();
		

	}

};
class Remove_user_roles : public Get_user_list
{
public:
	string temp;
	string temp2;
	string temp3;
	void RemovingRoles()
	{
		int deleted_barcode;
		int extracted_barcode;
		string current_role;

		std::ifstream i("UserProfiles.txt");
		std::ofstream o("temp.txt");

		cout << "Enter the card barcode number of the user you wish to remove:" << endl;
		cin >> deleted_barcode;

		cout << "Enter the current role of the user:" << endl;
		cin >> current_role;

		cout << "The user role has been deleted from the requested user profile" << endl;
		
		//string db = to_string(deleted_barcode);

		while (i >> temp)
		{
			stringstream var;
			var << temp;
			var >> extracted_barcode;
			
			if (extracted_barcode == deleted_barcode && temp.find(current_role))
			{
				temp2 = temp;
				break;

			}

		}

		i.close();


		int pos;//index of character within the temp2 string
		string empty = "RoleRemoved";
		while ((pos = temp2.find(current_role)) != string::npos) {//replaces a string with another string by finding the value of the 1st matching charcters index position 
			temp2.replace(pos, empty.length(), empty);//replaces all charcters from the index position of the 1st mathcing charcter to the last matching character
		}

		std::ifstream in("UserProfiles.txt");
		while (in >> temp3)
		{
			stringstream var;
			var << temp3;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode)
			{
				temp3 = temp2;

			}

			o << "\n";
			o << temp3;

		}

		in.close();
		o.close();



		string l;//stores each line of the file as a string
		ifstream io{//input stream where the file has the current data waiting to be transferred
			"temp.txt"
		};
		ofstream ou{ "UserProfiles.txt" };//output stream - the file where the data will be copied to 
		if (io && ou) {//if both streams are valid

			while (getline(io, l)) {//get each line from the temp file
				ou << l << "\n";//output each line to the user profiles file
			}

		}
		else {

			printf("Cannot read File");
		}
		//closes the file streams
		io.close();
		ou.close();


	}


};
class Update_user_roles : public Get_user_list {
public:

	string temp;
	string temp2;
	string temp3;
	void UpdatingRoles()
	{
		int deleted_barcode;
		int extracted_barcode;
		string current_role;
		string updated_role;

		std::ifstream i("UserProfiles.txt");
		std::ofstream o("temp.txt");

		cout << "Enter the card barcode number of the user you wish to update:" << endl;
		cin >> deleted_barcode;

		cout << "Enter the current role of the user:" << endl;
		cin >> current_role;

		cout << "Enter the new role of the user you wish to update:" << endl;
		cin >> updated_role;
		//string db = to_string(deleted_barcode);

		while (i >> temp)
		{
			stringstream var;
			var << temp;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode && temp.find(current_role))
			{
				temp2 = temp;
				break;

			}

		}

		i.close();

		
		int pos;

		while ((pos = temp2.find(current_role)) != string::npos) { 
			temp2.replace(pos, updated_role.length(), updated_role); 
		}

		std::ifstream in("UserProfiles.txt");
		while (in >> temp3)
		{
			stringstream var;
			var << temp3;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode)
			{
				temp3 = temp2;

			}

			o << "\n";
			o << temp3;

		}
		
		in.close();
		o.close();

		

		string l;
		ifstream io{
			"temp.txt"
		}; 
		ofstream ou{ "UserProfiles.txt" };
		if (io && ou) {

			while (getline(io, l)) {
				ou << l << "\n";
			}

		}
		else {
			
			printf("Cannot read File");
		}
		
		io.close();
		ou.close();


	}

};
class Add_users : public Get_user_list {
public:
	void add_users() 
	{
		ofstream fout;  // Create Object of Ofstream
		ifstream fin;

		fin.open("UserProfiles.txt");
		cout << "Enter the card barcode:";
		cin >> barcode;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Course Name:";
		cin >> course;
		cout << "Enter the users role:";
		cin >> role;

		fout.open("UserProfiles.txt", ios::app); // Append mode
		if (fin.is_open())
			fout << "\n";
		fout << barcode;
		fout << name;
		fout << course;
		fout << role;



	}
	

};



class User{
 public:
	long barcode;
	void enter_barcode()
	{
		cout << "Enter the card barcode:";
		cin >> barcode;
		// Create and open a text file

	}
	
};

class User_type : public User {
 public: 
	 string user_role = "undefined";
	 string temp;
	 string temp2;
	 long extracted_barcode;
	 void check_user_roles() 
	 {
		 std::ifstream i("UserProfiles.txt");
		 //std::ofstream o("temp.txt");
		 while (i >> temp)
		 {
			 stringstream var;
			 var << temp;
			 var >> extracted_barcode;

			 if (extracted_barcode == barcode)
			 {
				 temp2 = temp;
				 break;

			 }
		 }

		 string roles[] = {"Staff","Student","Visitor","Guest","Cleaner","Manager","Security","Emergency Responder" };
		 
		 for (int y = 0; y < 8; y++) 
		 {
			 if(temp2.find(roles[y]))
			 {
				 int pos;
				 
				 while ((pos = temp2.find(roles[y])) != string::npos) {
					 user_role = temp2.substr(pos, roles[y].length());
					 break;
				 }

			 }
		 }
		 
		
		 cout << "The user role is:" << user_role << endl;

		 i.close();
	 }


};
class Room_type : public User_type {
 public:
	 string buildingName;
	 string room_number;
	 bool grant_access = false;
	 

	 void check_room_access() 
	 {
		 cout << "What is the code of the building where the room is located?";
		 cin >> buildingName;
		 cout << "What is the number of the room would you like to access?";
		 cin >> room_number;

		 std::map<string, std::string> loadedData;
		 string key;
		 std::string value;

		 std::ifstream inputFile("map.txt");


		 while (inputFile >> key >> value) {
			 loadedData[key] = value;
		 }
		 inputFile.close();


		 string a = buildingName + room_number;
		 std::map<std::string, string>::iterator o = loadedData.begin();//used to iterate through each key / value within the map

		 time_t current_time = time(0);
		 tm* t = localtime(&current_time);
		 float hour = (float)t->tm_hour;
		 float minutes = (float)t->tm_min;
		 float seconds = (float)t->tm_sec;

		 while (o != loadedData.end())
		 {
			
			 /*string word = o->second;
			 if (o->first == a && word.find(user_role) != string::npos && (hour == 19 && minutes == 35))
			 {
				 grant_access = true;
				 cout << hour << minutes << seconds << endl;
				 break;
			 }*/
			 float total_secs = (hour * 3600) + (minutes * 60) + seconds;

			 string word = o->second;
			 if (o->first == a && word.find("Normal") != string::npos && word.find("LectureHall"))
			 {
				 if (word.find("Staff") != string::npos && user_role == "Staff" && total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((23 * 3600) + (59 * 60) + (59)))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Student") != string::npos && user_role == "Student" && total_secs >= ((8 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600)))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Visitor") != string::npos && user_role == "Visitor" && total_secs >= ((8 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600)))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Cleaner") != string::npos && user_role == "Cleaner" && (total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((10 * 3600) + (30 * 60))) || (total_secs >= ((17 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600) + (30 * 60))))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Manager") != string::npos && user_role == "Manager" || word.find("Security") != string::npos && user_role == "Security")
				 {
					 grant_access = true;
					 break;
				 }
				 
			 }
			 else if (o->first == a && word.find("Normal") != string::npos && word.find("TeachingRoom"))
			 {
				 if (word.find("Staff") != string::npos && user_role == "Staff" && total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((23 * 3600) + (59 * 60) + (59)))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Student") != string::npos && user_role == "Student" && total_secs >= ((8 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600)))
				 {
					 grant_access = true;
					 break;
				 }
				 
				 else if (word.find("Cleaner") != string::npos && user_role == "Cleaner" && (total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((10 * 3600) + (30 * 60))) || (total_secs >= ((17 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600) + (30 * 60))))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Manager") != string::npos && user_role == "Manager" || word.find("Security") != string::npos && user_role == "Security")
				 {
					 grant_access = true;
					 break;
				 }

			 }
			 else if (o->first == a && word.find("Normal") != string::npos && word.find("StaffRoom"))
			 {
				 if (word.find("Staff") != string::npos && user_role == "Staff" && total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((23 * 3600) + (59 * 60) + (59)))
				 {
					 grant_access = true;
					 break;
				 }

				 else if (word.find("Cleaner") != string::npos && user_role == "Cleaner" && (total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((10 * 3600) + (30 * 60))) || (total_secs >= ((17 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600) + (30 * 60))))
				 {
					 grant_access = true;
					 break;
				 }
				 else if (word.find("Manager") != string::npos && user_role == "Manager" || word.find("Security") != string::npos && user_role == "Security")
				 {
					 grant_access = true;
					 break;
				 }

			 }
			 else if (o->first == a && word.find("Normal") != string::npos && word.find("SecureRoom"))
			 {
				 if (word.find("Manager") != string::npos && user_role == "Manager" || word.find("Security") != string::npos && user_role == "Security")
				 {
					 grant_access = true;
					 break;
				 }

			 }
			 else if (o->first == a && word.find("Emergency") != string::npos)
			 {
				 if (user_role == "EmergencyResponder")
				 {
					 grant_access = true;
					 break;
				 }

			 }
			 o++;
		 }

		
		 cout << "Granted acess" << grant_access << endl;

	 }



};





//class CourseDetails : public Person
//{
//public:
//	string course;
//	/*int fee;*/
//	void set_s()
//	{
//		cout << "Enter the Course Name:";
//		cin >> course;
//
//	}
//
//	void display_s()
//	{
//		display_p();
//		cout << "\nCourse: " << course << endl;
//	}
//
//};


int main()
{
	//creating and writing map to file
	/*std::map<int, std::string> data = { {1, "student"}, {2, "student"},{3, "lecturer"} ,{4, "lecturer"} };
	std::ofstream outputFile("map.txt");

	for (const auto& pair : data) {
		outputFile << pair.first << ' ' << pair.second << '\n';
	}
	outputFile.close();*/


	//reading file back to a map
	/*Get_Room_Map r;
	r.read_map();*/
	//std::ifstream inputFile("map.txt");
	//

	///*while (inputFile >> r.key >> r.value) {
	//	r.loadedData[r.key] = r.value;
	//}*/
	/*inputFile.close();*/


	
	login o;
	o.enter_login_details();
	if (o.s == true)
	{
		string answer;

		cout << "Welcome to the admin system" << endl;
		cout << "Would you like to add a new user  ? y/n" << endl;
		cin >> answer;

		if (answer == "y") 
		{
			Room_type rt;
			rt.enter_barcode();
			rt.check_user_roles();
			rt.check_room_access();
			//User_type ut;
			//ut.enter_barcode();
			//ut.check_user_roles();
			//Update_Rooms ur;
			//ur.templateStructure();
			//Add_Rooms ar;
			//ar.templateStructure();
			//Delete_Rooms dr;
			//dr.templateStructure();
			//Add_users us;
			//us.add_users();
			//us.readuserprofiles();
			//Remove_user_roles rur;
			//rur.RemovingRoles();
			//Remove_users ru;
			//ru.remove_users();
			/*Update_user_roles ur;
			ur.UpdatingRoles();*/
			//CourseDetails s;
			//s.set_p();
			//s.set_s();
			//ofstream fout;  // Create Object of Ofstream
			//ifstream fin;
			//fin.open("UserProfiles.txt");
			//fout.open("UserProfiles.txt", ios::app); // Append mode
			//if (fin.is_open())
			//	fout << "\n";
			//fout << s.name;
			//fout << s.barcode;
			//fout << s.course;
			//// Writing data to file
			//cout << "\n Data has been appended to file";
			//fin.close();
			//fout.close(); // Closing the file
			////return 0;
			//s.display_s();
			//Get_user_list g;
			//g.readuserprofiles();
			//
			return 0;

		}
		

	}



	//CourseDetails s;
	//s.set_p();
	//s.set_s();
	//ofstream fout;  // Create Object of Ofstream
	//ifstream fin;
	//fin.open("UserProfiles.txt");
	//fout.open("UserProfiles.txt", ios::app); // Append mode
	//if (fin.is_open())
	//	fout << "\n";
	//fout << s.name;
	//fout << s.barcode;
	//fout << s.course;
	//// Writing data to file
	//cout << "\n Data has been appended to file";
	//fin.close();
	//fout.close(); // Closing the file
	////return 0;
	//s.display_s();

	//return 0;
}

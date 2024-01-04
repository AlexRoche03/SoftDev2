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
//Accessed from: https://www.educative.io/answers/how-to-get-the-current-date-and-time-in-cpp Accessed at: 29/12/23
//Accessed from: https://www.geeksforgeeks.org/convert-char-to-string-in-cpp/ Accessed at: 29/12/23
//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-append-a-string-in-an-existing-file/ Accessed at: 29/12/23
//Accessed from: https://math.hws.edu/eck/cs225/s03/files_and_strings.html Accessed at: 29/12/23
//Accessed from: https://stackoverflow.com/questions/22318389/pass-system-date-and-time-as-a-filename-in-c Accessed at: 29/12/23
//Accessed from: https://www.w3schools.com/cpp/cpp_strings_concat.asp Accessed at: 29/12/23
//Accesssed from: https://www.programiz.com/cpp-programming/library-function/ctime/strftime Accessed at:29/12/23
//MENU EXAMPLE - USED FROM - "simplemenu.docx" - made by Doc A.Watson - Accessed at:29/12/23
//Accessed from: https://oreilly.com/library/view/c-cookbook/0596007612/ch04s12.html#:~:text=erase(i%2C%20s.,first%20occurrence%20of%20the%20substring. Accessed at:31/12/23
//Accessed from: https://www.freecodecamp.org/news/c-plus-plus-map-explained-with-examples/ Accessed at:31/12/23
#define _CRT_SECURE_NO_WARNINGS
#include<iostream> 
#include <fstream>
#include <map>
#include <string>
#include <sstream>
#include <chrono>
#include <iomanip>
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
		DisplayCollegeMap();
		RoomAction();

	}

	std::map<string, std::string> map_of_rooms;//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
	string key;
	std::string value;
	void GetMapOfCollege()
	{
		std::ifstream inputFile("map.txt");
		//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
		//Accessed from https://iq.opengenus.org/2d-maps-in-cpp/ Accessed at:25/11/23
		while (inputFile >> key >> value) {
			map_of_rooms[key] = value;
		}
		inputFile.close();

	}

	virtual void RoomAction() = 0;
	void DisplayCollegeMap()
	{
		cout << "Room:";
		cout << '\n';
		cout << '\n';
		//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
		std::map<std::string, string>::iterator o = map_of_rooms.begin();
		//Accessed from https://iq.opengenus.org/2d-maps-in-cpp/ Accessed at:25/11/23
		for (o = map_of_rooms.begin(); o != map_of_rooms.end(); o++) {
			cout << o->first << '\n';
		}

	}




};

class Add_Rooms : public Get_Room_Map {
public:
	string buildingName;
	string room_number;

	string accessRoles;
	string room_type;
	string room_mode;

	string choice;
	string choice2;
	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cout << "\n\tks - enter '1'";
		cout << "\n\tfs - enter '2'";
		cout << "\n\tbs - enter '3'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")buildingName = "ks";
		else if (choice == "2")buildingName = "fs";
		else if (choice == "3")buildingName = "bs";


		cout << "What is the number of the room would you like to add ?";
		cin >> room_number;



		while (choice2 != "2")
		{
			cout << "What types of users can access this room ?";
			cout << "\n\tStudent - enter '1'";
			cout << "\n\tStaff - enter '2'";
			cout << "\n\tManager - enter '3'";
			cout << "\n\tSecurity - enter '4'";
			cout << "\n\tCleaner - enter '5'";
			cout << "\n\tVisitor - enter '6'";
			cout << '\n';
			cin >> choice;
			if (choice == "1")accessRoles.append("Student");
			else if (choice == "2")accessRoles.append("Staff");
			else if (choice == "3")accessRoles.append("Manager");
			else if (choice == "4")accessRoles.append("Security");
			else if (choice == "5")accessRoles.append("Cleaner");
			else if (choice == "6")accessRoles.append("Visitor");

			cout << "Would you like to add more user roles ?";
			cout << "\n\tYes - enter '1'";
			cout << "\n\tNo - enter '2'";
			cout << '\n';
			cin >> choice2;

		}




		cout << "What type of room is this ?";
		cout << "\n\tStaff Room - enter '1'";
		cout << "\n\tLecture Hall - enter '2'";
		cout << "\n\tSecure Room - enter '3'";
		cout << "\n\tTeaching Room - enter '4'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")room_type = "StaffRoom";
		else if (choice == "2")room_type = "LectureHall";
		else if (choice == "3")room_type = "SecureRoom";
		else if (choice == "4")room_type = "TeachingRoom";


		cout << "What is the mode of the room ?";
		cout << "\n\tNormal - enter '1'";
		cout << "\n\tEmergency - enter '2'";
		cin >> choice;
		if (choice == "1")room_mode = "Normal";
		else if (choice == "2")room_mode = "Emergency";
		map_of_rooms.insert({ buildingName + room_number,accessRoles + room_type + room_mode });


		std::ofstream outputFile("map.txt");

		for (const auto& a : map_of_rooms) {
			outputFile << a.first << ' ' << a.second << '\n';
		}
		outputFile.close();

	}

};

class Delete_Rooms : public Get_Room_Map {
public:
	string buildingName;
	string room_number;
	string choice;


	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cout << "\n\tks - enter '1'";
		cout << "\n\tfs - enter '2'";
		cout << "\n\tbs - enter '3'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")buildingName = "ks";
		else if (choice == "2")buildingName = "fs";
		else if (choice == "3")buildingName = "bs";


		cout << "What is the number of the room would you like to update ?";
		cin >> room_number;


		map_of_rooms.erase(buildingName + room_number);


		std::ofstream outputFile("map.txt");

		for (const auto& b : map_of_rooms) {
			outputFile << b.first << ' ' << b.second << '\n';
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

	string choice;
	string choice2;

	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cout << "\n\tks - enter '1'";
		cout << "\n\tfs - enter '2'";
		cout << "\n\tbs - enter '3'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")buildingName = "ks";
		else if (choice == "2")buildingName = "fs";
		else if (choice == "3")buildingName = "bs";


		cout << "What is the number of the room would you like to update ?";
		cin >> room_number;



		while (choice2 != "2")
		{
			cout << "What types of users can access this room ?";
			cout << "\n\tStudent - enter '1'";
			cout << "\n\tStaff - enter '2'";
			cout << "\n\tManager - enter '3'";
			cout << "\n\tSecurity - enter '4'";
			cout << "\n\tCleaner - enter '5'";
			cout << "\n\tVisitor - enter '6'";
			cout << '\n';
			cin >> choice;
			if (choice == "1")accessRoles.append("Student");
			else if (choice == "2")accessRoles.append("Staff");
			else if (choice == "3")accessRoles.append("Manager");
			else if (choice == "4")accessRoles.append("Security");
			else if (choice == "5")accessRoles.append("Cleaner");
			else if (choice == "6")accessRoles.append("Visitor");

			cout << "Would you like to add more user roles ?";
			cout << "\n\tYes - enter '1'";
			cout << "\n\tNo - enter '2'";
			cout << '\n';
			cin >> choice2;

		}




		cout << "What type of room is this ?";
		cout << "\n\tStaff Room - enter '1'";
		cout << "\n\tLecture Hall - enter '2'";
		cout << "\n\tSecure Room - enter '3'";
		cout << "\n\tTeaching Room - enter '4'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")room_type = "StaffRoom";
		else if (choice == "2")room_type = "LectureHall";
		else if (choice == "3")room_type = "SecureRoom";
		else if (choice == "4")room_type = "TeachingRoom";


		cout << "What is the current mode of the room ?";
		cout << "\n\tNormal - enter '1'";
		cout << "\n\tEmergency - enter '2'";
		cin >> choice;
		if (choice == "1")room_mode = "Normal";
		else if (choice == "2")room_mode = "Emergency";

		map_of_rooms[buildingName + room_number] = accessRoles + room_type + room_mode;

		std::ofstream outputFile("map.txt");

		for (const auto& c : map_of_rooms) {
			outputFile << c.first << ' ' << c.second << '\n';
		}
		outputFile.close();

	}

};

class UpdateAllRoomModes : public Get_Room_Map {
public:
	string choice;
	string current_mode;
	string new_mode;
	void RoomAction()
	{
		cout << "What is the current mode of all the rooms?";
		cout << "\n\tNormal - enter '1'";
		cout << "\n\tEmergency - enter '2'";
		cin >> choice;
		if (choice == "1")current_mode = "Normal";
		else if (choice == "2")current_mode = "Emergency";

		cout << "What would you like the new mode of all the rooms to be?";
		cout << "\n\tNormal - enter '1'";
		cout << "\n\tEmergency - enter '2'";
		cin >> choice;
		if (choice == "1")new_mode = "Normal";
		else if (choice == "2")new_mode = "Emergency";


		for (const auto& d : map_of_rooms) {
			if (d.second.find(current_mode))
			{
				int pos;
				string a = d.second;
				while ((pos = a.find(current_mode)) != string::npos) {
					a.erase(a.find(current_mode), current_mode.length());
					a.replace(pos, new_mode.length(), new_mode);

				}
				map_of_rooms[d.first] = a;
			}
		}
		std::ofstream outputFile("map.txt");

		for (const auto& c : map_of_rooms) {
			outputFile << c.first << ' ' << c.second << '\n';
		}
		outputFile.close();
	}

};



class Get_user_list {
public:

	string l;
	void readuserprofiles()
	{
		std::ifstream f("UserProfiles.txt");

		cout << "Number" << " Name" << " Role";
		cout << '\n';
		cout << '\n';
		while (f >> l) {
			cout << l << endl;
		}


	}

};
class Remove_users : public Get_user_list {
public:


	string temp;

	string r = " ";

	void remove_users()
	{
		int deleted_barcode;
		int extracted_barcode;

		std::ifstream i("UserProfiles.txt");
		std::ofstream o("temp.txt");

		cout << "Enter the card barcode number of the user you wish to delete:" << endl;
		cin >> deleted_barcode;



		while (i >> temp)//Acessed from https://www.codesdope.com/blog/article/find-and-replace-word-in-file-by-another-word/ Accessed at: 15/12/23
		{
			stringstream var;
			var << temp;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode)
			{
				temp = r;



			}

			o << "\n";
			o << temp;




		}

		i.close();
		o.close();
		//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ Accessed at: 15/12/23
		string op;

		ifstream input{ "temp.txt" };
		ofstream output{ "UserProfiles.txt" };
		if (input && output) {

			while (getline(input, op)) {
				output << op << "\n";
			}

		}
		input.close();
		output.close();


	}

};
class Remove_user_roles : public Get_user_list
{
public:
	string temp;
	string temp2;
	string temp3;
	string choice;
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
		cout << "\n\tStudent - enter '1'";
		cout << "\n\tStaff - enter '2'";
		cout << "\n\tManager - enter '3'";
		cout << "\n\tSecurity - enter '4'";
		cout << "\n\tCleaner - enter '5'";
		cout << "\n\tVisitor - enter '6'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")current_role = "Student";
		else if (choice == "2")current_role = "Staff";
		else if (choice == "3")current_role = "Manager";
		else if (choice == "4")current_role = "Security";
		else if (choice == "5")current_role = "Cleaner";
		else if (choice == "6")current_role = "Visitor";

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
			temp2.erase(temp2.find(current_role), current_role.length());
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

		//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ Accessed at: 15/12/23

		string op;

		ifstream input{ "temp.txt" };
		ofstream output{ "UserProfiles.txt" };
		if (input && output) {

			while (getline(input, op)) {
				output << op << "\n";
			}

		}

		input.close();
		output.close();


	}


};
class Update_user_roles : public Get_user_list {
public:

	string temp;
	string temp2;
	string temp3;
	string choice;
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
		cout << "\n\tStudent - enter '1'";
		cout << "\n\tStaff - enter '2'";
		cout << "\n\tManager - enter '3'";
		cout << "\n\tSecurity - enter '4'";
		cout << "\n\tCleaner - enter '5'";
		cout << "\n\tVisitor - enter '6'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")current_role = "Student";
		else if (choice == "2")current_role = "Staff";
		else if (choice == "3")current_role = "Manager";
		else if (choice == "4")current_role = "Security";
		else if (choice == "5")current_role = "Cleaner";
		else if (choice == "6")current_role = "Visitor";


		cout << "Enter the new role of the user you wish to update:" << endl;
		cout << "\n\tStudent - enter '1'";
		cout << "\n\tStaff - enter '2'";
		cout << "\n\tManager - enter '3'";
		cout << "\n\tSecurity - enter '4'";
		cout << "\n\tCleaner - enter '5'";
		cout << "\n\tVisitor - enter '6'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")updated_role = "Student";
		else if (choice == "2")updated_role = "Staff";
		else if (choice == "3")updated_role = "Manager";
		else if (choice == "4")updated_role = "Security";
		else if (choice == "5")updated_role = "Cleaner";
		else if (choice == "6")updated_role = "Visitor";

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
			temp2.erase(temp2.find(current_role), current_role.length());
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


		//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ Accessed at: 15/12/23
		string op;

		ifstream input{ "temp.txt" };
		ofstream output{ "UserProfiles.txt" };
		if (input && output) {

			while (getline(input, op)) {
				output << op << "\n";
			}

		}

		input.close();
		output.close();

	}

};
class Add_users : public Get_user_list {
private:
	long barcode;
	string name;
	string role;
public:
	string choice;
	void add_users()
	{
		ofstream o;
		ifstream i;

		i.open("UserProfiles.txt");
		cout << "Enter the users barcode, must be 5 digits long:";
		cin >> barcode;
		cout << "Enter the users Name:";
		cin >> name;
		cout << "Enter the users role:";
		cout << "\n\tStudent - enter '1'";
		cout << "\n\tStaff - enter '2'";
		cout << "\n\tManager - enter '3'";
		cout << "\n\tSecurity - enter '4'";
		cout << "\n\tCleaner - enter '5'";
		cout << "\n\tVisitor - enter '6'";
		cout << "\n\tEmergency Responder - enter '7'";
		cout << '\n';
		cin >> choice;
		if (choice == "1")role = "Student";
		else if (choice == "2")role = "Staff";
		else if (choice == "3")role = "Manager";
		else if (choice == "4")role = "Security";
		else if (choice == "5")role = "Cleaner";
		else if (choice == "6")role = "Visitor";
		else if (choice == "7")role = "EmergencyResponder";

		//Accessed at https://www.tutorialride.com/cpp-file-management/append-to-a-file-c-program.htm#google_vignette Accessed on(7/11/23)
		o.open("UserProfiles.txt", ios::app);

		o << "\n";
		o << barcode;
		o << name;
		o << role;



	}


};



class User {
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

		string roles[] = { "Staff","Student","Visitor","Guest","Cleaner","Manager","Security","EmergencyResponder" };

		for (int y = 0; y < 8; y++)
		{
			if (temp2.find(roles[y]))
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

		std::map<string, std::string> mapofrooms;
		string key;
		std::string value;

		std::ifstream inputFile("map.txt");


		while (inputFile >> key >> value) {
			mapofrooms[key] = value;
		}
		inputFile.close();


		string a = buildingName + room_number;
		std::map<std::string, string>::iterator o = mapofrooms.begin();//used to iterate through each key / value within the map

		time_t current_time = time(0);
		tm* t = localtime(&current_time);
		float hour = (float)t->tm_hour;
		float minutes = (float)t->tm_min;
		float seconds = (float)t->tm_sec;

		while (o != mapofrooms.end())
		{


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


		if (grant_access == true)
		{
			cout << "Access granted" << endl;
		}
		else if (grant_access == false)
		{
			cout << "Access denied" << endl;
		}

	}



};

class Log : public Room_type
{

public:
	void create_log_entry()
	{

		time_t now = time(0);
		char* FullTime = ctime(&now);
		/*struct tm* p = localtime(&now);*/

		string t = FullTime;
		int pos;
		string empty = " ";

		while ((pos = t.find("\n")) != string::npos) {
			t.replace(pos, empty.length(), empty);
		}


		time_t moment;
		tm* date_now;
		char d[100];
		time(&moment);
		date_now = localtime(&moment);
		strftime(d, 50, "%B %d, %Y", date_now);
		string a = d;
		string f = a.append(".txt");

		if (grant_access == true)
		{
			string entry = temp2 + " Time of access: " + t + " Room: " + buildingName + room_number + "Access: Granted";

			ofstream file_out;
			file_out.open(f.c_str(), ios::app);
			file_out << "\n";
			file_out << entry;

			file_out.close();

		}
		else if (grant_access == false)
		{
			string entry = temp2 + " Time of access: " + t + " Room: " + buildingName + room_number + "Access: Denied";

			ofstream file_out;

			file_out.open(f.c_str(), ios::app);
			file_out << "\n";
			file_out << entry;


			file_out.close();


		}



	}





};






int main()
{


	login o;
	o.enter_login_details();
	if (o.s == true)
	{


		string  key;

		do
		{
			cout << "\n\tAdmin system";
			cout << "\n\tChoose an admin feature:";
			cout << "\n\tSimulation of barcode scanner press '1'";
			cout << "\n\tAdd users press '2'";
			cout << "\n\tRemove users press '3'";
			cout << "\n\tRemove users roles '4'";
			cout << "\n\tUpdate users press '5'";
			cout << "\n\tAdd rooms press '6'";
			cout << "\n\tRemove rooms '7'";
			cout << "\n\tUpdate rooms '8'";
			cout << "\n\tUpdate all room modes '9'";
			cout << "\n\tTo Exit press '10'\n\t";
			do
			{
				cin >> key;//input choice
			} while (key != "1" && key != "2" && key != "3" && key != "4" && key != "5" && key != "6" && key != "7" && key != "8" && key != "9" && key != "10");
			cout << "\n\tChoice = " << key;
			cout << "\n";
			if (key == "1")
			{
				Log rt;
				rt.enter_barcode();
				rt.check_user_roles();
				rt.check_room_access();
				rt.create_log_entry();
			}
			if (key == "2")
			{
				Add_users us;
				us.readuserprofiles();
				us.add_users();

			}
			if (key == "3")
			{
				Remove_users ru;
				ru.readuserprofiles();
				ru.remove_users();
			}

			if (key == "4")
			{
				Remove_user_roles rur;
				rur.readuserprofiles();
				rur.RemovingRoles();
			}

			if (key == "5")
			{
				Update_user_roles ur;
				ur.readuserprofiles();
				ur.UpdatingRoles();
			}
			if (key == "6")
			{
				Add_Rooms ar;
				ar.templateStructure();
			}
			if (key == "7")
			{
				Delete_Rooms dr;
				dr.templateStructure();
			}
			if (key == "8")
			{
				Update_Rooms ur;
				ur.templateStructure();
			}
			if (key == "9")
			{
				UpdateAllRoomModes uarm;
				uarm.templateStructure();
			}
		} while (key != "10");


		return 0;




	}




}

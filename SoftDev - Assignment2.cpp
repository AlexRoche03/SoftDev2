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
//Acccessed from: https://stackoverflow.com/questions/22450423/how-to-use-crt-secure-no-warnings Accessed at:22/12/03 (only used for the #define _CRT_SECURE_NO_WARNINGS' so that i can use c_time and localtime methods)
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
private: //orivate variables can only be used in the login class and cannot be re - initialised outside of the class
	string UserName;
	string Password;
public:
	bool s;
	void enter_login_details() {
		cout << "Enter Username:";
		cin >> UserName;
		cout << "Enter Password:";
		cin >> Password;
		//Gets users input
		set_login_details();//Initiates method to check login details

	};
	void set_login_details() {
		if (UserName == "Admin") //If user input is equivalent to "Admin"
		{
			if (Password == "abc") //password is also equal to "abc"
			{
				s = true;//boolean value is true, menaiang you can access the other features of the system.
				cout << "You are logged in" << endl;
			}

		}
		else {
			s = false;//else, the bool value is false
			cout << "Incorrect details, try again" << endl;
			enter_login_details();//the enter login details method is then repeated until the user gets the right details
		}


	};
};
class Get_Room_Map {
public:
	void templateStructure() {//method only needs to be initalised once to intialie all other methods
		GetMapOfCollege();//all methods are initialised in this order
		DisplayCollegeMap();
		RoomAction();

	}
	//A map data structure stores a key value pair, the keys and values are both string data types
	std::map<string, std::string> map_of_rooms;//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
	string key;//key is initalised
	std::string value;//value is initialised
	void GetMapOfCollege()
	{
		std::ifstream inputFile("map.txt");//input stream creates a text file called "map.txt" which then outputs the map keys and values into a map datat structure.
		//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
		//Accessed from https://iq.opengenus.org/2d-maps-in-cpp/ Accessed at:25/11/23
		while (inputFile >> key >> value) {//while loop loops through file until all keys and values are initialised into the map structure
			map_of_rooms[key] = value;//keys and values are assigned here
		}
		inputFile.close();//file is closed once finished

	}

	virtual void RoomAction() = 0;//abstract method is only initalised when the 'Get_Room_Map' class is inherted by another classwhich will have it's own individiual functionality
	void DisplayCollegeMap() //displays the college map 
	{
		cout << "Room:";
		cout << '\n';
		cout << '\n';
		//Accessed from https://marketsplash.com/tutorials/cpp/cplusplus-map-to-file/ Accessed at:25/11/23
		std::map<std::string, string>::iterator o = map_of_rooms.begin();//iterates through map using a iterator function which iterates bothe keyts and values from the beginning of the map
		//Accessed from https://iq.opengenus.org/2d-maps-in-cpp/ Accessed at:25/11/23
		for (o = map_of_rooms.begin(); o != map_of_rooms.end(); o++) {//for loop that loops from the start of the map to the end of the map 
			cout << o->first << '\n';//prints out the map keys which are the building keys and room numbers combined
		}//this is done by using a pointer that points to the keys of the map only using the pointer 'first'. The 'second' pointer is then used to extract map values.

	}




};

class Add_Rooms : public Get_Room_Map {
public:
	string buildingName;//stores building name i.e.ks
	string room_number;//stores room number

	string accessRoles;//stores all roles of users that the room can grant
	string room_type;//stores the type of room
	string room_mode;//stores the room state i.e. emergency / normal
	//both 'choice' variables store the users key choice which is then used to create a menu system for users to choose which variables they wish to append
	string choice;
	string choice2;
	void RoomAction() {
		cout << "What is the code of the building where the room is located?";
		cout << "\n\tks - enter '1'";//prints statemnts indented to provide user choices more clearly
		cout << "\n\tfs - enter '2'";
		cout << "\n\tbs - enter '3'";
		cout << '\n';
		cin >> choice;//gets user choice
		if (choice == "1")buildingName = "ks";
		else if (choice == "2")buildingName = "fs";
		else if (choice == "3")buildingName = "bs";
		//if statements above are used to assign a building name value based on the users choicen of input

		cout << "What is the number of the room would you like to add ?";
		cin >> room_number;//saves room number


		//while loop used to display a menu system that displays until the user enters two at the bottom of the menu
		while (choice2 != "2")
		{
			cout << "What types of users can access this room ?";//displays a list of role choices
			cout << "\n\tStudent - enter '1'";
			cout << "\n\tStaff - enter '2'";
			cout << "\n\tManager - enter '3'";
			cout << "\n\tSecurity - enter '4'";
			cout << "\n\tCleaner - enter '5'";
			cout << "\n\tVisitor - enter '6'";
			cout << '\n';
			cin >> choice;//gets the users choice as input
			if (choice == "1")accessRoles.append("Student");//if users choose a specifici input, a string is added to the accessRoles string. 
			else if (choice == "2")accessRoles.append("Staff");
			else if (choice == "3")accessRoles.append("Manager");
			else if (choice == "4")accessRoles.append("Security");
			else if (choice == "5")accessRoles.append("Cleaner");
			else if (choice == "6")accessRoles.append("Visitor");
			//at the end, the user is prompted whether they would like to add more roles to the room or not
			cout << "Would you like to add more user roles ?";
			cout << "\n\tYes - enter '1'";//if 1 is entered, the previus menu will display again, enabaling more roles to be appended to the "accessroles" string 
			cout << "\n\tNo - enter '2'";//if 2 is entered, the menu stops displaying 
			cout << '\n';
			cin >> choice2;//gets the users second menu choice

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
		map_of_rooms.insert({ buildingName + room_number,accessRoles + room_type + room_mode });//inserts a key by concatenating the buildingName and room number as a key and then concatenates the roles, room type and mode as one string value


		std::ofstream outputFile("map.txt");//opens up map file

		for (const auto& a : map_of_rooms) {//loops te map by using pointers as constants which points to the keys and values  
			outputFile << a.first << ' ' << a.second << '\n';//inserts each key value pairs under one line in a text file
		}
		outputFile.close();//closes file stream

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


		map_of_rooms.erase(buildingName + room_number);//removes room using the key which uses the building key name and room number entered in by the user


		std::ofstream outputFile("map.txt");

		for (const auto& b : map_of_rooms) {
			outputFile << b.first << ' ' << b.second << '\n';//saves the updated map to a text file
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

		map_of_rooms[buildingName + room_number] = accessRoles + room_type + room_mode;//uses the same method as adding key value pairs but updates the values based on the users latest input

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


		for (const auto& d : map_of_rooms) {//looping through map
			if (d.second.find(current_mode))//if the key value contains the room mode / state the user has input
			{
				int index;//stores index value of the character position whther the string starts from
				string a = d.second;//stores the map key value as a temporary string
				while ((index = a.find(current_mode)) != string::npos) {//locates the starting index position of the room mode substring contained in the string value
					a.erase(a.find(current_mode), current_mode.length());//removes the substring from the map string value using the start and end string index
					a.replace(index, new_mode.length(), new_mode);//replaces room mode string and stores the new substring where the old substring was stored.

				}
				map_of_rooms[d.first] = a;//reassigns the new map value to the map key
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

	string l;//stores each line of the file
	void readuserprofiles()
	{
		std::ifstream f("UserProfiles.txt");//creates an output file stream

		cout << "Number" << " Name" << " Role";//prints out where the user barcode number, name and role is 
		cout << '\n';
		cout << '\n';
		while (f >> l) {//extracts each line within the file as a string which is a users profile
			cout << l << endl;//prints out all the profiles to the screen
		}


	}

};
class Remove_users : public Get_user_list {
public:


	string temp;//stores ecah text file line as a single string in the temp variable

	string r = " ";//empty string to replace the string with

	void remove_users()
	{
		int deleted_barcode;
		int extracted_barcode;

		ifstream i("UserProfiles.txt"); //input text file 
		ofstream o("temp.txt"); //text file that data is output to temporarily

		cout << "Enter the card barcode number of the user you wish to delete:" << endl;
		cin >> deleted_barcode;



		while (i >> temp)//Accessed from https://www.codesdope.com/blog/article/find-and-replace-word-in-file-by-another-word/ Accessed at: 15/12/23
		{//Accessed from: https://www.educative.io/answers/how-to-convert-a-string-to-an-int-in-cpp Accessed at: 17/12/23
			stringstream var;//stringstream method delclared
			var << temp;//string line of file going to string var variable that uses the stringstream method 
			var >> extracted_barcode;//barcde number is exctracted from string using the method and is then stored as a long int
			if (extracted_barcode == deleted_barcode)//if the extracted number from the file string matches the barcode emtered in by the user
			{
				temp = r;//set the string to be an empty string



			}

			o << "\n";//create a new line in the text file
			o << temp;//append the empty string to the text file, thus removing the user profile




		}

		i.close();
		o.close();
		//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ Accessed at: 15/12/23
		string op;//stores line of a file as a string

		ifstream input("temp.txt");//where the updated list of user profiles are saved to
		ofstream output("UserProfiles.txt");//where the current list of user profiles are saved to


		while (getline(input, op)) {//while loop gets ecah line of the temp text file containing up to date user profiles
			output << op << "\n";///the User Profiles text file is then overwritten with the most up to date user profiles
		}

		//closes input and output file streams
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
		string op;//stores line of a file as a string

		ifstream input("temp.txt");//where the updated list of user profiles are saved to
		ofstream output("UserProfiles.txt");//where the current list of user profiles are saved to


		while (getline(input, op)) {//while loop gets ecah line of the temp text file containing up to date user profiles
			output << op << "\n";///the User Profiles text file is then overwritten with the most up to date user profiles
		}

		//closes input and output file streams
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



		while (i >> temp)//input stream extracts each line of file as a string
		{
			stringstream var;
			var << temp;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode && temp.find(current_role))//if the users barcode matches the extracted long int barcode from the user profile string and the user profile string containes the role the user input into the system.
			{
				temp2 = temp;//save the string to the string variable 'temp2'
				break;//break out of the loop once the condition has been met

			}

		}

		i.close();


		int index;//stores index position of matching sub string found in user profile string

		while ((index = temp2.find(current_role)) != string::npos) { //gets the index position of where the matching role is located in the usder profile string using the string.find method.
			temp2.erase(temp2.find(current_role), current_role.length());//the current role is then removed from the user profile string using the first index of the matching string and the last index of the matching string by acquiring the full length of the string
			temp2.replace(index, updated_role.length(), updated_role); //the space where the old user role was located is now replaced with the new role

		}



		ifstream in("UserProfiles.txt");
		while (in >> temp3)
		{
			stringstream var;
			var << temp3;
			var >> extracted_barcode;
			if (extracted_barcode == deleted_barcode)//if extracted barcode from the user profile string matches entered barcode
			{
				temp3 = temp2;//set the user profile string with the updated string

			}

			o << "\n";//create a newline in the file
			o << temp3;//saves the updated strings to the temp text file

		}

		in.close();
		o.close();


		//Accessed from: https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ Accessed at: 15/12/23
		string op;//stores line of a file as a string

		ifstream input("temp.txt");//where the updated list of user profiles are saved to
		ofstream output("UserProfiles.txt");//where the current list of user profiles are saved to


		while (getline(input, op)) {//while loop gets ecah line of the temp text file containing up to date user profiles
			output << op << "\n";///the User Profiles text file is then overwritten with the most up to date user profiles
		}

		//closes input and output file streams
		input.close();
		output.close();


	}

};
class Add_users : public Get_user_list {
private://private means varaibles cannot be accessed outside of this class and cannot be ammended in any way, creating an encapsualted class
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
		o.open("UserProfiles.txt", ios::app); //open up user profile text file and set it in append mode to add to the text file

		o << "\n";//append a new lkine to the text file
		o << barcode;//append users entered barcode
		o << name;//apppend users entered name
		o << role;//append users entered role



	}


};



class User {
public:
	long barcode;//variable stores users entered in barcode
	void enter_barcode()
	{
		cout << "Enter the card barcode:";
		cin >> barcode;//enter in barcode here
		// Create and open a text file

	}

};

class User_type : public User {
public:
	string user_role = "undefined";//set to default as undefined user type
	string temp;//saves extracted user profile string from userprofile text file
	string temp2;
	long extracted_barcode;//saves users extracted barcode from string
	void check_user_roles()
	{
		std::ifstream i("UserProfiles.txt");
		//std::ofstream o("temp.txt");
		while (i >> temp)
		{
			stringstream var;
			var << temp;
			var >> extracted_barcode;

			if (extracted_barcode == barcode)//if extracted barcode matches barcode varaible used in the inherited 'User' class
			{
				temp2 = temp;//save the string into 'temp2' variable
				break;//break out of loop

			}
		}

		string roles[] = { "Staff","Student","Visitor","Guest","Cleaner","Manager","Security","EmergencyResponder" };//A string array containing all of the user roles

		for (int y = 0; y < 8; y++) //for loop looping through array from index 0 to index 7
		{
			if (temp2.find(roles[y]))
			{
				int index;

				while ((index = temp2.find(roles[y])) != string::npos) {//if one of the roles from the array is contained in the users profile string
					user_role = temp2.substr(index, roles[y].length());//this method extracts a user role string from the user profile string from the first matching charcters index position to the last character index position of the role
					break;//break from the while loop one completed
				}

			}
		}


		cout << "The user role is:" << user_role << endl;//print out the user role

		i.close();//close the input file stream
	}


};
class Room_type : public User_type {
public:
	string buildingName;//stores the building name code i.e. ks, fs
	string room_number;//stores the room number
	bool grant_access = false;//boolean variable which stores a boolean value i.e. true / false based on whether access to a room has been granted or not


	void check_room_access()
	{
		cout << "What is the code of the building where the room is located?";
		cin >> buildingName;//store building name code as a string from user input
		cout << "What is the number of the room would you like to access?";
		cin >> room_number;//stores a room number as string variable from user input

		map<string, string> mapofrooms;//map strcture stores the map as a key value pair
		string k;//stores key
		string v;//stores value

		ifstream mapfile("map.txt");//input file stream gets the map text file


		while (mapfile >> k >> v) {//while loop loops through the map text file and stores the indovidual map keys and values in the map structure
			mapofrooms[k] = v;//storing the map key and map value in the map structure
		}
		mapfile.close();//close the map file stream


		string a = buildingName + room_number;//concatenates the users input to one string
		map<string, string>::iterator o = mapofrooms.begin();//map iterator method used to iterate through each key / value within the map from the beginning of the map
		//it can then be used to create pointers that point to the map key and value
		time_t current_time = time(0);//time structure stores the current time of the day
		tm* t = localtime(&current_time);//tm struct is generated using a pointer to the current time struct, enabling the time to be broken down into seperate components i.e.minutes,hours,seconds 
		float hour = (float)t->tm_hour;//float variable points to current hour and stores it in a float variable called hour 
		float minutes = (float)t->tm_min;//float variable points to current minutes and stores it in a float variable called minute 
		float seconds = (float)t->tm_sec;//float variable points to current seconds and stores it in a float variable called seconds 

		while (o != mapofrooms.end())//while loop that loops throigh all of the map keys and value until the end of the map, which it then stops at
		{


			float total_secs = (hour * 3600) + (minutes * 60) + seconds;//float variable that stores the current time in seconds by converting bith the minutes and hours in seconds and then adding the current seconds, giving a total time value in seconds  

			string word = o->second;//string stores the map value
			if (o->first == a && word.find("Normal") != string::npos && word.find("LectureHall"))//if condition used to check the map key matches the concatenated key developed earlier on storing the room name and number the user has requested to enter  
			{
				if (word.find("Staff") != string::npos && user_role == "Staff" && total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((23 * 3600) + (59 * 60) + (59)))
				{//if the map value conatins the matching user role "Staff" and the user profile contains the matched role "Staff" and the local time in seconds is greater than 5:30 am converted to seconds and less than or equal to "23:59:59" converted to seconds
					grant_access = true;//grant access variable will have a boolean value of true if all of the conditions above are met
					break;//then break
				}
				else if (word.find("Student") != string::npos && user_role == "Student" && total_secs >= ((8 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600)))
				{//if the map value conatins the matching user role "Student" and the user profile contains the matched role "Student" and the local time in seconds is greater tha "8:30" am converted to seconds and less than or equal to "22:00"pm converted to seconds
					grant_access = true;//boolean value is set to true to grant access
					break;//break out of the loop
				}
				else if (word.find("Visitor") != string::npos && user_role == "Visitor" && total_secs >= ((8 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600)))
				{///if the map value conatins the matching user role "Visitor" and the user profile contains the matched role "Visitor" and the local time in seconds is greater than "8:30" am converted to seconds and less than or equal to "22:00"pm converted to seconds
					grant_access = true;//boolean value is set to true
					break;//break out of loop
				}
				else if (word.find("Cleaner") != string::npos && user_role == "Cleaner" && (total_secs >= ((5 * 3600) + (30 * 60)) && total_secs <= ((10 * 3600) + (30 * 60))) || (total_secs >= ((17 * 3600) + (30 * 60)) && total_secs <= ((22 * 3600) + (30 * 60))))
				{
					////if the map value conatins the matching user role "Cleaner" and the user profile contains the matched role "Cleaner" and the local time in seconds is greater than or equal to "5:30" am converted to seconds and less than or equal to "22:30"pm converted to seconds OR the local time is greater than or equal to "17:30" pm converted to seconds and less than or equal to "22:30" pm converted to seconds.
					grant_access = true;//boolean value is then set to true 
					break;
				}
				else if (word.find("Manager") != string::npos && user_role == "Manager" || word.find("Security") != string::npos && user_role == "Security")
				{//if the map value contains the Manager or Security roles and the user profile contains ether of these roles, then they can access the rooms at any given time
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
				{//if the user roles are "Manager" or "Security", they can access a secure room at any given time
					grant_access = true;//access granted
					break;
				}

			}
			else if (o->first == a && word.find("Emergency") != string::npos)//if the room mode is in "Emergency" mode, which is implemented where the substring "Emergency" is  found in the room value
			{
				if (user_role == "EmergencyResponder")//if the user profile string contains the user role"EmergencyResponder"
				{
					grant_access = true;//grant the user access
					break;
				}

			}
			o++;//increments the iterator at the end of the loop until it reaches the end of the "map" text file
		}


		if (grant_access == true)//if the "grant_access" variable has a boolean value of true
		{
			cout << "Access granted" << endl;//print "Access granted" to the screen
		}
		else if (grant_access == false)//if the "grant_access" variable has a boolen value of false
		{
			cout << "Access denied" << endl;//print "Access denied" to the screen
		}

	}



};

class Log : public Room_type
{

public:
	void create_log_entry()
	{

		time_t now = time(0);// time_t strct stores current time and date
		char* FullTime = ctime(&now);// character pointer points to a string of charcters that stores the current time and date


		string t = FullTime;// a string that stores the date and time, used to then save to a daily log text file
		int index;
		string empty = " ";

		while ((index = t.find("\n")) != string::npos) {
			t.replace(index, empty.length(), empty);//replaces the newline character "\n" stored in the full time string with an empty charcter, preventing a new line from being generated when in the log file
		}
		//Accesssed from this link to get the full current date and convert to a string using 'sfrtime()': https://www.programiz.com/cpp-programming/library-function/ctime/strftime Accessed at:29/12/23
		//Accesssed this link to assist my understanding of the syntax of the 'localtime()' feature and 'tm', https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm Accessed om: 5/1/23
		//Used this link to assist my understanding of'time() function': https://www.geeksforgeeks.org/time-function-in-c/ Accessed on: 5/1/23
		//Used this link to understand how to convert seconds to digital clock format i.e.days/months.
		time_t moment;//time t struct stores the current date and time. 
		tm* date_now;//tm struct seperates the current date and time into components i.e.days/months. 

		time(&moment);//gets the current local time measured in seconds 
		date_now = localtime(&moment);//gets the local time then uses the tm strct to convert to an appropiate date.

		char d[100];//character array to store a string that contains date and time up to 100 charcters, used from link on how sfrtime works
		strftime(d, 50, "%B %d, %Y", date_now); //stores the current date with 'B' representing the current month,'d' representing the current day and 'Y' representing the year as mentioned in the provoded link on how 'sfrtime()' works.The full date in it's correct format is then stored in the char array string called 'D' in it's correct format.
		string a = d;//d is then stored as a string data type called a. 
		string f = a.append(".txt");//string f then uses the previous variable called 'a' which contains the full date and then uses the append funcion to append another string ".txt" which is a file type, which then guves us a full filename. 

		if (grant_access == true) //using the boolean varaiable 'grant access' from the inherited class 'room_type', if grant_access  is set to true
		{
			string entry = temp2 + " Time of access: " + t + " Room: " + buildingName + room_number + "Access: Granted";//a string called entry stores the users profile, when the user accessed the room, which room building and number they attempted to access and a statement to say that access has been granted.
			//Accessed from: https://math.hws.edu/eck/cs225/s03/files_and_strings.html Used this link to find out how to convert a string to a filename using 'c_str()'. Accessed at: 29/12/23
			ofstream file_out;//allow data to be appeneded to a file.
			file_out.open(f.c_str(), ios::app);// opens / makes a log file using the string specified with the days,months and years with an appended file format. I also used the 'c_str()' method to then convert the string filename which then allowed the file to be created / opened with the string as the filename. 
			file_out << "\n";//creates a newline in the log text file
			file_out << entry;//appends the log entry string to the text file

			file_out.close();//closes the file

		}
		else if (grant_access == false) //if access was not granted, the same features occur if a room is granted except the log entry will say "Access:denied"
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
	//login class initaiates an object called 'o' which then calls upon the method 'enter_login_details' to then allow users to login via username and password. if incorrect, the user will have to attempt login again

	login o;
	o.enter_login_details();
	if (o.s == true)//a boolean value is also set in the login object. if the login boolean value is set to true when both the username and password details match, then access is granted to the user and hey can access all the systems features.
	{
		// used MENU EXAMPLE - used from - "simplemenu.docx" - made by Doc A.Watson - Accessed at:29/12/23
		// a menu interface is then displayed which then allows the user to pick and choose which features they want to use.
		string  key;//this varaible holds the users input choice based on what feature they want to use.

		do// a do while loop that displays the menu system continuously until the user wishes to exit by entering the number 10
		{//this link helped me understand 'do-while' loops. Accessed from: https://www.simplilearn.com/tutorials/cpp-tutorial/do-while-loop-in-cpp#:~:text=Like%20other%20loops%2C%20the%20do,piece%20of%20code%20multiple%20times. Accessed at: 5/1/23
			cout << "\n\tAdmin system";//ouputs statements that displays what key can initiate what feature i.e. 2 for adding users.
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
			cout << "\n\tTo exit the program enter '10'\n\t";
			do// a do while loop that continuously displays an input section for the user to inout the correct key until a user does enter a key from 1 - 10
			{
				cin >> key;//input choice
			} while (key != "1" && key != "2" && key != "3" && key != "4" && key != "5" && key != "6" && key != "7" && key != "8" && key != "9" && key != "10");
			cout << "\n\tEnter your key here = " << key;
			cout << "\n";
			if (key == "1")//if a certain number is entered
			{//a function will then initiate 
				Log rt;//an object of that class is then created
				rt.enter_barcode();//methods are then initialised
				rt.check_user_roles();
				rt.check_room_access();
				rt.create_log_entry();
			}
			if (key == "2") //multiple if ststaments to intiate multiple features for certain entered keys
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
		} while (key != "10");//the loop will continue until 10 is entered, in which the user exits from the program


		return 0;




	}




}

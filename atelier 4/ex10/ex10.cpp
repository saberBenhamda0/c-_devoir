#include<iostream>
#include<string>


using namespace std;

class ExtractTool {
    string char_input; 
    int int_input;
    int year;
    int month;
    int day;
    int minute;
    int hour;
    string result;

    public:
        ExtractTool(string arg_char_input) : char_input(arg_char_input)  { 
            minute = stoi(char_input.substr(10, 2));
            hour = stoi(char_input.substr(8, 2));
            year = stoi(char_input.substr(4, 4));
            month = stoi(char_input.substr(2, 2));
            day = stoi(char_input.substr(0, 2));
        }

        string convert_month_to_name(int month_number) { 
            switch(month_number){
                case 1 :
                    return "January";
                case 2 :
                    return "February";
                case 3 :
                    return "March";
                case 4 :
                    return "April";
                case 5 :
                    return "May";
                case 6 :
                    return "June";
                case 7 :
                    return "July";
                case 8 :
                    return "August";
                case 9 :
                    return "September";
                case 10 :
                    return "October";
                case 11 :
                    return "November";
                case 12 :
                    return "December";
                default:
                    return "wrong number";
            };
        }

        string get_hour_part() {
            string result = " a " + to_string(hour) + "h" + to_string(minute);
            return result;
            
        }

            string get_year() {
            string result = to_string(year);
            return result;
            
        }

            string get_month_wit_day() {
            string result = to_string(day) + "er " + convert_month_to_name(month) + " ";
            return result;
        }

        string convert_date() { 
            return get_month_wit_day() + get_year() + get_hour_part();
        }
};

int main() { 

    ExtractTool ex("010920091123");
    cout << "" << ex.convert_date() << endl;
    return 0 ;

}
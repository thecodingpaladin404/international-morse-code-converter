#include <iostream>

using namespace std;

static char convert2morse(char chartoconvert) {
	using namespace std;
	string morsechars[46] = {"*-", "-***", "-*-*", "-**", "*", "**-*", "--*", "****", "**", "*---", "-*-", "*-**", "--", "-*", "---", "*--*", "--*-", "*-*", "***", "-", "**-", "***-", "*--", "-**-", "-*--", "--**", "-----", "*----", "**---", "***--", "****-", "*****", "-****", "--***", "---**", "----*", "*-*-*-", "--**--", "**--**", "*-**-*", "---***", "*----*", "-****-", "-**-*", "-*--*", "-*--*-"};
	if (chartoconvert == ' ') {
		// do nothing
	}
	else if (chartoconvert == 'a' || chartoconvert == 'A') {
		cout << morsechars[0];
	}
	else if (chartoconvert == 'b' || chartoconvert == 'B') {
		cout << morsechars[1];
	}
	else if (chartoconvert == 'c' || chartoconvert == 'C') {
		cout << morsechars[2];
	}
	else if (chartoconvert == 'd' || chartoconvert == 'D') {
		cout << morsechars[3];
	}
	else if (chartoconvert == 'e' || chartoconvert == 'E') {
		cout << morsechars[4];
	}
	else if (chartoconvert == 'f' || chartoconvert == 'F') {
		cout << morsechars[5];
	}
	else if (chartoconvert == 'g' || chartoconvert == 'G') {
		cout << morsechars[6];
	}
	else if (chartoconvert == 'h' || chartoconvert == 'H') {
		cout << morsechars[7];
	}
	else if (chartoconvert == 'i' || chartoconvert == 'I') {
		cout << morsechars[8];
	}
	else if (chartoconvert == 'j' || chartoconvert == 'J') {
		cout << morsechars[9];
	}
	else if (chartoconvert == 'k' || chartoconvert == 'K') {
		cout << morsechars[10];
	}
	else if (chartoconvert == 'l' || chartoconvert == 'L') {
		cout << morsechars[11];
	}
	else if (chartoconvert == 'm' || chartoconvert == 'M') {
		cout << morsechars[12];
	}
	else if (chartoconvert == 'n' || chartoconvert == 'N') {
		cout << morsechars[13];
	}
	else if (chartoconvert == 'o' || chartoconvert == 'O') {
		cout << morsechars[14]; 
	}
	else if (chartoconvert == 'p' || chartoconvert == 'P') {
		cout << morsechars[15];
	}
	else if (chartoconvert == 'q' || chartoconvert == 'Q') {
		cout << morsechars[16];
	}
	else if (chartoconvert == 'r' || chartoconvert == 'R') {
		cout << morsechars[17];
	}
	else if (chartoconvert == 's' || chartoconvert == 'S') {
		cout << morsechars[18];
	}
	else if (chartoconvert == 't' || chartoconvert == 'T') {
		cout << morsechars[19];
	}
	else if (chartoconvert == 'u' || chartoconvert == 'U') {
		cout << morsechars[20];
	}
	else if (chartoconvert == 'v' || chartoconvert == 'V') {
		cout << morsechars[21];
	}
	else if (chartoconvert == 'w' || chartoconvert == 'W') {
		cout << morsechars[22];
	}
	else if (chartoconvert == 'x' || chartoconvert == 'X') {
		cout << morsechars[23];
	}
	else if (chartoconvert == 'y' || chartoconvert == 'Y') {
		cout << morsechars[24];
	}
	else if (chartoconvert == 'z' || chartoconvert == 'Z') {
		cout << morsechars[25];
	}
	else if (chartoconvert == '0') {
		cout << morsechars[26];
	}
	else if (chartoconvert == '1') {
		cout << morsechars[27];
	}
	else if (chartoconvert == '2') {
		cout << morsechars[28];
	}
	else if (chartoconvert == '3') {
		cout << morsechars[29];
	}
	else if (chartoconvert == '4') {
		cout << morsechars[30];
	}
	else if (chartoconvert == '5') {
		cout << morsechars[31];
	}
	else if (chartoconvert == '6') {
		cout << morsechars[32];
	}
	else if (chartoconvert == '7') {
		cout << morsechars[33];
	}
	else if (chartoconvert == '8') {
		cout << morsechars[34];
	}
	else if (chartoconvert == '9') {
		cout << morsechars[35];
	}
	else if (chartoconvert == '.') {
		cout << morsechars[36];
	}
	else if (chartoconvert == ',') {
		cout << morsechars[37];
	}
	else if (chartoconvert == '?') {
		cout << morsechars[38];
	}
	else if (chartoconvert == '"') {
		cout << morsechars[39];
	}
	else if (chartoconvert == ':') {
		cout << morsechars[40];
	}
	else if (chartoconvert == '\'') {
		cout << morsechars[41];
	}
	else if (chartoconvert == '-') {
		cout << morsechars[42];
	}
	else if (chartoconvert == '/') {
		cout << morsechars[43];
	}
	else if (chartoconvert == '(') {
		cout << morsechars[44];
	}
	else if (chartoconvert == ')') {
		cout << morsechars[45];
	}
	else {
		cout << "invalid_character";
	}
	cout << " ";
	return 0;
}

int main() {
	system("clear");
	cout << "Enter something you want to convert to morse code\n >> ";
	string sentence;
	cin >> sentence;
	cout << endl;
	for (char eachar: sentence) {
		convert2morse(eachar);
	}
	return 0;
}

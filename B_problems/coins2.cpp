int main() {
	string  str[3]; 
	cin >> str[0] >> str[1] >> str[2];
	short int counta = 0, countb = 0, countc = 0; 
	for (int i= 0; i<3 ;i++)
	{
		if(str[i][1]=='<')
		{
			if (str[i][2] == 'A')
				counta++;
			else if (str[i][2] == 'B')
				countb++;
			else
				countc++; 
		}
		else 
		{
			if (str[i][0] == 'A')
				counta++;
			else if (str[i][0] == 'B')
				countb++;
			else
				countc++;
		}
	}
	if (counta == countb) 
	{
		cout << "Impossible";
		return 0; 
	}
	if (countc == 0)
		cout << "C";
	else if (countb == 0)
		cout << "B";
	else
		cout << "A";
	if (countc == 1)
		cout << "C";
	else if (countb == 1)
		cout << "B";
	else
		cout << "A";
	if (countc == 2)
		cout << "C";
	else if (countb == 2)
		cout << "B";
	else
		cout << "A"; 
	return 0; 
}

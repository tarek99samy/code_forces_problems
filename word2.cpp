string s1;
	cin >> s1;
	if (s1[0] >= 97 && s1[0] <= 122)
		s1[0] -= 32;
	cout << s1 << endl;
	return 0;
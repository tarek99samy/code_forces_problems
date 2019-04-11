string s1;
	int size111; 
	cin >> size111;

	cin >> s1;
	int i = 0;
	while (i<s1.size())
	{
		if ((s1[i] == '0'&&s1[i + 1] == '1') || (s1[i] == '1'&&s1[i + 1] == '0'))
		{
			s1.erase(i, 2);
			if (i == 0)
				i--;// if you are in 0 position you won't back but you should i-- ;
			else
			{
				i = -2; // bc you want to back one step but i++ will move you forward 
			}
		}

		if (i < 0)// bc if the i is less than 0 the compiler will exit from the for loop 
		{
			i = 0;
			continue;
		}
		i++;
	}
	cout << s1.size() << endl;
	return 0;
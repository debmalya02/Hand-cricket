// hand cricket
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a, match, num, i, sum = 0, pref, pref1, pref2, sum1 = 0;
	char name[20];
	system("clear");
	srand(time(0));
	printf("Welcome, This is Hand cricket tounament \nPlease enter your name : ");
	scanf("%[^\n]s",name);
	printf("\n\nHi %s, I am Debmalya, today I will play with you \n\nWhich type of match do you want to play \tT20 (press 1) or Test match (press 2) : ", name);
	scanf("%d", &match);
	printf("\n\nNow it's time for toss!!! \tChosse Head(press 1) or Tail(press2) : ");
	scanf("%d", &pref);
	if (match == 1)
	{
		pref1 = rand() % 2;
		if (pref == (pref1 + 1))
		{
			if (pref == 1)
			{
				printf("\n\nIt's a ......Tail\tOH!! sorry %s, you lost the toss :( \n", name);
			}
			else
			{
				printf("\n\nIt's a ......Head\tOH!! sorry %s, you lost the toss :( \n", name);
			}

			printf("\nI will select bowl first:\n");
			printf("%s, You better start batting!!!\n", name);
			for (i = 1; i <= 6; i++)
			{
				printf("%s : ", name);
				scanf("%d", &num);
				if (num <= 6)
				{
					a = rand() % 6;
					printf("Deb : %d\n", a + 1);
					if (num == a + 1)
					{
						printf("OH!!!....so close\tsorry %s, you are out :(\n", name);
						break;
					}
					else
					{
						sum1 = sum1 + num;
					}
				}
				else
				{
					printf("\nCheater !!! \tupto 6 run is valid\n");
				}
			}
			printf("\nYour score is : %d\n", sum1);
			printf("\nNow %s is entering in field for bowling \tCan %s defeat the Debmalya!!!\n", name, name);
			for (i = 1; i <= 6; i++)
			{
				printf("%s : ", name);
				scanf("%d", &num);
				if (num <= 6)
				{
					a = rand() % 6;
					printf("Deb : %d\n", a + 1);
					if (num == a + 1)
					{
						printf("\nIt's a out!!!\n");
						break;
					}
					else
					{
						sum = sum + a + 1;
					}
				}
				else
				{
					printf("\nCheater !!! \tupto 6 run is valid\n");
				}
			}
			printf("\nDemalya's score : %d\n", sum);
		}
		else
		{
			if (pref == 1)
			{
				printf("\nIt's a ......Head\tHurray!!! %s, you have won the toss :) \n", name);
			}
			else
			{
				printf("\nIt's a ......Tail\tHurray!!! %s, you have won the toss :) \n", name);
			}

			printf("\nNow Chosse %s,\tBatting(press 1) or Bowling(press 2) : ", name);
			scanf("%d", &pref2);
			if (pref2 == 1)
			{
				printf("\nGood choise %s, today it's a Batting pitch :)\n", name);
			}
			else
			{
				printf("\nGood choise %s, today it's a Bowling pitch :)\n", name);
			}

			if (pref2 == 1)
			{
				printf("%s, Remeber you are batting:\n", name);
				for (i = 1; i <= 6; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("OH!!!....so close\tsorry %s, you are out :(\n", name);
							break;
						}
						else
						{
							sum1 = sum1 + num;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
				printf("\nYour score is : %d\n", sum1);
				printf("\nNow %s is entering in field for bowling \tCan %s defeat the Debmalya!!!\n", name, name);
				for (i = 1; i <= 6; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("It's a out!!! \n");
							break;
						}
						else
						{
							sum = sum + a + 1;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
				printf("\nDebmalya's score : %d\n", sum);
			}
			else
			{
				printf("\nNow %s is entering in field for bowling \tCan %s defeat the Debmalya!!!\n", name, name);
				for (i = 1; i <= 6; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("It's a out!!! \n");
							break;
						}
						else
						{
							sum = sum + a + 1;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
				printf("\nDebmalya's score : %d\n", sum);
				printf("\nNow your turn to Bat,%s :\n", name);
				for (i = 1; i <= 6; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("OH!!!....so close\tsorry %s, you are out :(\n", name);
							break;
						}
						else
						{
							sum1 = sum1 + num;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
				printf("\nYour score is : %d\n", sum1);
			}
		}
	}
	else
	{
		pref1 = rand() % 2;
		if (pref == (pref1 + 1))
		{
			if (pref == 1)
			{
				printf("\nIt's a ......Tail \t OH!! sorry %s, you lost :( \n", name);
			}
			else
			{
				printf("\nIt's a ......Head \t OH!! sorry %s, you lost :( \n", name);
			}

			printf("\nI will chosse to ....Bowl first:\n");
			printf("%s, You better start batting!!!\n", name);
			for (i = 1; i >= 1; i++)
			{
				printf("%s : ", name);
				scanf("%d", &num);
				if (num <= 6)
				{
					a = rand() % 6;
					printf("Deb : %d\n", a + 1);
					if (num == a + 1)
					{
						printf("OH!!!....so close\tsorry %s, you are out :(\tScore of %s : %d\n\n", name, name, sum1);
						break;
					}
					else
					{
						sum1 = sum1 + num;
					}
				}
				else
				{
					printf("\nCheater !!! \tupto 6 run is valid\n");
				}
			}
			printf("\nNow %s is entering in field for bowling \tCan %s defeat the Debmalya!!!\n", name, name);
			for (i = 1; i >= 1; i++)
			{
				printf("%s : ", name);
				scanf("%d", &num);
				if (num <= 6)
				{
					a = rand() % 6;
					printf("Deb : %d\n", a + 1);
					if (num == a + 1)
					{
						printf("It's a out!!! \nScore of Debmalya: %d\n", sum);
						break;
					}
					else
					{
						sum = sum + a + 1;
					}
				}
				else
				{
					printf("\nCheater !!! \tupto 6 run is valid\n");
				}
			}
		}
		else
		{
			if (pref == 1)
			{
				printf("\n\nIt's a ......Head\tHurray!!! %s, you have won the toss :) \n", name);
			}
			else
			{
				printf("\n\nIt's a ......Tail\tHurray!!! %s, you have won the toss :) \n", name);
			}

			printf("\nNow Chosse %s, \tBatting(press 1) or Bowling(press 2) : ", name);
			scanf("%d", &pref2);
			if (pref2 == 1)
				printf("\nGood choise %s, today it's a Batting pitch :)\n", name);
			else
				printf("\nGood choise %s, today it's a Bowling pitch :)\n", name);

			if (pref2 == 1)
			{
				printf("%s, Remeber you are batting:\n", name);
				for (i = 1; i >= 1; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("OH!!!....so close\tsorry %s, you are out :(\tScore of %s : %d\n\n", name, name, sum1);
							break;
						}
						else
						{
							sum1 = sum1 + num;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
				printf("\nNow %s is entering in field for bowling\tCan %s defeat Debmalya!!!\n", name, name);
				for (i = 1; i >= 1; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("It's a out!!!\tScore of Debmalya : %d\n", sum);
							break;
						}
						else
						{
							sum = sum + a + 1;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
			}
			else
			{
				printf("\nNow %s is entering in field for bowling\tCan %s defeat the Debmalya!!!\n", name, name);
				for (i = 1; i >= 1; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("It's a out!!!\tScore of Debmalya : %d\n", sum);
							break;
						}
						else
						{
							sum = sum + a + 1;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
				printf("\nNow your turn to Bat,%s \n", name);
				for (i = 1; i >= 1; i++)
				{
					printf("%s : ", name);
					scanf("%d", &num);
					if (num <= 6)
					{
						a = rand() % 6;
						printf("Deb : %d\n", a + 1);
						if (num == a + 1)
						{
							printf("OH!!!....so close\tsorry %s, you are out :( \tScore of %s: %d\n", name, name, sum1);
							break;
						}
						else
						{
							sum1 = sum1 + num;
						}
					}
					else
					{
						printf("\nCheater !!! \tupto 6 run is valid\n");
					}
				}
			}
		}
	}
	if (sum1 > sum)
	{
		printf("\nIt's your lucky day, You have won by %d, %s :)\tThree chears for %s, heap! heap! hurray!!!  \n\n", (sum1 - sum), name, name);
	}
	if (sum1 == sum)
	{
		printf("\nOHHH !!! it's a very exciting match \tUnfortudantely it's a tie :(\n\n");
	}
	if (sum1 < sum)
	{
		printf("\nOHHH !!! it's a very exciting match, %s \tUnfortudantely you lost by %d :( \tBetter luck next time\n\n", name, (sum - sum1));
	}

	return 0;
}
int redTile()
{

}
void blueTile()
{
	motor[motorA] = motor[motorC] = 50;
	while (SensorValue[S4] == 2) //2 is colorBlue
	{}
	motor[motorA] = motor[motorC] = 0;
}

int maximumInteger (float value1, float value2, float value3)
{
	if (value1 >= value2 && value1 >= value3)
	{
		return value1;
	} else if (value2 >= value1 && value2 >= value3)
	{
		return value2;
	} else
		return value3;
}

task main()
{
		SensorType[S4] = sensorEV3_Color;
		float red1 = redTile();
		float red2 =  redTile();
		float red3 = redTile();
		float maxInt = maximumInteger(red1, red2, red3);
		displayString("The maximum tile width is: %d", maxInt)
}

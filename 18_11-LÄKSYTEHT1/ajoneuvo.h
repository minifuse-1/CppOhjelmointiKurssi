#pragma once

class Ajoneuvo {
public:
	Ajoneuvo(float maxSpeedInput, int dateInput, int weightKGInput) {
		maxSpeed = maxSpeedInput;
		date = dateInput;
		weightKG = weightKGInput;
	}
	float maxSpeed;
	int date;
	int weightKG;
};

class Auto : public Ajoneuvo {
public:
	Auto(float maxSpeedInput, int dateInput, int weightKGInput, int doorInput, int wheelInput) 
		: Ajoneuvo(maxSpeedInput, dateInput, weightKGInput) {
		doors = doorInput;
		wheels = wheelInput;
	}
	int doors;
	int wheels;
};

class HenkilöAuto : public Auto {
public:
	HenkilöAuto(float maxSpeedInput, int dateInput, int weightKGInput, int doorInput, int wheelInput, int maximumPassengersInput)
		: Auto(maxSpeedInput, dateInput, weightKGInput, doorInput, wheelInput) {
		maximumPassengers = maximumPassengersInput;
	}
	int maximumPassengers;
};

class KuormaAuto : public Auto {
public:
	KuormaAuto(float maxSpeedInput, int dateInput, int weightKGInput, int doorInput, int wheelInput, int maximumPayloadInput)
	: Auto(maxSpeedInput, dateInput, weightKGInput, doorInput, wheelInput) {
		maximumPayload = maximumPayloadInput;
	}
	int maximumPayload;
};

class Laiva : public Ajoneuvo {
public:
	Laiva(float maxSpeedInput, int dateInput, int weightKGInput, int doorInput, int wheelInput, int maximumDepthInput)
		: Ajoneuvo(maxSpeedInput, dateInput, weightKGInput) {
		maximumDepth = maximumDepthInput;
	}
	int maximumDepth;
};

class Lentokone : public Ajoneuvo {
public:
	Lentokone(float maxSpeedInput, int dateInput, int weightKGInput, int doorInput, int wheelInput, int maximumAltitudeInput)
		: Ajoneuvo(maxSpeedInput, dateInput, weightKGInput) {
		maximumAltitude = maximumAltitudeInput;
	}
	int maximumAltitude;
};
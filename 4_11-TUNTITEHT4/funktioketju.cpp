
void Cfunk() {

}

void Bfunk() {
	Cfunk();
}

void Afunk() {
	Bfunk();
}





int main() {
	Afunk();
	return 0;
}
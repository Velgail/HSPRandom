#include <Windows.h>
#include <random>
//-------------------------------------------------------------------------------
//	DLLÉGÉìÉgÉäÅ[
//-------------------------------------------------------------------------------
BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD fdwReason, PVOID pvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
using namespace std;
random_device rd;
mt19937 mt;
bool is_init = false;
int WINAPI rdrnd() {
	return rd();
}
int WINAPI imrdrnd(int max) {
	return uniform_int_distribution<>(0, max)(rd);
}
int WINAPI irrdrnd(int min,int max) {
	return uniform_int_distribution<>(min, max)(rd);
}
double* WINAPI dmrdrnd(double max, double* ret) {
	*ret= uniform_real_distribution<>(0, max)(rd);
	return ret;
}
double* WINAPI drrdrnd(double min, double max, double* ret) {
	*ret= uniform_real_distribution<>(min, max)(rd);
	return ret;
}
void WINAPI hsprndinit() {
	int seed[624];
	for (auto& itr : seed) {
		itr = rd();
	}
	seed_seq s(&seed[0],&seed[624]);
	mt.seed(s);
	is_init = true;
}
void WINAPI ihsprndinit(int s) {
	mt.seed(s);
	is_init = true;
}
void WINAPI iahsprndinit(int* seed, int length) {
	seed_seq s(&seed[0], &seed[length]);
	is_init = true;
}
int WINAPI mtrnd() {
	if (!is_init) {
		hsprndinit();
	}
	return mt();
}
int WINAPI immtrnd(int max) {
	if (!is_init) {
		hsprndinit();
	}
	return uniform_int_distribution<>(0, max)(mt);
}
int WINAPI irmtrnd(int min, int max) {
	if (!is_init) {
		hsprndinit();
	}
	return uniform_int_distribution<>(min, max)(mt);
}
double* WINAPI dmmtrnd(double max, double* ret) {
	if (!is_init) {
		hsprndinit();
	}
	*ret = uniform_real_distribution<>(0, max)(mt);
	return ret;
}
double* WINAPI drmtrnd(double min, double max, double* ret) {
	if (!is_init) {
		hsprndinit();
	}
	*ret = uniform_real_distribution<>(min, max)(mt);
	return ret;
}

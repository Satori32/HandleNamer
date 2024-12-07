#include <stdio.h>
#include <string.h>
#include <stdint.h>

struct NoMean {
	const size_t N = 1;
	char E[N] = {0,};
};

template<size_t N>
NoMean ConstrutcNoMean<N>(char A[N]) {
	NoMean AA = { N,A };

	strncat(AA.E, A, N);

	return AA;
}
struct Propearty {
	//type I = void*;
	typedef void* I;
	//type inner = I;
	I Prop;
};
template<class T>
Propearty ConstructPropeaty<T>(const T& P) {
	Propearty Pr;
	Pr.Prop = P;

	return Pr;
}

bool Free(Propearty& In) {
	Free(In);

	return true;
}

struct HandleNamere {
	NoMean Name;
	Propearty Prop;
};

struct Memory {
	//type W = void*;
	typedef uint8_t W;
	//type Word = W;
	W Enpty;
};

struct PassPort {
	HandleNamere Name;
	HandleNamere From;
	HandleNamere To;
	Memory Info;
	Memory Mem;
};
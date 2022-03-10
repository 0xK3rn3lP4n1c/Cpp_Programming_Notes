#ifndef PROTECTED_H
#define PROTECTED_H

class Protected
{
	public:
		int publicv; // Everyone can access this var. 
	protected:
		int protectedv; // Anything inside this class can access this, any friend can access this and also base classes can access this
	private: // Only this class can access this var.
		int privatev;
};

#endif

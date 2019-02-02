#ifndef __BASE_HPP
#define __BASE_HPP

class base
{
public:
	base();
	~base();
//	base(const base & temp);
	int b;
	char b_name;
	static int f;
	void bp();
	virtual char prif(void);
//protected:
	int q;
private:
	int pri;
};

#endif

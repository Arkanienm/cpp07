#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T, typename F>
class Array
{
	Array();
	Array(const Array& src);
	Array(unsigned int n);
	Array& operator=(const Array& src);
	~Array();

};

#endif
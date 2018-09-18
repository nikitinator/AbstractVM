#ifndef OPERAND_CLASS_TPP
# define OPERAND_CLASS_TPP

//#include <cstring>
//#include <exception>

template <typename T>
class Operand : public IOperand
{
public:
	struct OutOfLimitsException : public std::exception {
		const char	*what() const throw();
	};
	struct NoOperand : public std::exception {
		const char	*what() const throw();
	};

	int					getPrecision(void) const = 0; // Precision of the type of the instance
	eOperandType		getType(void) const = 0; // Type of the instance
	IOperand const *	operator+(const IOperand & rhs) const = 0; // Sum
	IOperand const *	operator-(const IOperand & rhs) const = 0; // Difference
	IOperand const *	operator*(const IOperand & rhs) const = 0; // Product
	IOperand const *	operator/(const IOperand & rhs) const = 0; // Quotient
	IOperand const *	operator%(const IOperand & rhs) const = 0; // Modulo
	std::string const &	toString(void) const = 0; // String representation of the instance

	Operand();
	Operand(const Operand& array);
	Operand(unsigned int n);
	~Operand();
	Operand&	operator=(const Operand& array);
	T&	operator[](unsigned int i);
	unsigned int	size() const;

private:
	double			_value;
	unsigned int	_type;
	T				_operand;	
};

//Implementation----------------------------------------------------------------

template <typename T>
Array<T>::Array() : _size(0), _array(0) {}

template <typename T>
Array<T>::Array(const Array<T>& array) {
	*this = array;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[n];
}

template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& array) {
	if (this == &array)
		return (*this);
	delete [] _array;
	_size = array.size();
	_array = new T[array.size()];
	memcpy(_array, array._array, sizeof(T) * _size);
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i) {
	if (!_array)
		throw NoArray();
	if (i >= _size)
		throw OutOfLimitsException();
	return _array[i];	
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (_size);
}

//Exceptions--------------------------------------------------------------------
template <typename T>
const char  *Array<T>::NoArray::what() const throw() {
    return ("exception: no array");
}

template <typename T>
const char  *Array<T>::OutOfLimitsException::what() const throw() {
    return ("exception: requested element is out of limits");
}

#endif

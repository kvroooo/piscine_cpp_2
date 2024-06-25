/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:35:55 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/25 15:44:32 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

template <typename T>
class Array{
public:
	Array() : _len(1)
	{
		std::cout << "constructor called" << std::endl;
		_array = new T [1];
		_array[0] = T();
	}
	~Array()
	{
		std::cout << "destructor called" << std::endl;
		if (_array)
			delete [] _array;
	}

	Array(const Array<T> & a){
		std::cout << "copy constructor called" << std::endl;
		*this = a;
	}
	const Array<T> & operator=(const Array<T> & a)
	{
		std::cout << "copy assignement operator called" << std::endl;

		if (_array)
			delete [] _array;
		_len = a.size();
		_array = new T[_len];
		for (unsigned int i=0; i<a.size(); i++)
			this->setArr(i, a[i]);
		return *this;
	}

	Array(unsigned int n) : _len(n), _array(new T [n])
	{
		std::cout << "parametric constructor" << std::endl;
		for (unsigned int i=0; i<n; i++)
			_array[i] = T();
	}

	T & operator[](unsigned int n) const
	{
		if (n >= _len)
			throw OutOfBoundException();
		return (_array[n]);
	}

	unsigned int size(void) const
	{
		return _len;
	}

	void	setArr(size_t pos, T val)
	{
		if (pos >= _len)
			throw OutOfBoundException();
		_array[pos] = val;
	}

	void	showTab(void) const
	{
		if (!_array)
			return ;
		for (unsigned int i=0; i<_len; i++)
			std::cout << "["<< _array[i] <<"]";
		std::cout << std::endl;
	}

	class OutOfBoundException : public std::exception
	{
		virtual const char * what() const throw()	
		{ return ("index is out of bound");}
	};

private:
	unsigned int _len;
	T *_array;
};

template <typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & a)
{
	for (unsigned int i = 0; i < a.size(); i++)
		o << "["<< a[i]<< "]";
	o << std::endl;
	return o;
}
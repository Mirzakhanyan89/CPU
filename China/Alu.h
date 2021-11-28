#ifndef ALU_H
#define ALU_H

#include <iostream>
#include <string>

namespace ALU
{
	template<typename T>
	std::string OMAEVA(T&,const T&);/*+*/
	template<typename T>
	std::string MO (T&,const T&);/*-*/
	template<typename T>
	std::string SHIM (T&,const T&);/*"/"*/
	template<typename T>
	std::string DEYRU (T&,const T&);/***/
	template<typename T>
	bool NANI(T&,const T&);/*&&*/
	template<typename T>
	bool JUCU (T&,const T&);/*||*/
	template<typename T>
	bool NOCU(T&);/*!*/
	template<typename T>
	bool KIA(T&,const T&);/*^*/
	template<typename T>
	bool JUMPO> (const T&,const T&);
	template<typename T>
	bool JUMPO< (constT&,const T&);
	template<typename T>
	bool JUMPO= (const T&, const T&);
	template<typename T>
	bool JUMPO!(const T&,const T&);
	template <typename T>
	void SASUKE (T& ob);
};	/*End of namespace ALU*/

#endif	/*ALU_H*/

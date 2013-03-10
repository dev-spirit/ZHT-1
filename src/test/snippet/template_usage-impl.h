/*
 * Copyright (C) 2010-2020 DatasysLab@iit.edu(http://datasys.cs.iit.edu/index.html).
 *      Director: Ioan Raicu(iraicu@cs.iit.edu)
 *
 * This file is part of ZHT library(http://datasys.cs.iit.edu/projects/ZHT/index.html).
 *      Ioan Raicu(iraicu@cs.iit.edu),
 *      Tonglin Li(tli13@hawk.iit.edu) with nickname tony,
 *      Xiaobing Zhou(xzhou40@hawk.iit.edu) with nickname xiaobingo.
 *
 * The ZHT Library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * The ZHT Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the ZHT Library; if not, write to the
 * Data-Intensive Distributed Systems Laboratory, 10 W. 31st Street,
 * Stuart Building, Room 003B, Chicago, IL 60616 USA.
 *
 * template_usage-impl.h
 *
 *  Created on: Aug 2, 2012
 *      Author: tony, xiaobingo
 */

/*
 #ifndef TEMPLATE_USAGE_H_
 #error 'template_usage.impl.h' is not supposed to be included directly. Include 'template_usage.h' instead.
 #endif
 */

#ifndef TEMPLATE_USAGE_IMPL_H_
#define TEMPLATE_USAGE_IMPL_H_

#include <stdio.h>
#include "template_usage.h"

template<class T>
Foo<T>::Foo() {

}

template<class T>
Foo<T>::Foo(T stuff) {
	data = stuff;
}

template<class T>
inline T Foo<T>::get() const {
	return data;
}

template<class T>
inline void Foo<T>::set(T value) {
	data = value;
}

template<class T>
inline void Foo<T>::print() {
	printf("%s\n", data.c_str());
//	printf("%s\n", "hello, pyx");
}

#endif

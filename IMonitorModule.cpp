/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:31:48 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/11 16:32:17 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorModule.hpp"

IMonitorModule::IMonitorModule() {};

IMonitorModule::~IMonitorModule() {};

IMonitorModule::IMonitorModule(const IMonitorModule& other)
{
	*this = other;
};

IMonitorModule& IMonitorModule::operator=(const IMonitorModule& other)
{
	static_cast<void>(other);
	return *this;
}

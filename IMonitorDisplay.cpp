/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:26:55 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/11 16:30:31 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay() {};

IMonitorDisplay::~IMonitorDisplay() {};

IMonitorDisplay::IMonitorDisplay(const IMonitorDisplay& other)
{
	*this = other;
};

IMonitorDisplay& IMonitorDisplay::operator=(const IMonitorDisplay& other)
{
	static_cast<void>(other);
	return *this;
}

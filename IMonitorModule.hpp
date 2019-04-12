/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 12:46:14 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/11 16:33:49 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITOR_MODULE_HPP
#define IMONITOR_MODULE_HPP

#include <ncurses.h>

class IMonitorModule
{
public:
	IMonitorModule();
	virtual ~IMonitorModule() = 0;

private:
	IMonitorModule(const IMonitorModule& other);
	IMonitorModule& operator=(const IMonitorModule& other);

protected:
	WINDOW*		_infoBox;
};

#endif
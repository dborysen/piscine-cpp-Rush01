/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:05:54 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/11 16:56:14 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITOR_DISPLAY_HPP
#define IMONITOR_DISPLAY_HPP

#include <ncurses.h>

class IMonitorDisplay
{
public:
	IMonitorDisplay();
	virtual ~IMonitorDisplay();

	virtual void	OutputTime(WINDOW* win) const = 0;
	virtual void	OutputOSIinfo(WINDOW* win) const = 0;
	virtual void	OutputUsernameAndHostname(WINDOW* win) const = 0;
	virtual void	OutputCPUAndRAM(WINDOW* win) const = 0;
	virtual void	OutputNetworkThroughput(WINDOW* win) const = 0;
	virtual void	OutputDisks(WINDOW* win) const = 0;
	virtual void	OutputProcessesNo(WINDOW* win) const = 0;

private:
	IMonitorDisplay(const IMonitorDisplay& other);
	IMonitorDisplay& operator=(const IMonitorDisplay& other);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:05:54 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/11 16:08:06 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITOR_DISPLAY_HPP
#define IMONITOR_DISPLAY_HPP

class IMonitorDisplay
{
public:
	IMonitorDisplay();
	~IMonitorDisplay();

private:
	IMonitorDisplay(const IMonitorDisplay& other);
	IMonitorDisplay& operator=(const IMonitorDisplay& other);
};

#endif

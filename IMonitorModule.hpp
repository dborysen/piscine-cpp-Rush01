/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 12:46:14 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/11 16:05:41 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITOR_MODULE_HPP
#define IMONITOR_MODULE_HPP

class IMonitorModule
{
public:
	IMonitorModule();
	~IMonitorModule();

private:
	IMonitorModule(const IMonitorModule& other);
	IMonitorModule& operator=(const IMonitorModule& other);

};

#endif
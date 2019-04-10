/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gkrellm.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:20:11 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/10 16:08:22 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GKRELLM_HPP
#define GKRELLM_HPP

#include <iostream>
#include <algorithm>
#include <ncurses.h>
#include <sys/utsname.h>

class Gkrellm
{
public:

	Gkrellm();
	~Gkrellm();

	void Start();

private:
	void	_StartNcursesMode();
	void	_EndNcursesMode() const;

	void	_MakeBox();

	void	OutputTime(WINDOW* win) const;
	void	OutputOSIinfo(WINDOW* win) const;
	void	OutputUsernameAndHostname(WINDOW* win) const;
	void	OutputCPUAndRAM(WINDOW* win) const;
	void	OutputNetworkThroughput(WINDOW* win) const;

	// void	OutputRAM(WINDOW* win) const;


	WINDOW*		_infoBox;
};

#endif
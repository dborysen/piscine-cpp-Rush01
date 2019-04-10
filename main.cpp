/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <dborysen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:48:19 by dborysen          #+#    #+#             */
/*   Updated: 2019/04/09 15:38:09 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Gkrellm.hpp"

int main()
{
	Gkrellm().Start();

	// initscr();
	// // cbreak();
	// raw();
	// noecho();

	// int heigh = 40;
	// int width = 80;
	// int startY = 0;
	// int startX = 0;

	// int yMax;
	// int xMax;

	// WINDOW*	win = newwin(heigh, width, startY, startX);
	// refresh();

	// box(win, 0, 0);	

	// getmaxyx(win, yMax, xMax);

	// mvwprintw(win, yMax / 2, xMax / 2, "this my box");

	// if (wgetch(win) == 'q')
	// {
	// 	mvwprintw(win, 1, 1, "You pressed q!");
	// 	wrefresh(win);
	// }

	// // while (wgetch(win) != 'q')
	// // {
	// // 	exit(0);
	// // }
	


	// wrefresh(win);

	// getch();
	
	// clear();

	// endwin();

	return 0;
}
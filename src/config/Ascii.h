// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n                                                                \n"
																						
									" __   __   __  _   _ ___ _  _  ___ ___ _     ___  ___  __  _ _  _ \n"
									"|__] |__| |__]  \\_/   |  |  | |__/  |  |    |___ |    |  | | |\\ | \n"
									"|__] |  | |__]   |    |  |__| |  \\  |  |___ |___ |___ |__| | | \\| \n"
									"\n"   
									"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n"
									"|     Baby    Turtle    Coin    | \n"
									"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ \n";											   											

const std::string nonWindowsAsciiArt =
    "\n                                                                            \n"
    "████████╗██╗  ██╗██████╗ ████████╗██╗    ██████╗ █████╗ █████╗ ██╗███╗   ██╗\n"
    "╚══██╔══╝██║  ██║██╔══██╗╚══██╔══╝██║    ██╔═══╝██╔═══╝██╔══██╗██║████╗  ██║\n"
    "   ██║   ██║  ██║██████╔╝   ██║   ██║    ████╗  ██║    ██║  ██║██║██╔██╗ ██║\n"
    "   ██║   ██║  ██║██╔══██╗   ██║   ██║    ██╔═╝  ██║    ██║  ██║██║██║╚██╗██║\n"
    "   ██║   ╚█████╔╝██║  ██║   ██║   ██████╗██████╗╚█████╗╚█████╔╝██║██║ ╚████║\n"
    "   ╚═╝    ╚════╝ ╚═╝  ╚═╝   ╚═╝   ╚═════╝╚═════╝ ╚════╝ ╚════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif

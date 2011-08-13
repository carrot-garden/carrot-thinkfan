/********************************************************************
 * config_parser.h: Header for the config parser
 *
 * This file is part of thinkfan.

 * thinkfan is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * thinkfan is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with thinkfan.  If not, see <http://www.gnu.org/licenses/>.
 ********************************************************************/

#ifndef CONFIG_PARSER_H
#define CONFIG_PARSER_H

struct sensor *parse_sensor(char **input);
char *parse_fan(char **input);
struct limit *parse_fan_level(char **input);
char *parse_keyword(char **input, const char *keyword);
char *parse_comment(char **input);
int parse_blankline(char **input);

void skip_space(char **input);
int *parse_int(char **input);

#endif

# uzbl-history-c

This is a simple wrapper program to replace [uzbl]'s history.sh.

Since history.sh is called on every page load, this is useful due to
improved speed.

Compiles with gcc:
`gcc -O3 -Wall -std=c99 -o history.elf history.c`

Usage: drop it in uzbl's script path and update your config file.

License: GPLv3. A `LICENSE` file should be included. If not, see [GNU]'s
page.

Seems to work fine with latest stable (2012.05.14) and current git
(2012.12.16).

[uzbl]: http://www.uzbl.org/
[GNU]: https://www.gnu.org/licenses/gpl.html

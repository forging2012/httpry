/*

  ----------------------------------------------------
  httpry - HTTP logging and information retrieval tool
  ----------------------------------------------------

  Copyright (c) 2005-2007 Jason Bittel <jason.bittel@gmail.com>

*/

#define PROG_NAME "httpry"
#define PROG_VER "0.1.1"

/* Default packet capture filter; must be a standard libpcap style filter
   *** Can be overridden with -f */
#define DEFAULT_CAPFILTER "tcp port 80 or 8080"

/* Default output format string; see doc/format-string for more info
   *** Can be overridden with -s */
#define DEFAULT_FORMAT "timestamp,source-ip,dest-ip,direction,method,host,request-uri,http-version,status-code,reason-phrase"

/* Location to store the PID file when running in daemon mode */
#define PID_FILE "/var/run/httpry.pid"

/* Where to send unnecessary output */
#define NULL_FILE "/dev/null"

/* HTTP specific constants; should never change! */
#define HEADER_DELIM "\r\n"
#define GET_STRING "GET "
#define HEAD_STRING "HEAD "
#define HTTP_STRING "HTTP/"

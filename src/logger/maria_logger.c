#include "maria_logger.h"

void maria_log(char *message) {
  openlog("libnss-maria", LOG_PID|LOG_CONS, LOG_USER);
  syslog(LOG_INFO, message);
  closelog();
}

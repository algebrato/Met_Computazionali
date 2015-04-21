#!/bin/bash

echo -n "il PID di cron è : "
ps aux | grep cron | grep -v grep | awk {'print $2;'}

exit 0



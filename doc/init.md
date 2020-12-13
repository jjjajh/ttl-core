# Sample init scripts and service configuration for thatsthelabord

Sample scripts and configuration files for systemd, Upstart and OpenRC
can be found in the contrib/init folder.

    contrib/init/thatsthelabord.service:    systemd service unit configuration
    contrib/init/thatsthelabord.openrc:     OpenRC compatible SysV style init script
    contrib/init/thatsthelabord.openrcconf: OpenRC conf.d file
    contrib/init/thatsthelabord.conf:       Upstart service configuration file
    contrib/init/thatsthelabord.init:       CentOS compatible SysV style init script

# Service User

All three startup configurations assume the existence of a "thatsthelabor" user
and group.  They must be created before attempting to use these scripts.

# Configuration

At a bare minimum, thatsthelabord requires that the rpcpassword setting be set
when running as a daemon.  If the configuration file does not exist or this
setting is not set, thatsthelabord will shutdown promptly after startup.

This password does not have to be remembered or typed as it is mostly used
as a fixed token that thatsthelabord and client programs read from the configuration
file, however it is recommended that a strong and secure password be used
as this password is security critical to securing the wallet should the
wallet be enabled.

If thatsthelabord is run with `-daemon` flag, and no rpcpassword is set, it will
print a randomly generated suitable password to stderr.  You can also
generate one from the shell yourself like this:

```bash
bash -c 'tr -dc a-zA-Z0-9 < /dev/urandom | head -c32 && echo'
```

Once you have a password in hand, set `rpcpassword=` in `/etc/thatsthelabor/thatsthelabor.conf`

For an example configuration file that describes the configuration settings,
see `contrib/debian/examples/thatsthelabor.conf`.

# Paths

All three configurations assume several paths that might need to be adjusted.
```
Binary:              /usr/bin/thatsthelabord
Configuration file:  /etc/thatsthelabor/thatsthelabor.conf
Data directory:      /var/lib/thatsthelabord
PID file:            /var/run/thatsthelabord/thatsthelabord.pid (OpenRC and Upstart)
                     /var/lib/thatsthelabord/thatsthelabord.pid (systemd)
```
The configuration file, PID directory (if applicable) and data directory
should all be owned by the thatsthelabor user and group.  It is advised for security
reasons to make the configuration file and data directory only readable by the
thatsthelabor user and group.  Access to thatsthelabor-cli and other thatsthelabord rpc clients
can then be controlled by group membership.

# Installing Service Configuration

## systemd

Installing this .service file consists on just copying it to
`/usr/lib/systemd/system` directory, followed by the command
`systemctl daemon-reload` in order to update running systemd configuration.

To test, run "systemctl start thatsthelabord" and to enable for system startup run
`systemctl enable thatsthelabord`

## OpenRC

Rename thatsthelabord.openrc to thatsthelabord and drop it in `/etc/init.d`.  Double
check ownership and permissions and make it executable.  Test it with
`/etc/init.d/thatsthelabord start` and configure it to run on startup with
`rc-update add thatsthelabord`

## Upstart (for Debian/Ubuntu based distributions)

Drop thatsthelabord.conf in `/etc/init`.  Test by running "service thatsthelabord start"
it will automatically start on reboot.

NOTE: This script is incompatible with CentOS 5 and Amazon Linux 2014 as they
use old versions of Upstart and do not supply the start-stop-daemon uitility.

## CentOS

Copy thatsthelabord.init to `/etc/init.d/thatsthelabord`. Test by running "service thatsthelabord start".

Using this script, you can adjust the path and flags to the thatsthelabord program by
setting the THATSTHELABORD and FLAGS environment variables in the file
`/etc/sysconfig/thatsthelabord`. You can also use the DAEMONOPTS environment variable here.

# Auto-respawn

Auto respawning is currently only configured for Upstart and systemd.
Reasonable defaults have been chosen but YMMV.

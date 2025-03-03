/* $OpenBSD: pathnames.h,v 1.28 2018/02/23 15:58:37 markus Exp $ */

/*
 * Author: Tatu Ylonen <ylo@cs.hut.fi>
 * Copyright (c) 1995 Tatu Ylonen <ylo@cs.hut.fi>, Espoo, Finland
 *                    All rights reserved
 *
 * As far as I am concerned, the code I have written for this software
 * can be used freely for any purpose.  Any derived versions of this
 * software must be clearly marked as such, and if the derived work is
 * incompatible with the protocol description in the RFC file, it must be
 * called by a name other than "ssh" or "Secure Shell".
 */

#define ETCDIR				"/etc"

#ifndef SSHDIR
#define SSHDIR				ETCDIR "/ssh"
#endif

#ifndef _PATH_SSH_PIDDIR
#define _PATH_SSH_PIDDIR		"/var/run"
#endif

/*
 * System-wide file containing host keys of known hosts.  This file should be
 * world-readable.
 */
#define _PATH_SSH_SYSTEM_HOSTFILE	SSHDIR "/ssh_known_hosts"
/* backward compat for protocol 2 */
#define _PATH_SSH_SYSTEM_HOSTFILE2	SSHDIR "/ssh_known_hosts2"

/*
 * Of these, ssh_host_key must be readable only by root, whereas ssh_config
 * should be world-readable.
 */
#define _PATH_SERVER_CONFIG_FILE	SSHDIR "/sshd_config"
#define _PATH_HOST_CONFIG_FILE		SSHDIR "/ssh_config"
#define _PATH_HOST_DSA_KEY_FILE		SSHDIR "/ssh_host_dsa_key"
#define _PATH_HOST_ECDSA_KEY_FILE	SSHDIR "/ssh_host_ecdsa_key"
#define _PATH_HOST_ED25519_KEY_FILE	SSHDIR "/ssh_host_ed25519_key"
#define _PATH_HOST_XMSS_KEY_FILE	SSHDIR "/ssh_host_xmss_key"
#define _PATH_HOST_RSA_KEY_FILE		SSHDIR "/ssh_host_rsa_key"
///// OQS_TEMPLATE_FRAGMENT_DEFINE_OQS_KEY_FILES_START
#define _PATH_HOST_OQSDEFAULT_KEY_FILE SSHDIR "/ssh_host_oqsdefault_key"
#define _PATH_HOST_DILITHIUM_2_KEY_FILE SSHDIR "/ssh_host_dilithium2_key"
#define _PATH_HOST_DILITHIUM_4_KEY_FILE SSHDIR "/ssh_host_dilithium4_key"
#define _PATH_HOST_MQDSS_31_48_KEY_FILE SSHDIR "/ssh_host_mqdss3148_key"
#define _PATH_HOST_PICNIC_L1FS_KEY_FILE SSHDIR "/ssh_host_picnicl1fs_key"
#define _PATH_HOST_PICNIC_L1UR_KEY_FILE SSHDIR "/ssh_host_picnicl1ur_key"
#define _PATH_HOST_PICNIC_L3FS_KEY_FILE SSHDIR "/ssh_host_picnicl3fs_key"
#define _PATH_HOST_PICNIC_L3UR_KEY_FILE SSHDIR "/ssh_host_picnicl3ur_key"
#define _PATH_HOST_PICNIC_L5FS_KEY_FILE SSHDIR "/ssh_host_picnicl5fs_key"
#define _PATH_HOST_PICNIC_L5UR_KEY_FILE SSHDIR "/ssh_host_picnicl5ur_key"
#define _PATH_HOST_PICNIC2_L1FS_KEY_FILE SSHDIR "/ssh_host_picnic2l1fs_key"
#define _PATH_HOST_PICNIC2_L3FS_KEY_FILE SSHDIR "/ssh_host_picnic2l3fs_key"
#define _PATH_HOST_QTESLA_I_KEY_FILE SSHDIR "/ssh_host_qteslai_key"
#define _PATH_HOST_QTESLA_III_SIZE_KEY_FILE SSHDIR "/ssh_host_qteslaiiisize_key"
#define _PATH_HOST_QTESLA_III_SPEED_KEY_FILE SSHDIR "/ssh_host_qteslaiiispeed_key"
#define _PATH_HOST_SPHINCS_HARAKA_128F_ROBUST_KEY_FILE SSHDIR "/ssh_host_sphincsharaka128frobust_key"
#define _PATH_HOST_RSA3072_OQSDEFAULT_KEY_FILE SSHDIR "/ssh_host_rsa3072_oqsdefault_key"
#define _PATH_HOST_P256_OQSDEFAULT_KEY_FILE SSHDIR "/ssh_host_p256_oqsdefault_key"
#define _PATH_HOST_RSA3072_DILITHIUM_2_KEY_FILE SSHDIR "/ssh_host_rsa3072_dilithium2_key"
#define _PATH_HOST_P256_DILITHIUM_2_KEY_FILE SSHDIR "/ssh_host_p256_dilithium2_key"
#define _PATH_HOST_P384_DILITHIUM_4_KEY_FILE SSHDIR "/ssh_host_p384_dilithium4_key"
#define _PATH_HOST_RSA3072_MQDSS_31_48_KEY_FILE SSHDIR "/ssh_host_rsa3072_mqdss3148_key"
#define _PATH_HOST_P256_MQDSS_31_48_KEY_FILE SSHDIR "/ssh_host_p256_mqdss3148_key"
#define _PATH_HOST_RSA3072_PICNIC_L1FS_KEY_FILE SSHDIR "/ssh_host_rsa3072_picnicl1fs_key"
#define _PATH_HOST_P256_PICNIC_L1FS_KEY_FILE SSHDIR "/ssh_host_p256_picnicl1fs_key"
#define _PATH_HOST_RSA3072_PICNIC_L1UR_KEY_FILE SSHDIR "/ssh_host_rsa3072_picnicl1ur_key"
#define _PATH_HOST_P256_PICNIC_L1UR_KEY_FILE SSHDIR "/ssh_host_p256_picnicl1ur_key"
#define _PATH_HOST_P384_PICNIC_L3FS_KEY_FILE SSHDIR "/ssh_host_p384_picnicl3fs_key"
#define _PATH_HOST_P384_PICNIC_L3UR_KEY_FILE SSHDIR "/ssh_host_p384_picnicl3ur_key"
#define _PATH_HOST_P521_PICNIC_L5FS_KEY_FILE SSHDIR "/ssh_host_p521_picnicl5fs_key"
#define _PATH_HOST_P521_PICNIC_L5UR_KEY_FILE SSHDIR "/ssh_host_p521_picnicl5ur_key"
#define _PATH_HOST_RSA3072_PICNIC2_L1FS_KEY_FILE SSHDIR "/ssh_host_rsa3072_picnic2l1fs_key"
#define _PATH_HOST_P256_PICNIC2_L1FS_KEY_FILE SSHDIR "/ssh_host_p256_picnic2l1fs_key"
#define _PATH_HOST_P384_PICNIC2_L3FS_KEY_FILE SSHDIR "/ssh_host_p384_picnic2l3fs_key"
#define _PATH_HOST_RSA3072_QTESLA_I_KEY_FILE SSHDIR "/ssh_host_rsa3072_qteslai_key"
#define _PATH_HOST_P256_QTESLA_I_KEY_FILE SSHDIR "/ssh_host_p256_qteslai_key"
#define _PATH_HOST_P384_QTESLA_III_SIZE_KEY_FILE SSHDIR "/ssh_host_p384_qteslaiiisize_key"
#define _PATH_HOST_P384_QTESLA_III_SPEED_KEY_FILE SSHDIR "/ssh_host_p384_qteslaiiispeed_key"
#define _PATH_HOST_RSA3072_SPHINCS_HARAKA_128F_ROBUST_KEY_FILE SSHDIR "/ssh_host_rsa3072_sphincsharaka128frobust_key"
#define _PATH_HOST_P256_SPHINCS_HARAKA_128F_ROBUST_KEY_FILE SSHDIR "/ssh_host_p256_sphincsharaka128frobust_key"
///// OQS_TEMPLATE_FRAGMENT_DEFINE_OQS_KEY_FILES_END
#define _PATH_DH_MODULI			SSHDIR "/moduli"

#ifndef _PATH_SSH_PROGRAM
#define _PATH_SSH_PROGRAM		"/usr/bin/ssh"
#endif

/*
 * The process id of the daemon listening for connections is saved here to
 * make it easier to kill the correct daemon when necessary.
 */
#define _PATH_SSH_DAEMON_PID_FILE	_PATH_SSH_PIDDIR "/sshd.pid"

/*
 * The directory in user's home directory in which the files reside. The
 * directory should be world-readable (though not all files are).
 */
#define _PATH_SSH_USER_DIR		".ssh"

/*
 * Per-user file containing host keys of known hosts.  This file need not be
 * readable by anyone except the user him/herself, though this does not
 * contain anything particularly secret.
 */
#define _PATH_SSH_USER_HOSTFILE		"~/" _PATH_SSH_USER_DIR "/known_hosts"
/* backward compat for protocol 2 */
#define _PATH_SSH_USER_HOSTFILE2	"~/" _PATH_SSH_USER_DIR "/known_hosts2"

/*
 * Name of the default file containing client-side authentication key. This
 * file should only be readable by the user him/herself.
 */
#define _PATH_SSH_CLIENT_ID_DSA		_PATH_SSH_USER_DIR "/id_dsa"
#define _PATH_SSH_CLIENT_ID_ECDSA	_PATH_SSH_USER_DIR "/id_ecdsa"
#define _PATH_SSH_CLIENT_ID_RSA		_PATH_SSH_USER_DIR "/id_rsa"
#define _PATH_SSH_CLIENT_ID_ED25519	_PATH_SSH_USER_DIR "/id_ed25519"
#define _PATH_SSH_CLIENT_ID_XMSS	_PATH_SSH_USER_DIR "/id_xmss"
///// OQS_TEMPLATE_FRAGMENT_DEFINE_OQS_ID_FILES_START
#define _PATH_SSH_CLIENT_ID_OQSDEFAULT _PATH_SSH_USER_DIR "/id_oqsdefault"
#define _PATH_SSH_CLIENT_ID_DILITHIUM_2 _PATH_SSH_USER_DIR "/id_dilithium2"
#define _PATH_SSH_CLIENT_ID_DILITHIUM_4 _PATH_SSH_USER_DIR "/id_dilithium4"
#define _PATH_SSH_CLIENT_ID_MQDSS_31_48 _PATH_SSH_USER_DIR "/id_mqdss3148"
#define _PATH_SSH_CLIENT_ID_PICNIC_L1FS _PATH_SSH_USER_DIR "/id_picnicl1fs"
#define _PATH_SSH_CLIENT_ID_PICNIC_L1UR _PATH_SSH_USER_DIR "/id_picnicl1ur"
#define _PATH_SSH_CLIENT_ID_PICNIC_L3FS _PATH_SSH_USER_DIR "/id_picnicl3fs"
#define _PATH_SSH_CLIENT_ID_PICNIC_L3UR _PATH_SSH_USER_DIR "/id_picnicl3ur"
#define _PATH_SSH_CLIENT_ID_PICNIC_L5FS _PATH_SSH_USER_DIR "/id_picnicl5fs"
#define _PATH_SSH_CLIENT_ID_PICNIC_L5UR _PATH_SSH_USER_DIR "/id_picnicl5ur"
#define _PATH_SSH_CLIENT_ID_PICNIC2_L1FS _PATH_SSH_USER_DIR "/id_picnic2l1fs"
#define _PATH_SSH_CLIENT_ID_PICNIC2_L3FS _PATH_SSH_USER_DIR "/id_picnic2l3fs"
#define _PATH_SSH_CLIENT_ID_QTESLA_I _PATH_SSH_USER_DIR "/id_qteslai"
#define _PATH_SSH_CLIENT_ID_QTESLA_III_SIZE _PATH_SSH_USER_DIR "/id_qteslaiiisize"
#define _PATH_SSH_CLIENT_ID_QTESLA_III_SPEED _PATH_SSH_USER_DIR "/id_qteslaiiispeed"
#define _PATH_SSH_CLIENT_ID_SPHINCS_HARAKA_128F_ROBUST _PATH_SSH_USER_DIR "/id_sphincsharaka128frobust"
#define _PATH_SSH_CLIENT_ID_RSA3072_OQSDEFAULT _PATH_SSH_USER_DIR "/id_rsa3072_oqsdefault"
#define _PATH_SSH_CLIENT_ID_P256_OQSDEFAULT _PATH_SSH_USER_DIR "/id_p256_oqsdefault"
#define _PATH_SSH_CLIENT_ID_RSA3072_DILITHIUM_2 _PATH_SSH_USER_DIR "/id_rsa3072_dilithium2"
#define _PATH_SSH_CLIENT_ID_P256_DILITHIUM_2 _PATH_SSH_USER_DIR "/id_p256_dilithium2"
#define _PATH_SSH_CLIENT_ID_P384_DILITHIUM_4 _PATH_SSH_USER_DIR "/id_p384_dilithium4"
#define _PATH_SSH_CLIENT_ID_RSA3072_MQDSS_31_48 _PATH_SSH_USER_DIR "/id_rsa3072_mqdss3148"
#define _PATH_SSH_CLIENT_ID_P256_MQDSS_31_48 _PATH_SSH_USER_DIR "/id_p256_mqdss3148"
#define _PATH_SSH_CLIENT_ID_RSA3072_PICNIC_L1FS _PATH_SSH_USER_DIR "/id_rsa3072_picnicl1fs"
#define _PATH_SSH_CLIENT_ID_P256_PICNIC_L1FS _PATH_SSH_USER_DIR "/id_p256_picnicl1fs"
#define _PATH_SSH_CLIENT_ID_RSA3072_PICNIC_L1UR _PATH_SSH_USER_DIR "/id_rsa3072_picnicl1ur"
#define _PATH_SSH_CLIENT_ID_P256_PICNIC_L1UR _PATH_SSH_USER_DIR "/id_p256_picnicl1ur"
#define _PATH_SSH_CLIENT_ID_P384_PICNIC_L3FS _PATH_SSH_USER_DIR "/id_p384_picnicl3fs"
#define _PATH_SSH_CLIENT_ID_P384_PICNIC_L3UR _PATH_SSH_USER_DIR "/id_p384_picnicl3ur"
#define _PATH_SSH_CLIENT_ID_P521_PICNIC_L5FS _PATH_SSH_USER_DIR "/id_p521_picnicl5fs"
#define _PATH_SSH_CLIENT_ID_P521_PICNIC_L5UR _PATH_SSH_USER_DIR "/id_p521_picnicl5ur"
#define _PATH_SSH_CLIENT_ID_RSA3072_PICNIC2_L1FS _PATH_SSH_USER_DIR "/id_rsa3072_picnic2l1fs"
#define _PATH_SSH_CLIENT_ID_P256_PICNIC2_L1FS _PATH_SSH_USER_DIR "/id_p256_picnic2l1fs"
#define _PATH_SSH_CLIENT_ID_P384_PICNIC2_L3FS _PATH_SSH_USER_DIR "/id_p384_picnic2l3fs"
#define _PATH_SSH_CLIENT_ID_RSA3072_QTESLA_I _PATH_SSH_USER_DIR "/id_rsa3072_qteslai"
#define _PATH_SSH_CLIENT_ID_P256_QTESLA_I _PATH_SSH_USER_DIR "/id_p256_qteslai"
#define _PATH_SSH_CLIENT_ID_P384_QTESLA_III_SIZE _PATH_SSH_USER_DIR "/id_p384_qteslaiiisize"
#define _PATH_SSH_CLIENT_ID_P384_QTESLA_III_SPEED _PATH_SSH_USER_DIR "/id_p384_qteslaiiispeed"
#define _PATH_SSH_CLIENT_ID_RSA3072_SPHINCS_HARAKA_128F_ROBUST _PATH_SSH_USER_DIR "/id_rsa3072_sphincsharaka128frobust"
#define _PATH_SSH_CLIENT_ID_P256_SPHINCS_HARAKA_128F_ROBUST _PATH_SSH_USER_DIR "/id_p256_sphincsharaka128frobust"
///// OQS_TEMPLATE_FRAGMENT_DEFINE_OQS_ID_FILES_END

/*
 * Configuration file in user's home directory.  This file need not be
 * readable by anyone but the user him/herself, but does not contain anything
 * particularly secret.  If the user's home directory resides on an NFS
 * volume where root is mapped to nobody, this may need to be world-readable.
 */
#define _PATH_SSH_USER_CONFFILE		_PATH_SSH_USER_DIR "/config"

/*
 * File containing a list of those rsa keys that permit logging in as this
 * user.  This file need not be readable by anyone but the user him/herself,
 * but does not contain anything particularly secret.  If the user's home
 * directory resides on an NFS volume where root is mapped to nobody, this
 * may need to be world-readable.  (This file is read by the daemon which is
 * running as root.)
 */
#define _PATH_SSH_USER_PERMITTED_KEYS	_PATH_SSH_USER_DIR "/authorized_keys"

/* backward compat for protocol v2 */
#define _PATH_SSH_USER_PERMITTED_KEYS2	_PATH_SSH_USER_DIR "/authorized_keys2"

/*
 * Per-user and system-wide ssh "rc" files.  These files are executed with
 * /bin/sh before starting the shell or command if they exist.  They will be
 * passed "proto cookie" as arguments if X11 forwarding with spoofing is in
 * use.  xauth will be run if neither of these exists.
 */
#define _PATH_SSH_USER_RC		_PATH_SSH_USER_DIR "/rc"
#define _PATH_SSH_SYSTEM_RC		SSHDIR "/sshrc"

/*
 * Ssh-only version of /etc/hosts.equiv.  Additionally, the daemon may use
 * ~/.rhosts and /etc/hosts.equiv if rhosts authentication is enabled.
 */
#define _PATH_SSH_HOSTS_EQUIV		SSHDIR "/shosts.equiv"
#define _PATH_RHOSTS_EQUIV		"/etc/hosts.equiv"

/*
 * Default location of askpass
 */
#ifndef _PATH_SSH_ASKPASS_DEFAULT
#define _PATH_SSH_ASKPASS_DEFAULT	"/usr/X11R6/bin/ssh-askpass"
#endif

/* Location of ssh-keysign for hostbased authentication */
#ifndef _PATH_SSH_KEY_SIGN
#define _PATH_SSH_KEY_SIGN		"/usr/libexec/ssh-keysign"
#endif

/* Location of ssh-pkcs11-helper to support keys in tokens */
#ifndef _PATH_SSH_PKCS11_HELPER
#define _PATH_SSH_PKCS11_HELPER		"/usr/libexec/ssh-pkcs11-helper"
#endif

/* xauth for X11 forwarding */
#ifndef _PATH_XAUTH
#define _PATH_XAUTH			"/usr/X11R6/bin/xauth"
#endif

/* UNIX domain socket for X11 server; displaynum will replace %u */
#ifndef _PATH_UNIX_X
#define _PATH_UNIX_X "/tmp/.X11-unix/X%u"
#endif

/* for scp */
#ifndef _PATH_CP
#define _PATH_CP			"cp"
#endif

/* for sftp */
#ifndef _PATH_SFTP_SERVER
#define _PATH_SFTP_SERVER		"/usr/libexec/sftp-server"
#endif

/* chroot directory for unprivileged user when UsePrivilegeSeparation=yes */
#ifndef _PATH_PRIVSEP_CHROOT_DIR
#define _PATH_PRIVSEP_CHROOT_DIR	"/var/empty"
#endif

/* for passwd change */
#ifndef _PATH_PASSWD_PROG
#define _PATH_PASSWD_PROG             "/usr/bin/passwd"
#endif

#ifndef _PATH_LS
#define _PATH_LS			"ls"
#endif

/* Askpass program define */
#ifndef ASKPASS_PROGRAM
#define ASKPASS_PROGRAM         "/usr/lib/ssh/ssh-askpass"
#endif /* ASKPASS_PROGRAM */

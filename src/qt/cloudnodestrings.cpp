

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *cloudnode_strings[] = {
QT_TRANSLATE_NOOP("thatsthelabor-network", " mints deleted\n"),
QT_TRANSLATE_NOOP("thatsthelabor-network", " mints updated, "),
QT_TRANSLATE_NOOP("thatsthelabor-network", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Cannot obtain a lock on data directory %s. Cloudnode Core is probably already "
"running."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Disable all Cloudnode specific functionality (Masternodes, Obfuscation, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Enable automatic wallet backups triggered after each zTtl minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Fees (in TTL/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Fees (in TTL/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"To use cloudnoded, or the -server option to cloudnode-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=cloudnoderpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Cloudnode Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Unable to bind to %s on this computer. Cloudnode Core is probably already running."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 10000 TTL."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Unable to locate enough funds for this transaction that are not equal 10000 "
"TTL."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Cloudnode Core will not work properly."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("thatsthelabor-network", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "(3310 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "(default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "(default: 1)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "(must be 3310 for mainnet)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "<category> can be:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Already have that input."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Block creation options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Cannot write default address"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Collateral not valid."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Connection options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Copyright (C) 2017-%i The Cloudnode Core Developers"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Done loading"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Entries are full."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error initializing block database"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error loading block database"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error loading wallet.dat: Wallet requires newer version of Cloudnode Core"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error opening block database"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error recovering public key."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Failed to read block index"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Failed to read block"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Failed to write block index"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Fee (in TTL/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Finalizing transaction."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Importing..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Incompatible mode."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Incompatible version."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Information"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Initialization sanity check failed. Cloudnode Core is shutting down."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Input is not valid."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Insufficient funds"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Insufficient funds."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid amount"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid private key."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Invalid script detected."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Less than 3 mints added, unable to create spend"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Line: %d"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading addresses..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading block index..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading budget cache..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading sporks..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Loading wallet..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Lock is already in place."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Masternode options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Masternode queue is full."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Masternode:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Missing input transaction information."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Mixing in progress..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "No Masternodes detected."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Node relay options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Percentage of automatically minted Zerocoin  (10-100, default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Preparing for resync..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Print version and exit"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "RPC server options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Recalculating coin supply may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Recalculating supply statistics may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Rescanning..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("thatsthelabor-network", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Session not complete!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Session timed out."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set the masternode private key"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Signing failed."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Signing timed out."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Signing transaction failed"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify data directory"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Specify your own public address"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Staking options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "SwiftX options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronization failed"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronization finished"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronization pending..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "This help message"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "This is experimental software."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "This is not a Masternode."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction amount too small"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction created successfully."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction not valid."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transaction too large"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Use the test network"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Verifying blocks..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Verifying wallet..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Wallet is locked."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Wallet needed to be rewritten: restart Cloudnode Core to complete"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Wallet options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Wallet window title"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Warning"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Will retry..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Your entries added successfully."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("thatsthelabor-network", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "Zerocoin options:"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "failed to validate zerocoin"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "on startup"),
QT_TRANSLATE_NOOP("thatsthelabor-network", "wallet.dat corrupt, salvage failed"),
};

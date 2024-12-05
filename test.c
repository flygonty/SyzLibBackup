    // Initialize Netlink message header
    memset(buffer, 0, sizeof(buffer));
    nlh = (struct nlmsghdr *)buffer;
    nlh->nlmsg_len = NLMSG_LENGTH(sizeof(struct nfgenmsg));
    nlh->nlmsg_type = (NFNL_SUBSYS_NFTABLES << 8) | NFT_MSG_NEWTABLE;
    nlh->nlmsg_flags = NLM_F_REQUEST | NLM_F_ACK | NLM_F_CREATE;
    nlh->nlmsg_pid = getpid();
    nlh->nlmsg_seq = time(NULL);

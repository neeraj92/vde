/* VDE_ROUTER (C) 2007:2011 Daniele Lacamera
 *
 * Licensed under the GPLv2
 *
 */
#ifndef _VDER_PACKET
#define _VDER_PACKET

#define DEFAULT_TTL 64
uint16_t vder_ip_checksum(struct iphdr *iph);
void vder_packet_recv(struct vder_iface *vif, int timeout);
uint16_t net_checksum(void *inbuf, int len);
int vder_packet_send(struct vde_buff *vdb, uint32_t dst_ip, uint8_t protocol);
int vder_packet_broadcast(struct vde_buff *vdb, struct vder_iface *iface, uint32_t dst_ip, uint8_t protocol);
char *vder_ntoa(uint32_t addr);

#endif

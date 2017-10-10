/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 04:51:20 by rhaque            #+#    #+#             */
/*   Updated: 2017/10/10 05:37:25 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned char    reverse_bits(unsigned char octet)
{
	    octet = ((octet & 0xF0 >> 4 | (octet & 0x0F << 4));
		octet = ((octet & 0xCC >> 2 | (octet & 0x33 << 2));
		octet = ((octet & 0xAA >> 1 | (octet & 0x55 << 1));
		return (octet);
}

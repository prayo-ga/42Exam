unsigned char	swap__bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}

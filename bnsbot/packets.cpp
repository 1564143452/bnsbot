#include "packets.h"

char packets::mushin_f9[0x80] =
{
	0xC8, 0x9B, 0x13, 0x41, 0x01, 0x00, 0x00, 0x00, 0x91, 0x04, 0xBD, 0x44, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x75, 0x00, 0x73, 0x00, 0x68, 0x00, 0x14, 0x00, 0xBE, 0x61, 0x02, 0x00, 0x73, 0x00,
	0x01, 0x00, 0x00, 0x00, 0xF9, 0x72, 0x04, 0x00, 0x00, 0x00, 0x72, 0x00, 0x20, 0x00, 0x2D, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x5B, 0x89, 0xD7, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x63, 0x1A, 0x6B, 0x30, 0xAF, 0x04, 0x89,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x8F, 0xBD, 0x44, 0x01, 0x00, 0x00, 0x00,
	0xC0, 0x84, 0x60, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x42, 0x00, 0x00, 0xC8, 0x41, 0xFE, 0x41, 0xC0, 0x3D, 0xEE, 0xCB, 0x7D, 0x3F
};
char packets::mushin_f13[0x80] =
{
	0xC8, 0x9B, 0x13, 0x41, 0x01, 0x00, 0x00, 0x00, 0x91, 0x04, 0x83, 0x47, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x69, 0x00, 0x6C, 0x00, 0x6C, 0x00, 0x14, 0x00, 0xBE, 0x61, 0x06, 0x00, 0x75, 0x00,
	0x01, 0x00, 0x00, 0x00, 0xF8, 0x94, 0x04, 0x00, 0x01, 0x00, 0x6D, 0x00, 0x70, 0x00, 0x74, 0x00,
	0xE0, 0xB9, 0x0C, 0x69, 0x01, 0x00, 0x00, 0x00, 0xE0, 0xB9, 0x0C, 0x69, 0x01, 0x00, 0x00, 0x00,
	0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0x8F, 0x15, 0x66, 0x5C, 0x34, 0x02, 0x89,
	0x50, 0x63, 0xD1, 0x61, 0x01, 0x00, 0x00, 0x00, 0xF0, 0x72, 0x83, 0x47, 0x01, 0x00, 0x00, 0x00,
	0x4D, 0x00, 0x6F, 0x00, 0x76, 0x00, 0x65, 0x00, 0x73, 0x00, 0x20, 0x00, 0x62, 0x00, 0x65, 0x00,
	0x68, 0x00, 0x69, 0x00, 0x6E, 0x00, 0x64, 0x00, 0x20, 0x00, 0x74, 0x00, 0x68, 0x00, 0x65, 0x00
};

char packets::mushin_f1[0x80] =
{
	0xC8, 0x9B, 0x13, 0x41, 0x01, 0x00, 0x00, 0x00, 0x91, 0x04, 0x80, 0x5B, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xAD, 0x5C, 0x20, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0xB8, 0x61, 0x02, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0xDE, 0x9C, 0x04, 0x00, 0x00, 0x00, 0x5C, 0x20, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3D, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0xFC, 0x10, 0x6A, 0x00, 0x8D, 0x04, 0x91,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x8B, 0x80, 0x5B, 0x01, 0x00, 0x00, 0x00,
	0x70, 0x00, 0x63, 0x00, 0x3A, 0x00, 0x53, 0x00, 0x74, 0x00, 0x61, 0x00, 0x74, 0x00, 0x6D, 0x00,
	0x65, 0x00, 0x72, 0x00, 0x3A, 0x00, 0x32, 0x00, 0x30, 0x00, 0x32, 0x00, 0x2E, 0x00, 0x30, 0x00
};

char packets::mushin_f5[0x80] =
{
	0xC8, 0x9B, 0x13, 0x41, 0x01, 0x00, 0x00, 0x00, 0x91, 0x04, 0xF4, 0x0C, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x75, 0x00, 0x73, 0x00, 0x68, 0x00, 0x07, 0x00, 0xB8, 0x61, 0x06, 0x00, 0x73, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x0A, 0xB8, 0x04, 0x00, 0x01, 0x00, 0x72, 0x00, 0x20, 0x00, 0x2D, 0x00,
	0xE0, 0x57, 0xA7, 0x49, 0x01, 0x00, 0x00, 0x00, 0xE0, 0x57, 0xA7, 0x49, 0x01, 0x00, 0x00, 0x00,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC9, 0x6C, 0x43, 0x1D, 0x00, 0x97, 0x04, 0x89,
	0xE0, 0x97, 0x66, 0x49, 0x01, 0x00, 0x00, 0x00, 0x80, 0x70, 0xF4, 0x0C, 0x01, 0x00, 0x00, 0x00,
	0x30, 0x36, 0x19, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x42, 0x00, 0x00, 0xC8, 0x41, 0xFE, 0x41, 0xC0, 0x3D, 0xEE, 0xCB, 0x7D, 0x3F,
};

char packets::mushin_f52[0x80] =
{
	0x80, 0x88, 0x23, 0x41, 0x01, 0x00, 0x00, 0x00, 0x3A, 0x00, 0xAA, 0x13, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0xB8, 0x04, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x86, 0x86, 0x06, 0x00, 0x62, 0x04, 0x88,
	0xC8, 0x84, 0x3A, 0x41, 0x01, 0x00, 0x00, 0x00, 0x50, 0x39, 0x19, 0xDA, 0x00, 0x00, 0x00, 0x00,
	0x90, 0x93, 0x4D, 0x40, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9A, 0x99, 0x19, 0x3E,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x86, 0x85, 0x06, 0x00, 0x63, 0x04, 0x91,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xDD, 0xAA, 0x13, 0x01, 0x00, 0x00, 0x00,
	0xB4, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

char packets::mushin_f53[] =
{
	0x80, 0x88, 0x23, 0x41, 0x01, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x69, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
	0xD3, 0x00, 0xD5, 0x00, 0xDD, 0x00, 0x00, 0x00, 0x04, 0x8E, 0x98, 0x0E, 0x00, 0xB4, 0x01, 0x91,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0x5C, 0xAA, 0x13, 0x01, 0x00, 0x00, 0x00,
	0x45, 0x00, 0x54, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x3F,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x8E, 0x9F, 0x0E, 0x00, 0xB5, 0x01, 0x89,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x5C, 0xAA, 0x13, 0x01, 0x00, 0x00, 0x00,
	0xB8, 0xD4, 0x5C, 0x39, 0x01, 0x00, 0x00, 0x00, 0x77, 0x00, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00,
};

char packets::buy_orb[0x80] =
{
	0x50, 0xE0, 0x12, 0x41, 0x01, 0x00, 0x00, 0x00, 0x33, 0x04, 0x79, 0x09, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x85, 0xA4, 0x04, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x07, 0x02, 0x02, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x40, 0x15, 0x6A, 0x90, 0x00, 0x00, 0x00, 0x00, 0x78, 0xE1, 0x3E, 0x19, 0x00, 0xE7, 0x03, 0x95,
	0x30, 0x79, 0x79, 0x09, 0x01, 0x00, 0x00, 0x00, 0x70, 0x79, 0x79, 0x09, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F,
	0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x07, 0x02, 0x02, 0x02
};
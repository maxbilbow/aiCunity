#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1446;
// System.Text.Encoding
struct Encoding_t719;
// System.Byte[]
struct ByteU5BU5D_t720;
// System.Text.Decoder
struct Decoder_t1677;
// System.Char[]
struct CharU5BU5D_t432;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct  BinaryReader_t1678  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1446 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t719 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t720* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1677 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t432* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};

/// AUTOGENERATED FILE!!! See Scripts/D3D11/GenerateD3D11PixelFormatToShaderType.py
namespace Ogre
{
	//depth2d through depth2d_ms_array only have 'float'
	static const char c_dataTypes[PixelFormatDataTypes::NumPixelFormatDataTypes*9u*4u+1u*4u*4u][48] =
	{
		"texture1d<float, access::sample>",
		"texture1d<float, access::read>",
		"texture1d<float, access::write>",
		"texture1d<float, access::read_write>",
		"texture1d<half, access::sample>",
		"texture1d<half, access::read>",
		"texture1d<half, access::write>",
		"texture1d<half, access::read_write>",
		"texture1d<int, access::sample>",
		"texture1d<int, access::read>",
		"texture1d<int, access::write>",
		"texture1d<int, access::read_write>",
		"texture1d<uint, access::sample>",
		"texture1d<uint, access::read>",
		"texture1d<uint, access::write>",
		"texture1d<uint, access::read_write>",
		"texture1d<short, access::sample>",
		"texture1d<short, access::read>",
		"texture1d<short, access::write>",
		"texture1d<short, access::read_write>",
		"texture1d<ushort, access::sample>",
		"texture1d<ushort, access::read>",
		"texture1d<ushort, access::write>",
		"texture1d<ushort, access::read_write>",
		"texture1d<char, access::sample>",
		"texture1d<char, access::read>",
		"texture1d<char, access::write>",
		"texture1d<char, access::read_write>",
		"texture1d<uchar, access::sample>",
		"texture1d<uchar, access::read>",
		"texture1d<uchar, access::write>",
		"texture1d<uchar, access::read_write>",
		"texture1d_array<float, access::sample>",
		"texture1d_array<float, access::read>",
		"texture1d_array<float, access::write>",
		"texture1d_array<float, access::read_write>",
		"texture1d_array<half, access::sample>",
		"texture1d_array<half, access::read>",
		"texture1d_array<half, access::write>",
		"texture1d_array<half, access::read_write>",
		"texture1d_array<int, access::sample>",
		"texture1d_array<int, access::read>",
		"texture1d_array<int, access::write>",
		"texture1d_array<int, access::read_write>",
		"texture1d_array<uint, access::sample>",
		"texture1d_array<uint, access::read>",
		"texture1d_array<uint, access::write>",
		"texture1d_array<uint, access::read_write>",
		"texture1d_array<short, access::sample>",
		"texture1d_array<short, access::read>",
		"texture1d_array<short, access::write>",
		"texture1d_array<short, access::read_write>",
		"texture1d_array<ushort, access::sample>",
		"texture1d_array<ushort, access::read>",
		"texture1d_array<ushort, access::write>",
		"texture1d_array<ushort, access::read_write>",
		"texture1d_array<char, access::sample>",
		"texture1d_array<char, access::read>",
		"texture1d_array<char, access::write>",
		"texture1d_array<char, access::read_write>",
		"texture1d_array<uchar, access::sample>",
		"texture1d_array<uchar, access::read>",
		"texture1d_array<uchar, access::write>",
		"texture1d_array<uchar, access::read_write>",
		"texture2d<float, access::sample>",
		"texture2d<float, access::read>",
		"texture2d<float, access::write>",
		"texture2d<float, access::read_write>",
		"texture2d<half, access::sample>",
		"texture2d<half, access::read>",
		"texture2d<half, access::write>",
		"texture2d<half, access::read_write>",
		"texture2d<int, access::sample>",
		"texture2d<int, access::read>",
		"texture2d<int, access::write>",
		"texture2d<int, access::read_write>",
		"texture2d<uint, access::sample>",
		"texture2d<uint, access::read>",
		"texture2d<uint, access::write>",
		"texture2d<uint, access::read_write>",
		"texture2d<short, access::sample>",
		"texture2d<short, access::read>",
		"texture2d<short, access::write>",
		"texture2d<short, access::read_write>",
		"texture2d<ushort, access::sample>",
		"texture2d<ushort, access::read>",
		"texture2d<ushort, access::write>",
		"texture2d<ushort, access::read_write>",
		"texture2d<char, access::sample>",
		"texture2d<char, access::read>",
		"texture2d<char, access::write>",
		"texture2d<char, access::read_write>",
		"texture2d<uchar, access::sample>",
		"texture2d<uchar, access::read>",
		"texture2d<uchar, access::write>",
		"texture2d<uchar, access::read_write>",
		"texture2d_array<float, access::sample>",
		"texture2d_array<float, access::read>",
		"texture2d_array<float, access::write>",
		"texture2d_array<float, access::read_write>",
		"texture2d_array<half, access::sample>",
		"texture2d_array<half, access::read>",
		"texture2d_array<half, access::write>",
		"texture2d_array<half, access::read_write>",
		"texture2d_array<int, access::sample>",
		"texture2d_array<int, access::read>",
		"texture2d_array<int, access::write>",
		"texture2d_array<int, access::read_write>",
		"texture2d_array<uint, access::sample>",
		"texture2d_array<uint, access::read>",
		"texture2d_array<uint, access::write>",
		"texture2d_array<uint, access::read_write>",
		"texture2d_array<short, access::sample>",
		"texture2d_array<short, access::read>",
		"texture2d_array<short, access::write>",
		"texture2d_array<short, access::read_write>",
		"texture2d_array<ushort, access::sample>",
		"texture2d_array<ushort, access::read>",
		"texture2d_array<ushort, access::write>",
		"texture2d_array<ushort, access::read_write>",
		"texture2d_array<char, access::sample>",
		"texture2d_array<char, access::read>",
		"texture2d_array<char, access::write>",
		"texture2d_array<char, access::read_write>",
		"texture2d_array<uchar, access::sample>",
		"texture2d_array<uchar, access::read>",
		"texture2d_array<uchar, access::write>",
		"texture2d_array<uchar, access::read_write>",
		"texturecube<float, access::sample>",
		"texturecube<float, access::read>",
		"texturecube<float, access::write>",
		"texturecube<float, access::read_write>",
		"texturecube<half, access::sample>",
		"texturecube<half, access::read>",
		"texturecube<half, access::write>",
		"texturecube<half, access::read_write>",
		"texturecube<int, access::sample>",
		"texturecube<int, access::read>",
		"texturecube<int, access::write>",
		"texturecube<int, access::read_write>",
		"texturecube<uint, access::sample>",
		"texturecube<uint, access::read>",
		"texturecube<uint, access::write>",
		"texturecube<uint, access::read_write>",
		"texturecube<short, access::sample>",
		"texturecube<short, access::read>",
		"texturecube<short, access::write>",
		"texturecube<short, access::read_write>",
		"texturecube<ushort, access::sample>",
		"texturecube<ushort, access::read>",
		"texturecube<ushort, access::write>",
		"texturecube<ushort, access::read_write>",
		"texturecube<char, access::sample>",
		"texturecube<char, access::read>",
		"texturecube<char, access::write>",
		"texturecube<char, access::read_write>",
		"texturecube<uchar, access::sample>",
		"texturecube<uchar, access::read>",
		"texturecube<uchar, access::write>",
		"texturecube<uchar, access::read_write>",
		"texturecube_array<float, access::sample>",
		"texturecube_array<float, access::read>",
		"texturecube_array<float, access::write>",
		"texturecube_array<float, access::read_write>",
		"texturecube_array<half, access::sample>",
		"texturecube_array<half, access::read>",
		"texturecube_array<half, access::write>",
		"texturecube_array<half, access::read_write>",
		"texturecube_array<int, access::sample>",
		"texturecube_array<int, access::read>",
		"texturecube_array<int, access::write>",
		"texturecube_array<int, access::read_write>",
		"texturecube_array<uint, access::sample>",
		"texturecube_array<uint, access::read>",
		"texturecube_array<uint, access::write>",
		"texturecube_array<uint, access::read_write>",
		"texturecube_array<short, access::sample>",
		"texturecube_array<short, access::read>",
		"texturecube_array<short, access::write>",
		"texturecube_array<short, access::read_write>",
		"texturecube_array<ushort, access::sample>",
		"texturecube_array<ushort, access::read>",
		"texturecube_array<ushort, access::write>",
		"texturecube_array<ushort, access::read_write>",
		"texturecube_array<char, access::sample>",
		"texturecube_array<char, access::read>",
		"texturecube_array<char, access::write>",
		"texturecube_array<char, access::read_write>",
		"texturecube_array<uchar, access::sample>",
		"texturecube_array<uchar, access::read>",
		"texturecube_array<uchar, access::write>",
		"texturecube_array<uchar, access::read_write>",
		"texture3d<float, access::sample>",
		"texture3d<float, access::read>",
		"texture3d<float, access::write>",
		"texture3d<float, access::read_write>",
		"texture3d<half, access::sample>",
		"texture3d<half, access::read>",
		"texture3d<half, access::write>",
		"texture3d<half, access::read_write>",
		"texture3d<int, access::sample>",
		"texture3d<int, access::read>",
		"texture3d<int, access::write>",
		"texture3d<int, access::read_write>",
		"texture3d<uint, access::sample>",
		"texture3d<uint, access::read>",
		"texture3d<uint, access::write>",
		"texture3d<uint, access::read_write>",
		"texture3d<short, access::sample>",
		"texture3d<short, access::read>",
		"texture3d<short, access::write>",
		"texture3d<short, access::read_write>",
		"texture3d<ushort, access::sample>",
		"texture3d<ushort, access::read>",
		"texture3d<ushort, access::write>",
		"texture3d<ushort, access::read_write>",
		"texture3d<char, access::sample>",
		"texture3d<char, access::read>",
		"texture3d<char, access::write>",
		"texture3d<char, access::read_write>",
		"texture3d<uchar, access::sample>",
		"texture3d<uchar, access::read>",
		"texture3d<uchar, access::write>",
		"texture3d<uchar, access::read_write>",
		"texture2d_ms<float, access::sample>",
		"texture2d_ms<float, access::read>",
		"texture2d_ms<float, access::write>",
		"texture2d_ms<float, access::read_write>",
		"texture2d_ms<half, access::sample>",
		"texture2d_ms<half, access::read>",
		"texture2d_ms<half, access::write>",
		"texture2d_ms<half, access::read_write>",
		"texture2d_ms<int, access::sample>",
		"texture2d_ms<int, access::read>",
		"texture2d_ms<int, access::write>",
		"texture2d_ms<int, access::read_write>",
		"texture2d_ms<uint, access::sample>",
		"texture2d_ms<uint, access::read>",
		"texture2d_ms<uint, access::write>",
		"texture2d_ms<uint, access::read_write>",
		"texture2d_ms<short, access::sample>",
		"texture2d_ms<short, access::read>",
		"texture2d_ms<short, access::write>",
		"texture2d_ms<short, access::read_write>",
		"texture2d_ms<ushort, access::sample>",
		"texture2d_ms<ushort, access::read>",
		"texture2d_ms<ushort, access::write>",
		"texture2d_ms<ushort, access::read_write>",
		"texture2d_ms<char, access::sample>",
		"texture2d_ms<char, access::read>",
		"texture2d_ms<char, access::write>",
		"texture2d_ms<char, access::read_write>",
		"texture2d_ms<uchar, access::sample>",
		"texture2d_ms<uchar, access::read>",
		"texture2d_ms<uchar, access::write>",
		"texture2d_ms<uchar, access::read_write>",
		"texture2d_ms_array<float, access::sample>",
		"texture2d_ms_array<float, access::read>",
		"texture2d_ms_array<float, access::write>",
		"texture2d_ms_array<float, access::read_write>",
		"texture2d_ms_array<half, access::sample>",
		"texture2d_ms_array<half, access::read>",
		"texture2d_ms_array<half, access::write>",
		"texture2d_ms_array<half, access::read_write>",
		"texture2d_ms_array<int, access::sample>",
		"texture2d_ms_array<int, access::read>",
		"texture2d_ms_array<int, access::write>",
		"texture2d_ms_array<int, access::read_write>",
		"texture2d_ms_array<uint, access::sample>",
		"texture2d_ms_array<uint, access::read>",
		"texture2d_ms_array<uint, access::write>",
		"texture2d_ms_array<uint, access::read_write>",
		"texture2d_ms_array<short, access::sample>",
		"texture2d_ms_array<short, access::read>",
		"texture2d_ms_array<short, access::write>",
		"texture2d_ms_array<short, access::read_write>",
		"texture2d_ms_array<ushort, access::sample>",
		"texture2d_ms_array<ushort, access::read>",
		"texture2d_ms_array<ushort, access::write>",
		"texture2d_ms_array<ushort, access::read_write>",
		"texture2d_ms_array<char, access::sample>",
		"texture2d_ms_array<char, access::read>",
		"texture2d_ms_array<char, access::write>",
		"texture2d_ms_array<char, access::read_write>",
		"texture2d_ms_array<uchar, access::sample>",
		"texture2d_ms_array<uchar, access::read>",
		"texture2d_ms_array<uchar, access::write>",
		"texture2d_ms_array<uchar, access::read_write>",
		"depth2d<float, access::sample>",
		"depth2d<float, access::read>",
		"depth2d<float, access::write>",
		"depth2d<float, access::read_write>",
		"depth2d_array<float, access::sample>",
		"depth2d_array<float, access::read>",
		"depth2d_array<float, access::write>",
		"depth2d_array<float, access::read_write>",
		"depth2d_ms<float, access::sample>",
		"depth2d_ms<float, access::read>",
		"depth2d_ms<float, access::write>",
		"depth2d_ms<float, access::read_write>",
		"depth2d_ms_array<float, access::sample>",
		"depth2d_ms_array<float, access::read>",
		"depth2d_ms_array<float, access::write>",
		"depth2d_ms_array<float, access::read_write>",
	};
}

// 函数名称: sub_549240
// 虚拟地址: 0x549240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_549240(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t edi = *arg1
    int32_t edi = *arg1
    arg1[0x41] = data_30794c0(edi, "Position")
    arg1[0x42] = data_30794c0(edi, "Normal")
    arg1[0x43] = data_30794c0(edi, "Tangent")
    arg1[0x44] = data_30794c0(edi, "Binormal")
    arg1[0x45] = data_30794c0(edi, "Color0")
    arg1[0x46] = data_30794c0(edi, "Color1")
    arg1[0x47] = data_30794c0(edi, "TexCoord0")
    arg1[0x48] = data_30794c0(edi, "TexCoord1")
    arg1[0x49] = data_30794c0(edi, "BlendIndices")
    arg1[0x4a] = data_30794c0(edi, "BlendWeights")
    arg1[0x4b] = data_30794c0(edi, "gWorld")
    int32_t result = data_30794c0(edi, "gWorldViewProj")
    arg1[0x4c] = result
    return result
}

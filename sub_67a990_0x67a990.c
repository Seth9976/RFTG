// 函数名称: sub_67a990
// 虚拟地址: 0x67a990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_67a990(char* arg1, int32_t arg2, int32_t arg3, void** arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: if (arg3 u< 0xc || *arg1 != 0x41 || arg1[1] != 0x64 || arg1[2] != 0x6f || arg1[3] != 0x62 || arg1[4] != 0x65)
    if (arg3 u< 0xc || *arg1 != 0x41 || arg1[1] != 0x64 || arg1[2] != 0x6f || arg1[3] != 0x62
            || arg1[4] != 0x65)
        *(*arg4 + 0x14) = 0x4e
        *(*arg4 + 0x18) = arg3 + arg5
        return (*(*arg4 + 4))(arg4, 1, arg3)
    
    uint32_t edx_2 = (zx.d(arg1[7]) << 8) + zx.d(arg1[8])
    uint32_t edi_2 = (zx.d(arg1[9]) << 8) + zx.d(arg1[0xa])
    uint32_t ecx_2 = zx.d(arg1[0xb])
    void* ecx_3 = *arg4
    *(ecx_3 + 0x18) = (zx.d(arg1[5]) << 8) + zx.d(arg1[6])
    *(ecx_3 + 0x1c) = edx_2
    *(ecx_3 + 0x20) = edi_2
    *(ecx_3 + 0x24) = ecx_2
    *(*arg4 + 0x14) = 0x4c
    int32_t result = (*(*arg4 + 4))(arg4, 1)
    arg4[0x4a].b = ecx_2.b
    arg4[0x49] = 1
    return result
}

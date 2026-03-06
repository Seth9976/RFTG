// 函数名称: sub_67d1b0
// 虚拟地址: 0x67d1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_67d1b0(int32_t arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t i = arg5
    int32_t i = arg5
    int32_t* esi = arg1 + (arg2 << 2)
    int128_t* result = arg3
    int32_t* edi = result + (arg4 << 2)
    
    for (; i s> 0; i -= 1)
        int128_t* eax_1 = *esi
        int128_t* ecx_1 = *edi
        esi = &esi[1]
        edi = &edi[1]
        result = sub_5ab990(ecx_1, eax_1, arg6)
    
    return result
}

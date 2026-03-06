// 函数名称: sub_6806f0
// 虚拟地址: 0x6806f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6806f0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, void** arg5)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1b0)
    void* esi = *(arg1 + 0x1b0)
    
    if (*(esi + 0x18) == 0)
        *(esi + 0xc) = (*(*(arg1 + 4) + 0x1c))(arg1, *(esi + 8), *(esi + 0x14), *(esi + 0x10), 1)
    
    void* eax_3 = *(esi + 0x18)
    (*(*(arg1 + 0x1c4) + 4))(arg1, arg2, arg3, arg4, *(esi + 0xc), esi + 0x18, *(esi + 0x10))
    int32_t eax_7 = *(esi + 0x18)
    
    if (eax_7 u> eax_3)
        void* eax_8 = eax_7 - eax_3
        (*(*(arg1 + 0x1cc) + 4))(arg1, *(esi + 0xc) + (eax_3 << 2), 0, eax_8)
        *arg5 += eax_8
    
    int32_t result = *(esi + 0x10)
    
    if (*(esi + 0x18) u>= result)
        *(esi + 0x14) += result
        *(esi + 0x18) = 0
    
    return result
}

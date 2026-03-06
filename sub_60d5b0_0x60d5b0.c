// 函数名称: sub_60d5b0
// 虚拟地址: 0x60d5b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_60d5b0(int32_t arg1 @ esi, void* arg2 @ edi, void* arg3)
{
    // 第一条实际指令: int32_t ecx = *(arg3 + 4)
    int32_t ecx = *(arg3 + 4)
    
    if (ecx == *(arg2 + (arg1 << 2) + 0x54))
        return 
    
    int32_t* eax_1 = *(arg2 + 8)
    (*(*eax_1 + 0x114))(eax_1, arg1, 6, ecx)
    int32_t* eax_3 = *(arg2 + 8)
    (*(*eax_3 + 0x114))(eax_3, arg1, 5, *(arg3 + 4))
    *(arg2 + (arg1 << 2) + 0x54) = *(arg3 + 4)
}

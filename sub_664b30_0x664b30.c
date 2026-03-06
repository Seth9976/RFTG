// 函数名称: sub_664b30
// 虚拟地址: 0x664b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664b30(void* arg1, void* arg2, int128_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    if (arg4 u<= 0x100)
        sub_6622f0(arg1, arg2, 0x1000, 0)
        int128_t* eax_1 = sub_6665d0(arg1, 0x300)
        *(arg1 + 0x128) = eax_1
        sub_5ab990(eax_1, arg3, arg4 * 3)
        *(arg2 + 0x10) = *(arg1 + 0x128)
        *(arg1 + 0x12c) = arg4.w
        *(arg2 + 0xb8) |= 0x1000
        *(arg2 + 8) |= 8
        *(arg2 + 0x14) = arg4.w
        return 
    
    if (*(arg2 + 0x19) == 3)
        sub_664320(arg1, "Invalid palette length")
        noreturn
    
    sub_664100(arg1, "Invalid palette length")
}

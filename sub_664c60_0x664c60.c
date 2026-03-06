// 函数名称: sub_664c60
// 虚拟地址: 0x664c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_664c60(void* arg1, void* arg2, int128_t* arg3, char arg4, int128_t* arg5, void* arg6)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    PSTR lpString = arg3
    
    if (lpString == 0 || arg5 == 0)
        return 
    
    uint32_t edi_1 = lstrlenA(lpString) + 1
    int128_t* eax_1 = sub_666560(arg1, edi_1)
    
    if (eax_1 == 0)
        sub_664100(arg1, "Insufficient memory to process iCCP chunk")
        return 
    
    sub_5ab990(eax_1, arg3, edi_1)
    int128_t* eax_5 = sub_666560(arg1, arg6)
    
    if (eax_5 == 0)
        sub_666530(arg1, eax_1)
        sub_664100(arg1, "Insufficient memory to process iCCP profile")
        return 
    
    sub_5ab990(eax_5, arg5, arg6)
    sub_6622f0(arg1, arg2, 0x10, 0)
    *(arg2 + 0xb8) |= 0x10
    *(arg2 + 8) |= 0x1000
    *(arg2 + 0xc8) = eax_5
    *(arg2 + 0xcc) = arg6
    *(arg2 + 0xc4) = eax_1
    *(arg2 + 0xd0) = arg4
}

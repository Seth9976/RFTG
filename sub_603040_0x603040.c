// 函数名称: sub_603040
// 虚拟地址: 0x603040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_603040(HWND arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[8] == 0)
        return 
    
    arg1 = esi[0xc]
    
    if (arg1 == 0)
        return 
    
    if (esi[0xa] == 0)
        return sub_6024e0(esi) __tailcall
    
    if (arg1 == esi[0xb])
        ImmAssociateContext(arg1, esi[0xd])
    
    esi[9] = 1
    sub_6020e0(sub_601ab0(esi), esi)
}

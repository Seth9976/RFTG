// 函数名称: sub_602520
// 虚拟地址: 0x602520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_602520(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[8] == 0)
        return 
    
    int32_t* ecx
    sub_6022d0(ecx, esi)
    HWND param0 = esi[0xb]
    
    if (param0 != 0)
        ImmAssociateContext(param0, esi[0xd])
    
    BOOL eax = esi[0x53a]
    esi[0xb] = 0
    esi[0xd] = 0
    
    if (eax != 0)
        sub_5df000(eax)
        esi[0x53a] = 0
    
    arg1 = esi[7]
    
    if (arg1 != 0)
        (*(*arg1 + 8))(arg1)
        esi[7] = 0
    
    if (esi[6] != 0)
        CoUninitialize()
        esi[6] = 0
    
    esi[8] = 0
}

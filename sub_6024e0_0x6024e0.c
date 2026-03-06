// 函数名称: sub_6024e0
// 虚拟地址: 0x6024e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_6024e0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[8] == 0 || arg1[0xc] == 0)
    if (arg1[8] == 0 || arg1[0xc] == 0)
        return 
    
    int32_t* ecx_1 = sub_601b10(arg1)
    HWND param0 = arg1[0xc]
    
    if (param0 == arg1[0xb])
        ecx_1 = ImmAssociateContext(param0, nullptr)
    
    arg1[9] = 0
    sub_602150(ecx_1, arg1)
}

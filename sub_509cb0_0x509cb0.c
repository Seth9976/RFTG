// 函数名称: sub_509cb0
// 虚拟地址: 0x509cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_509cb0(char* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        int32_t eax
        eax.b = 1
        return eax
    
    if (sub_5a9450(arg1, 0x5c) == 0 && sub_5a9450(arg1, 0x2f) == 0)
        void* eax_2
        eax_2.b = 0
        return eax_2
    
    char* eax_4
    eax_4.b = sub_508bc0(arg1) == 0
    return eax_4
}

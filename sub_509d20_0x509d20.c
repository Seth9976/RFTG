// 函数名称: sub_509d20
// 虚拟地址: 0x509d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_509d20(char* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        void* eax_1 = sub_5a9450(arg1, 0x5c)
        void* eax_2
        
        if (eax_1 == 0)
            eax_2 = sub_5a9450(arg1, 0x2f)
        
        if (eax_1 == 0 && eax_2 == 0)
            eax_2.b = 0
            return eax_2
        
        if (sub_5a8e80(arg1, 0x87dce4) != 0)
            eax_2.b = 0
            return eax_2
        
        if (sub_5a8e80(arg1, 0x881848) != 0)
            eax_2.b = 0
            return eax_2
        
        if (sub_509cf0(arg1) == 0)
            char* eax_5
            eax_5.b = sub_508bc0(arg1) != 0
            return eax_5
    
    return 1
}

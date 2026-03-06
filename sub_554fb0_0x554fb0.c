// 函数名称: sub_554fb0
// 虚拟地址: 0x554fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_554fb0(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0xc) = *(arg1 + 8)
    *(arg1 + 0xc) = *(arg1 + 8)
    char* eax
    
    while (true)
        char* ecx_1 = *(arg1 + 8)
        eax.b = *ecx_1
        
        if (eax.b != 0x26)
            if (eax.b == 0 || eax.b == 0x20 || eax.b == 9 || eax.b == 0x3c || eax.b == 0x3d
                    || eax.b == 0x22 || eax.b == 0x3e)
                bool cond:0 = ecx_1 != *(arg1 + 0xc)
                *(arg1 + 0x10) = ecx_1 - *(arg1 + 0xc)
                void* eax_2
                eax_2.b = cond:0
                return eax_2
            
            if (eax.b == 0xa)
                *(arg1 + 0x118) += 1
            
            *(arg1 + 8) = &ecx_1[1]
        else
            eax = sub_554f30(arg1)
            
            if (eax.b == 0)
                break
    
    return eax
}

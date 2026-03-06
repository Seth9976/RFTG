// 函数名称: sub_555050
// 虚拟地址: 0x555050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_555050(void* arg1 @ esi)
{
    // 第一条实际指令: void* eax_1
    void* eax_1
    
    if (sub_554fb0(arg1).b != 0 && *(arg1 + 0x124) != 0)
        int32_t* eax_2 = *(arg1 + 0x120)
        
        if (eax_2 == 0)
            sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
                "XList<struct XmlReadToken>::GetTail")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_8_1 = eax_2[1]
        int32_t ecx_2
        eax_1, ecx_2 = sub_5a9f0b(*eax_2, *(arg1 + 0xc), *(arg1 + 0x10))
        
        if (eax_1 == 0)
            sub_554f00(ecx_2, arg1)
            eax_1 = *(arg1 + 8)
            
            if (*eax_1 == 0x3e)
                *(arg1 + 8) = eax_1 + 1
                *(arg1 + 4) = 4
                void* eax_6
                eax_6.b = 1
                return eax_6
    
    eax_1.b = 0
    return eax_1
}

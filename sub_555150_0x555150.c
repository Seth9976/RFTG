// 函数名称: sub_555150
// 虚拟地址: 0x555150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_555150(void* arg1 @ esi)
{
    // 第一条实际指令: char* eax_7 = *(arg1 + 8)
    char* eax_7 = *(arg1 + 8)
    int32_t ecx
    ecx.b = *eax_7
    void* eax_1
    
    if (ecx.b == 0x3e)
        *(arg1 + 8) = &eax_7[1]
        sub_555010(ecx.b, arg1)
        int32_t edi = *(arg1 + 0x10)
        char* ecx_1 = *(arg1 + 0xc)
        int32_t edx_2 = 0
        
        if (edi s> 0)
            do
                eax_1.b = *ecx_1
                
                if (eax_1.b != 0x20 && eax_1.b != 9 && eax_1.b != 0xd && eax_1.b != 0xa)
                    *(arg1 + 4) = 3
                    eax_1.b = 1
                    return eax_1
                
                edx_2 += 1
                ecx_1 = &ecx_1[1]
            while (edx_2 s< edi)
        
        return sub_5550f0(arg1) != 0
    
    if (ecx.b != 0x2f)
        if (sub_554fb0(arg1).b != 0)
            *(arg1 + 4) = 2
            eax_1.b = 1
            return eax_1
    else
        *(arg1 + 8) = &eax_7[1]
        sub_554f00(ecx, arg1)
        eax_1 = *(arg1 + 8)
        
        if (*eax_1 == 0x3e)
            *(arg1 + 8) = eax_1 + 1
            *(arg1 + 4) = 4
            void* eax_5
            eax_5.b = 1
            return eax_5
    
    eax_1.b = 0
    return eax_1
}

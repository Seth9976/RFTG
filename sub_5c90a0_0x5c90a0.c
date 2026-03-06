// 函数名称: sub_5c90a0
// 虚拟地址: 0x5c90a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c90a0(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    
    if (arg2 == 0 || arg3 == 0)
        sub_5cce60("Missing desired mode or closest mode parameter")
        return 0
    
    int32_t eax = *arg2
    
    if (eax == 0)
        eax = *(arg1 + 0x10)
    
    int32_t eax_1 = arg2[3]
    int32_t var_10
    
    if (eax_1 == 0)
        var_10 = *(arg1 + 0x1c)
    else
        var_10 = eax_1
    
    int32_t* edi = nullptr
    int32_t var_c = 0
    
    if (sub_5c9060(arg1) s> 0)
        int32_t* esi_1
        
        while (true)
            void* eax_3 = *(arg1 + 0xc)
            int32_t ecx_2 = *(eax_3 + ebx + 4)
            esi_1 = arg2
            int32_t* eax_4 = eax_3 + ebx
            
            if (ecx_2 != 0 && ecx_2 s< esi_1[1])
                break
            
            int32_t edx_2 = eax_4[2]
            
            if (edx_2 == 0 || edx_2 s>= esi_1[2])
                if (edi == 0 || ecx_2 s< edi[1] || edx_2 s< edi[2])
                    edi = eax_4
                else
                    int32_t ecx_3 = *eax_4
                    
                    if (ecx_3 == *edi)
                        int32_t ecx_5 = eax_4[3]
                        
                        if (ecx_5 != edi[3] && ecx_5 s>= var_10)
                            edi = eax_4
                    else if (ecx_3 == eax)
                        edi = eax_4
                    else if (zx.d(*(eax_4 + 1)) u>= zx.d((eax u>> 8).b)
                            && ((ecx_3 ^ eax) & 0xf000000) == 0)
                        edi = eax_4
            else if (ecx_2 != 0 && ecx_2 == esi_1[1])
                break
            
            var_c += 1
            ebx += 0x14
            
            if (var_c s>= sub_5c9060(arg1))
                esi_1 = arg2
                break
        
        if (edi != 0)
            int32_t eax_6 = *edi
            
            if (eax_6 == 0)
                eax_6 = *esi_1
            
            *arg3 = eax_6
            int32_t eax_7 = edi[1]
            int32_t edx_6
            
            if (eax_7 == 0 || edi[2] == 0)
                arg3[1] = esi_1[1]
                edx_6 = esi_1[2]
            else
                arg3[1] = eax_7
                edx_6 = edi[2]
            
            arg3[2] = edx_6
            int32_t eax_9 = edi[3]
            
            if (eax_9 == 0)
                eax_9 = esi_1[3]
            
            bool cond:0 = *arg3 != 0
            arg3[3] = eax_9
            arg3[4] = edi[4]
            
            if (not(cond:0))
                *arg3 = 0x16161804
            
            if (arg3[1] == 0)
                arg3[1] = 0x280
            
            if (arg3[2] == 0)
                arg3[2] = 0x1e0
            
            return arg3
    
    return 0
}

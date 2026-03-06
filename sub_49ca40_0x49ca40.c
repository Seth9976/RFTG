// 函数名称: sub_49ca40
// 虚拟地址: 0x49ca40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49ca40(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i_2 = sx.d(*(arg1 + 0x460))
    int32_t edx = 0
    void* var_8_1 = nullptr
    
    if (i_2 s> 0)
        void* ecx_1 = arg1 + 0x465
        int32_t i
        
        do
            if (*ecx_1 == 0)
                edx += 1
            
            ecx_1 += 0x14
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t ecx_2 = edx
    
    if (edx == 0)
        sub_49c9c0(arg1)
        int32_t i_3 = sx.d(*(arg1 + 0x460))
        ecx_2 = 0
        
        if (i_3 s> 0)
            void* eax = arg1 + 0x465
            int32_t i_1
            
            do
                if (*eax == 0)
                    ecx_2 += 1
                
                eax += 0x14
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        if (ecx_2 == 0)
            return 0xffffffff
    
    int32_t eax_4 = *(arg1 + 0xc) * 0x19660d + 0x3c6ef35f
    *(arg1 + 0xc) = eax_4
    int32_t edx_2 = mods.dp.d(sx.q(eax_4 u>> 0x10 & 0x7fff), ecx_2)
    int32_t ecx_3 = sx.d(*(arg1 + 0x460))
    int32_t result = 0
    
    if (ecx_3 s> 0)
        void* eax_9 = arg1 + 0x464
        
        do
            var_8_1 = eax_9
            
            if (*(eax_9 + 1) == 0)
                int32_t ebx_1 = edx_2
                edx_2 -= 1
                
                if (ebx_1 == 0)
                    break
            
            result += 1
            eax_9 += 0x14
        while (result s< ecx_3)
    
    *(var_8_1 + 1) = 0xff
    int32_t ecx_4 = sx.d(*(arg1 + 0x460))
    int32_t eax_11 = 0
    
    if (ecx_4 s> 0)
        void* edx_3 = arg1 + 0x465
        
        do
            if (*edx_3 == 0)
                return result
            
            eax_11 += 1
            edx_3 += 0x14
        while (eax_11 s< ecx_4)
    
    sub_49c9c0(arg1)
    return result
}

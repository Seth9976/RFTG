// 函数名称: sub_49cb90
// 虚拟地址: 0x49cb90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49cb90(void* arg1)
{
    // 第一条实际指令: int32_t ecx = sx.d(*(arg1 + 0x460))
    int32_t ecx = sx.d(*(arg1 + 0x460))
    void* ebx = nullptr
    int32_t result = 0
    
    if (ecx s> 0)
        void* eax = arg1 + 0x464
        
        do
            ebx = eax
            
            if (*(eax + 1) == 0)
                break
            
            result += 1
            eax += 0x14
        while (result s< ecx)
    
    if (result == ecx)
        sub_49c9c0(arg1)
        int32_t ecx_1 = sx.d(*(arg1 + 0x460))
        result = 0
        
        if (ecx_1 s> 0)
            void* eax_1 = arg1 + 0x464
            
            do
                ebx = eax_1
                
                if (*(eax_1 + 1) == 0)
                    break
                
                result += 1
                eax_1 += 0x14
            while (result s< ecx_1)
        
        if (result == ecx_1)
            return 0xffffffff
    
    *(ebx + 1) = 0xff
    int32_t ecx_2 = sx.d(*(arg1 + 0x460))
    int32_t eax_3 = 0
    
    if (ecx_2 s> 0)
        void* edx_1 = arg1 + 0x465
        
        do
            if (*edx_1 == 0)
                return result
            
            eax_3 += 1
            edx_1 += 0x14
        while (eax_3 s< ecx_2)
    
    sub_49c9c0(arg1)
    return result
}

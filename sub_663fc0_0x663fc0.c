// 函数名称: sub_663fc0
// 虚拟地址: 0x663fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_663fc0(void* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ecx_1 = *(arg1 + 0x100)
    char* result = nullptr
    uint32_t edx_3
    
    for (int32_t i = 0x18; i s>= 0; )
        uint8_t edx_2 = (ecx_1 u>> i.b).b
        i -= 8
        edx_3 = zx.d(edx_2)
        
        if (edx_3 - 0x41 u> 0x39 || (edx_3 s> 0x5a && edx_3 s< 0x61))
            result[arg2] = 0x5b
            int32_t ecx_6
            ecx_6.b = (*"0123456789ABCDEFlibpng warning: %s")[edx_3 s>> 4 & 0xf]
            result[arg2 + 1] = ecx_6.b
            edx_3.b = (*"0123456789ABCDEFlibpng warning: %s")[edx_3 & 0xf]
            result[arg2 + 2] = edx_3.b
            result[arg2 + 3] = 0x5d
            result = &result[4]
        else
            result[arg2] = edx_3.b
            result = &result[1]
    
    int32_t entry_ebx
    
    if (entry_ebx != 0)
        char* ecx_7 = nullptr
        *(result + arg2) = 0x203a
        result = &result[2]
        
        while (true)
            edx_3.b = ecx_7[entry_ebx]
            
            if (edx_3.b == 0)
                break
            
            result[arg2] = edx_3.b
            edx_3.b = ecx_7[entry_ebx + 1]
            
            if (edx_3.b == 0)
                result[1 + arg2] = 0
                return &result[1]
            
            result[arg2 + 1] = edx_3.b
            edx_3.b = ecx_7[entry_ebx + 2]
            
            if (edx_3.b == 0)
                result = &result[2]
                break
            
            result[arg2 + 2] = edx_3.b
            ecx_7 = &ecx_7[3]
            result = &result[3]
            
            if (ecx_7 s>= 0x3f)
                result[arg2] = 0
                return result
    
    result[arg2] = 0
    return result
}

// 函数名称: sub_515740
// 虚拟地址: 0x515740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_515740(char* arg1, void* arg2)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        return 
    
    *arg1 = 1
    int32_t esi_1 = *(arg2 + 8)
    void* ecx_2 = *(arg1 + 0xc)
    arg1 = *(ecx_2 + 4)
    void* var_c_1 = ecx_2
    
    if (arg1 s<= 0)
        return 
    
    int32_t ebx_1 = 0
    char* var_8_1 = arg1
    
    while (true)
        int32_t* ecx_3 = *(ecx_2 + 8)
        int32_t edx_1 = 0
        *(ecx_3 + ebx_1 + 8) = 0xffffffff
        
        if (esi_1 s> 0)
            arg1 = *(arg2 + 0xc) + 0x70
            
            do
                if (*arg1 == *(ecx_3 + ebx_1))
                    *(ecx_3 + ebx_1 + 8) = edx_1
                    break
                
                edx_1 += 1
                arg1 = &arg1[0xd0]
            while (edx_1 s< esi_1)
        
        ebx_1 += 0xc
        char* temp0_1 = var_8_1
        var_8_1 -= 1
        
        if (temp0_1 == 1)
            break
        
        ecx_2 = var_c_1
}

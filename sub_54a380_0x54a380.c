// 函数名称: sub_54a380
// 虚拟地址: 0x54a380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_54a380(char* arg1, char** arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* esi = arg1
    arg1.b = *esi
    int32_t var_8_1 = 0
    
    if (arg1.b != 0)
        while (arg1.b == 0x20 || arg1.b == 9)
            arg1.b = esi[1]
            esi = &esi[1]
            
            if (arg1.b == 0)
                break
    
    if (sub_5a7934(esi, "#include", 8) == 0)
        uint32_t eax
        eax.b = esi[8]
        void* ecx_1 = &esi[8]
        
        if (eax.b != 0)
            while (eax.b == 0x20 || eax.b == 9)
                eax.b = *(ecx_1 + 1)
                ecx_1 += 1
                
                if (eax.b == 0)
                    break
        
        eax.b = *ecx_1
        
        if (eax.b == 0x22 || eax.b == 0x3c)
            int32_t eax_2
            int32_t edx
            eax_2, edx = _strcspn(ecx_1 + 1, ">"")
            char ecx_2 = *(ecx_1 + 1 + eax_2)
            
            if (ecx_2 != 0x22 && ecx_2 != 0x3e)
                *arg2 = &data_83f3d3
                return arg2
            
            sub_4c4380(ecx_1 + 1, edx, arg2)
            return arg2
    
    *arg2 = &data_83f3d3
    return arg2
}

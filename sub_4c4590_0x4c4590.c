// 函数名称: sub_4c4590
// 虚拟地址: 0x4c4590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4c4590(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    int32_t* entry_result
    char* edx = *entry_result
    char* const eax = &data_83f3d3
    
    if (edx != 0)
        eax = edx
    
    if (eax != arg1)
        char* eax_1 = arg1
        void* esi_1 = &eax_1[1]
        
        do
            ecx.b = *eax_1
            eax_1 = &eax_1[1]
        while (ecx.b != 0)
        
        void* eax_2 = eax_1 - esi_1
        void** esi_2 = eax_2
        
        if (eax_1 == esi_1)
            if (edx != 0 && *edx != ecx.b)
                void* eax_4 = sub_4c4060(entry_result)
                int32_t temp1_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_4 + 0xc) + 0x10
                    sub_4f4430(eax_4, sub_4f4380(esi_4), esi_4)
            
            *entry_result = &data_83f3d3
            return entry_result
        
        sub_4c4160(eax_2, edx, entry_result, esi_2, 0)
        sub_5ab990(*entry_result, arg1, esi_2 + 1)
    
    return entry_result
}

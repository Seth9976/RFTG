// 函数名称: sub_4c4510
// 虚拟地址: 0x4c4510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4c4510(int32_t* arg1)
{
    // 第一条实际指令: int32_t* entry_result
    int32_t* entry_result
    char* eax = *entry_result
    char* const edx = &data_83f3d3
    
    if (eax != 0)
        edx = eax
    
    char* const ecx_1 = *arg1
    
    if (ecx_1 == 0)
        ecx_1 = &data_83f3d3
    
    if (edx != ecx_1)
        if (eax != 0 && *eax != 0)
            void* eax_2 = sub_4c4060(entry_result)
            int32_t temp1_1 = *(eax_2 + 4)
            *(eax_2 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_2 = *(eax_2 + 0xc) + 0x10
                sub_4f4430(eax_2, sub_4f4380(esi_2), esi_2)
        
        int32_t eax_5 = *arg1
        *entry_result = eax_5
        
        if (eax_5 != 0)
            if (*eax_5 == 0)
                return entry_result
            
            void* eax_7 = sub_4c4060(entry_result)
            *(eax_7 + 4) += 1
    
    return entry_result
}

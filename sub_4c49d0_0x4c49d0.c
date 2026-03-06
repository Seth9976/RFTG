// 函数名称: sub_4c49d0
// 虚拟地址: 0x4c49d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4c49d0(void* arg1 @ eax, char* arg2)
{
    // 第一条实际指令: void** eax_1
    void** eax_1
    void** edx
    eax_1, edx = sub_5a9419(arg2, arg1)
    int32_t* entry_result
    
    if (eax_1 s> 0)
        void* eax_8
        int32_t edx_1
        eax_8, edx_1 = sub_4c4160(eax_1, edx, entry_result, eax_1, 0)
        __vcasan::DumpThisThread(eax_8, edx_1, arg2, *entry_result, eax_1 + 1, arg1)
        return entry_result
    
    char* eax_2 = *entry_result
    
    if (eax_2 != 0 && *eax_2 != 0)
        void* eax_4 = sub_4c4060(entry_result)
        int32_t temp1_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_4 + 0xc) + 0x10
            sub_4f4430(eax_4, sub_4f4380(esi_2), esi_2)
    
    *entry_result = &data_83f3d3
    return entry_result
}

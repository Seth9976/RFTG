// 函数名称: sub_56ea90
// 虚拟地址: 0x56ea90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56ea90(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* i = sub_4e7210(*arg1)
    void* i = sub_4e7210(*arg1)
    int32_t ebx = 0
    void* i_2 = i
    void* i_1 = nullptr
    
    if (*(i_2 + 0x14) s> 0)
        int32_t var_8_1 = 0
        
        do
            int32_t* esi_1 = *(i_2 + 0x10)
            char* eax_2 = sub_5a8e80(*(esi_1 + ebx), "eyelid")
            char* eax_3
            
            if (eax_2 == 0)
                eax_3 = sub_5a8e80(*(esi_1 + ebx), "eye_lid")
            
            if (eax_2 != 0 || eax_3 != 0)
                *(arg1[0x1a] + var_8_1 + 0x54) = arg2
            
            var_8_1 += 0x60
            i = i_1 + 1
            ebx += 0x14
            i_1 = i
        while (i s< *(i_2 + 0x14))
    
    return i
}

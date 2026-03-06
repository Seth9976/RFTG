// 函数名称: sub_4e02d0
// 虚拟地址: 0x4e02d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e02d0(int32_t* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i = 0
    
    if (arg1[1] s> 0)
        int32_t* var_8_1 = nullptr
        
        do
            char* edx_1 = *(var_8_1 + *arg1)
            char* eax_2 = edx_1
            char j
            
            do
                j = *eax_2
                eax_2 = &eax_2[1]
            while (j != 0)
            
            if (sub_5a9f0b(*(arg2 + 4), edx_1, eax_2 - &eax_2[1]) == 0)
                return *arg1 + i * 0x18
            
            var_8_1 = &var_8_1[6]
            i += 1
        while (i s< arg1[1])
    
    if (arg1[1] != 0)
        return *arg1
    
    sub_4c5870("materialTable.numMaterials", &data_83f3d3, "Draw3d.cpp", 0x7bf, "GetMaterialEntry")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

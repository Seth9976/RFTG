// 函数名称: sub_554e10
// 虚拟地址: 0x554e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

bool __convention("regparm")sub_554e10(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_2c = 0
    int32_t var_2c = 0
    int32_t* var_18
    int32_t edx
    
    if (sub_500130(arg2, edx, &var_18, arg2) != 0)
        int32_t* edi_1 = var_18
        sub_5a9831(edi_1, nullptr, FILE_END)
        void* eax_2 = sub_5a9a41(edi_1)
        int128_t* eax_4 = sub_4cce80(eax_2 + 1)
        *arg1 = eax_4
        void* var_14
        int32_t eax_5 = sub_5a9831(edi_1, var_14, FILE_BEGIN)
        uint32_t eax_6
        
        if (eax_5 == 0)
            eax_6 = sub_5a9cf0(eax_4, eax_2, 1, edi_1)
        
        char var_9_1
        
        if (eax_5 == 0 && eax_6 == 1)
            var_9_1 = 1
        else
            var_9_1 = 0
        
        sub_5a8c61(edi_1)
        
        if (var_9_1 != 0)
            int32_t eax_7 = *arg1
            arg1[0x46] = 1
            *(eax_2 + eax_7) = 0
            int32_t ecx_2 = *arg1
            arg1[1] = 0
            arg1[2] = ecx_2
            char* const eax_8 = arg2[1]
            
            if (eax_8 == 0)
                eax_8 = &data_83f3d3
            
            void* edx_4 = &arg1[5] - eax_8
            
            do
                ecx_2.b = *eax_8
                *(edx_4 + eax_8) = ecx_2.b
                eax_8 = &eax_8[1]
            while (ecx_2.b != 0)
            
            return sub_5551f0(arg1) != 0
        
        int32_t esi_1 = *arg1
        
        if (esi_1 != 0)
            _aligned_free_base(esi_1)
    
    return 0
}

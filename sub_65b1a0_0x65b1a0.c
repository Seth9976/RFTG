// 函数名称: sub_65b1a0
// 虚拟地址: 0x65b1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65b1a0(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg2 + 0x24))
    int32_t i_2 = arg6
    int32_t esi_1 = (eax_1 - edx) s>> 1
    void* var_28 = arg2
    arg2 = nullptr
    int32_t eax_7 = sub_649ad0(var_28, esi_1 * i_2 * 4)
    int32_t var_18 = eax_7
    
    if (i_2 s> 0)
        int32_t edi_1 = arg5
        int32_t* edx_2 = arg4 - edi_1
        void* ecx_2 = eax_7 - edi_1
        int32_t* var_10_1 = edx_2
        void* var_14_1 = ecx_2
        int32_t i_1 = i_2
        int32_t i
        
        do
            int32_t eax_8 = *(edx_2 + edi_1)
            
            if (*edi_1 != 0)
                arg2 += 1
            
            int32_t eax_9 = 0
            
            if (esi_1 s> 0)
                int32_t* ecx_3 = ecx_2 + edi_1
                
                do
                    *ecx_3 = *(eax_8 + (eax_9 << 2))
                    eax_9 += 1
                    ecx_3 = &ecx_3[i_2]
                while (eax_9 s< esi_1)
                
                i_2 = arg6
                edx_2 = var_10_1
                ecx_2 = var_14_1
            
            edi_1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (arg2 != 0)
            sub_65a970(arg1, &var_18, 1, arg7, sub_65a390)
    
    return 0
}

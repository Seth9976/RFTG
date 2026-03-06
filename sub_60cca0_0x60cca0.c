// 函数名称: sub_60cca0
// 虚拟地址: 0x60cca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60cca0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    void* ecx_1 = *(arg1 + 0x134)
    int32_t edi
    int32_t var_c = edi
    int32_t var_10 = 0x2c
    int32_t var_14 = 1
    void* eax_1 = sub_5d0ad0()
    
    if (eax_1 == 0)
        sub_5cd050(eax_1)
        return 0xffffffff
    
    int32_t ebx
    int32_t var_10_2 = ebx
    int32_t esi
    int32_t var_14_1 = esi
    *(eax_1 + 4) = sub_60cc60()
    bool cond:0 = *(arg2 + 8) != 2
    *(arg2 + 0x44) = eax_1
    int32_t var_8_1
    int32_t ebx_1
    
    if (cond:0)
        ebx_1 = 1
        var_8_1 = 0
    else
        ebx_1 = 0
        var_8_1 = 1
    
    int32_t* ecx_2 = *(ecx_1 + 8)
    void* edx_1 = *ecx_2
    int32_t eax_4 = sub_60ca70(*(arg2 + 4))
    int32_t eax_8
    int32_t edx_2
    eax_8, edx_2 =
        (*(edx_1 + 0x5c))(ecx_2, *(arg2 + 0xc), *(arg2 + 0x10), 1, var_8_1, eax_4, ebx_1, eax_1, 0)
    
    if (eax_8 s>= 0)
        int32_t eax_9 = *(arg2 + 4)
        
        if (eax_9 != 0x32315659 && eax_9 != 0x56555949)
            return 0
        
        *(eax_1 + 8) = 1
        void* ecx_4 = **(ecx_1 + 8)
        int32_t eax_12 = sub_60ca70(*(arg2 + 4))
        int32_t eax_15
        int32_t edx_5
        edx_5:eax_15 = sx.q(*(arg2 + 0x10))
        int32_t eax_19
        int32_t edx_6
        edx_6:eax_19 = sx.q(*(arg2 + 0xc))
        eax_8, edx_2 = (*(ecx_4 + 0x5c))(*(ecx_1 + 8), (eax_19 - edx_6) s>> 1, (eax_15 - edx_5) s>> 1, 
            1, var_8_1, eax_12, ebx_1, eax_1 + 0xc, 0)
        
        if (eax_8 s>= 0)
            int32_t* ecx_6 = *(ecx_1 + 8)
            int32_t eax_25 = sub_60ca70(*(arg2 + 4))
            int32_t eax_27
            int32_t edx_9
            edx_9:eax_27 = sx.q(*(arg2 + 0x10))
            int32_t eax_31
            int32_t edx_10
            edx_10:eax_31 = sx.q(*(arg2 + 0xc))
            eax_8, edx_2 = (*(*ecx_6 + 0x5c))(ecx_6, (eax_31 - edx_10) s>> 1, (eax_27 - edx_9) s>> 1, 
                1, var_8_1, eax_25, ebx_1, eax_1 + 0x10, 0)
            
            if (eax_8 s>= 0)
                return 0
    
    char const* const var_10_3 = "CreateTexture()"
    sub_60c740(eax_8, edx_2)
    return 0xffffffff
}

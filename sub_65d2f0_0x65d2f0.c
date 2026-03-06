// 函数名称: sub_65d2f0
// 虚拟地址: 0x65d2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65d2f0(void* arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t eax_3
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (*(arg1 + 0x1c) << 2)))
    void* ecx = *(arg2 + 0x510)
    int32_t* eax_5 = arg3
    void* edi = nullptr
    int32_t ebx_1 = (eax_3 - edx_3) s>> 1
    
    if (eax_5 == 0)
        sub_5abfc0(arg4, 0, ebx_1 << 2)
        return 0
    
    void* ecx_2 = *(ecx + 0x340) * *eax_5
    void* var_8 = nullptr
    
    if (ecx_2 s< 0)
        ecx_2 = nullptr
    else if (ecx_2 s> 0xff)
        ecx_2 = 0xff
    
    int32_t var_c = 1
    
    if (*(arg2 + 0x504) s> 1)
        arg1 = arg2 + 0x108
        
        while (true)
            int32_t edx_5 = *arg1
            int32_t esi_2 = eax_5[edx_5]
            int32_t eax_7 = esi_2 & 0x7fff
            
            if (eax_7 == esi_2)
                edi = *(ecx + (edx_5 << 2) + 0x344)
                void* esi_5 = *(ecx + 0x340) * eax_7
                
                if (esi_5 s< 0)
                    esi_5 = nullptr
                else if (esi_5 s> 0xff)
                    esi_5 = 0xff
                
                sub_65bc10(arg4, edx_5, esi_5, ebx_1, var_8, edi, ecx_2, arg4)
                var_8 = edi
                ecx_2 = esi_5
            
            arg1 += 4
            int32_t eax_10 = var_c + 1
            var_c = eax_10
            
            if (eax_10 s>= *(arg2 + 0x504))
                break
            
            eax_5 = arg3
    
    void* esi_6 = edi
    
    if (edi s< ebx_1)
        if (ebx_1 - edi s>= 4)
            void* eax_13 = arg4 + (edi << 2) + 8
            int32_t i_1 = ((ebx_1 - edi - 4) u>> 2) + 1
            esi_6 = edi + (i_1 << 2)
            int32_t i
            
            do
                eax_13 += 0x10
                i = i_1
                i_1 -= 1
                *(eax_13 - 0x18) = fconvert.s(fconvert.t(*((ecx_2 << 2) + &data_82df00))
                    * fconvert.t(*(eax_13 - 0x18)))
                *(eax_13 - 0x14) = fconvert.s(fconvert.t(*((ecx_2 << 2) + &data_82df00))
                    * fconvert.t(*(eax_13 - 0x14)))
                *(eax_13 - 0x10) = fconvert.s(fconvert.t(*((ecx_2 << 2) + &data_82df00))
                    * fconvert.t(*(eax_13 - 0x10)))
                *(eax_13 - 0xc) =
                    fconvert.s(fconvert.t(*(eax_13 - 0xc)) * fconvert.t(*((ecx_2 << 2) + &data_82df00)))
            while (i != 1)
        
        while (esi_6 s< ebx_1)
            long double x87_r7_10 =
                fconvert.t(*((ecx_2 << 2) + &data_82df00)) * fconvert.t(*(arg4 + (esi_6 << 2)))
            esi_6 += 1
            *(arg4 + (esi_6 << 2) - 4) = fconvert.s(x87_r7_10)
    
    return 1
}

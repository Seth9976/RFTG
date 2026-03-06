// 函数名称: sub_5cdfc0
// 虚拟地址: 0x5cdfc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5cdfc0(char* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    char* edi = arg1
    char* var_c = edi
    int32_t var_10 = 0
    
    if (arg2 == 0x10)
        int32_t __saved_esi_1 = 2
        void* const var_24_1 = &data_88c83c
        char* var_28_1 = edi
        
        if (sub_5cd5d0() == 0)
            edi = &edi[2]
    
    while (true)
        uint32_t var_24_2 = zx.d(*edi)
        int32_t esi_2
        
        if (sub_5dece0() == 0)
            if (arg2 != 0x10)
            label_5ce058:
                
                if (arg3 != 0)
                    *arg3 = ebx
                    arg3[1] = var_10
                
                return edi - var_c
            
            int32_t eax_2
            eax_2.b = *edi
            
            if (eax_2.b s< 0x41 || eax_2.b s> 0x46)
                if (eax_2.b s< 0x61 || eax_2.b s> 0x66)
                    goto label_5ce058
                
                esi_2 = sx.d(eax_2.b) - 0x57
            else
                esi_2 = sx.d(eax_2.b) - 0x37
        else
            esi_2 = sx.d(*edi) - 0x30
        
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(arg2)
        int32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = __allmul(eax_4, edx_1, ebx, var_10)
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = sx.q(esi_2)
        ebx = eax_5 + eax_7
        var_10 = adc.d(edx_2, edx_3, eax_5 + eax_7 u< eax_5)
        edi = &edi[1]
}

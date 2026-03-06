// 函数名称: sub_5c6310
// 虚拟地址: 0x5c6310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6310(void* arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t temp0 = *(arg1 + 0x34)
    int32_t ebx_1
    
    if (arg3 u< temp0)
        ebx_1 = arg2
    else
        if (arg3 u<= temp0)
            ebx_1 = arg2
        
        if (arg3 u> temp0 || ebx_1 u>= *(arg1 + 0x30))
            zip_error_set(arg1 + 8, 0x12, 0)
            return 0xffffffff
    
    if ((*(arg1 + 0x18) & 2) != 0)
        zip_error_set(arg1 + 8, 0x19, 0)
        return 0xffffffff
    
    char* eax_3
    void* edx_1
    
    if (arg4 != 0)
        eax_3 = arg4
        edx_1 = &eax_3[1]
        
        do
            ecx.b = *eax_3
            eax_3 = &eax_3[1]
        while (ecx.b != 0)
    
    int32_t* edi_4
    
    if (arg4 == 0 || eax_3 == edx_1)
        edi_4 = nullptr
    label_5c63e0:
        int32_t eax_9
        int32_t edx_3
        eax_9, edx_3 = sub_5c1f10(arg1, arg4, 0, nullptr)
        
        if (edx_3 s>= 0 && (edx_3 s> 0 || eax_9 u>= 0))
            if (eax_9 == ebx_1 && edx_3 == arg3)
                sub_5bf1f0(edi_4)
                return 0
            
            sub_5bf1f0(edi_4)
            zip_error_set(arg1 + 8, 0xa, 0)
            return 0xffffffff
        
        int32_t* ebx_4 = (ebx_1 << 4) + *(arg1 + 0x40)
        void* eax_12 = ebx_4[1]
        
        if (eax_12 != 0)
            sub_5bf1f0(*(eax_12 + 0x30))
            *(ebx_4[1] + 0x30) = 0
            int32_t* eax_13 = ebx_4[1]
            *eax_13 &= 0xfffffffd
        
        void* eax_14 = *ebx_4
        
        if (eax_14 != 0)
            int32_t eax_16 = sub_5bf130(*(eax_14 + 0x30), edi_4)
            int32_t eax_17 = neg.d(eax_16)
            
            if (sbb.d(eax_17, eax_17, eax_16 != 0) == 0xffffffff)
                sub_5bf1f0(edi_4)
                int32_t* eax_24 = ebx_4[1]
                
                if (eax_24 != 0 && *eax_24 == 0)
                    sub_5bf7f0(eax_24)
                    ebx_4[1] = 0
                
                return 0
        
        int32_t* eax_20
        
        if (ebx_4[1] == 0)
            eax_20 = sub_5bfce0(*ebx_4)
            ebx_4[1] = eax_20
        
        if (ebx_4[1] != 0 || eax_20 != 0)
            *(ebx_4[1] + 0x30) = edi_4
            int32_t* esi_4 = ebx_4[1]
            *esi_4 |= 2
            return 0
        
        zip_error_set(arg1 + 8, 0xe, eax_20)
        sub_5bf1f0(edi_4)
    else
        char* eax_5 = arg4
        int16_t edx_2 = eax_5.w + 1
        
        do
            ecx.b = *eax_5
            eax_5 = &eax_5[1]
        while (ecx.b != 0)
        
        edi_4 = sub_5bf2e0(arg4, eax_5.w - edx_2, arg5, arg1 + 8)
        
        if (edi_4 != 0)
            if ((arg5 & 0x1800) == 0 && sub_5c3620(edi_4, 0) == 3)
                edi_4[2] = 2
            
            ebx_1 = arg2
            goto label_5c63e0
    return 0xffffffff
}

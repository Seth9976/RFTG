// 函数名称: sub_6479c0
// 虚拟地址: 0x6479c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6479c0(void* const arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    int32_t* eax_1 = _calloc(eax, edx, ecx, 1, 0x460)
    void* edx_1 = *(arg1 + 0x1c)
    __builtin_memcpy(eax_1, *(arg5 + (arg2 << 2)) * 0x460 + arg4, 0x460)
    int32_t i_4 = *eax_1
    int32_t eax_2 = 0xffffffff
    void* const ebx = 0xffffffff
    arg1 = 0xffffffff
    
    if (i_4 s> 0)
        void* edi_2 = &eax_1[1]
        int32_t i_3 = i_4
        int32_t i
        
        do
            int32_t ecx_3 = *edi_2
            
            if (ecx_3 s> eax_2)
                eax_2 = ecx_3
            
            edi_2 += 4
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (eax_2 s>= 0)
        void* esi_5 = &eax_1[0x40]
        arg4 = &eax_1[0x50]
        int32_t i_2 = eax_2 + 1
        ebx = 0xffffffff
        int32_t i_1
        
        do
            void* eax_4 = *esi_5
            
            if (eax_4 s> ebx)
                ebx = eax_4
                arg1 = ebx
            
            *esi_5 = *(edx_1 + 0x18) + eax_4
            int32_t j = 0
            
            if (1 << (*(esi_5 - 0x40)).b s> 0)
                void* edi_4 = arg4
                
                do
                    void* ecx_8 = *edi_4
                    
                    if (ecx_8 s> ebx)
                        arg1 = ecx_8
                    
                    if (ecx_8 s>= 0)
                        *edi_4 = *(edx_1 + 0x18) + ecx_8
                    
                    j += 1
                    edi_4 += 4
                    ebx = arg1
                while (j s< 1 << (*(esi_5 - 0x40)).b)
            
            arg4 += 0x20
            esi_5 += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t ecx_10 = 0
    
    if (ebx s>= 0)
        do
            *(edx_1 + (*(edx_1 + 0x18) << 2) + 0x720) =
                *(*(arg3 + (*(arg5 + (arg2 << 2)) << 2)) + (ecx_10 << 2))
            *(edx_1 + 0x18) += 1
            ecx_10 += 1
        while (ecx_10 s<= ebx)
    
    *(edx_1 + (*(edx_1 + 0x10) << 2) + 0x320) = 1
    *(edx_1 + (*(edx_1 + 0x10) << 2) + 0x420) = eax_1
    *(edx_1 + 0x10) += 1
    return 1
}

// 函数名称: sub_6116c0
// 虚拟地址: 0x6116c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6116c0(int128_t* arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t result = arg3
    int32_t result_1 = result
    int32_t result_2 = result
    int32_t result_3 = result
    int32_t result_4 = result
    
    if (arg5 != 0)
        int128_t xmm0_1 = result_1.o
        
        do
            void* edi_1 = arg4
            arg5 -= 1
            int128_t* ecx_1 = arg1
            
            if (edi_1 s> 0x3f)
                void* eax_1 = ecx_1 & 0xf
                
                if (0x10 != eax_1)
                    void* var_34_1 = 0x10 - eax_1
                    int32_t var_38_1 = arg3
                    int128_t* var_3c_1 = arg1
                    edi_1 -= 0x10 - eax_1
                    sub_5cd100()
                    xmm0_1 = result_1.o
                    ecx_1 = 0x10 - eax_1 + arg1
                
                int32_t eax_4
                int32_t edx_2
                edx_2:eax_4 = sx.q(edi_1)
                int32_t j_1 = (eax_4 + (edx_2 & 0x3f)) s>> 6
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        *ecx_1 = xmm0_1
                        ecx_1[1] = xmm0_1
                        ecx_1[2] = xmm0_1
                        ecx_1[3] = xmm0_1
                        ecx_1 = &ecx_1[4]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
            
            void* edi_2 = edi_1 & 0x3f
            
            if (edi_2 != 0)
                void* var_34_2 = edi_2
                int32_t var_38_2 = arg3
                int128_t* var_3c_2 = ecx_1
                sub_5cd100()
                xmm0_1 = result_1.o
            
            result = arg2
            arg1 += result
        while (arg5 != 0)
    
    return result
}

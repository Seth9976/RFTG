// 函数名称: sub_611960
// 虚拟地址: 0x611960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_611960(int64_t* arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t result = arg3
    int32_t result_1 = result
    int64_t st0 = result.q
    int32_t var_18
    var_18.q = st0
    
    while (arg5 != 0)
        void* edi_1 = arg4
        arg5 -= 1
        int64_t* ecx_1 = arg1
        
        if (edi_1 s> 0x3f)
            void* eax_1 = ecx_1 & 7
            
            if (8 != eax_1)
                void* var_24_1 = 8 - eax_1
                int32_t var_28_1 = arg3
                int64_t* var_2c_1 = arg1
                edi_1 -= 8 - eax_1
                sub_5cd100()
                st0 = var_18.q
                ecx_1 = 8 - eax_1 + arg1
            
            int32_t eax_4
            int32_t edx_2
            edx_2:eax_4 = sx.q(edi_1)
            int32_t j_1 = (eax_4 + (edx_2 & 0x3f)) s>> 6
            
            if (j_1 != 0)
                int32_t j
                
                do
                    *ecx_1 = st0
                    ecx_1[1] = st0
                    ecx_1[2] = st0
                    ecx_1[3] = st0
                    ecx_1[4] = st0
                    ecx_1[5] = st0
                    ecx_1[6] = st0
                    ecx_1[7] = st0
                    ecx_1 = &ecx_1[8]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        void* edi_2 = edi_1 & 0x3f
        
        if (edi_2 != 0)
            void* var_24_2 = edi_2
            int32_t var_28_2 = arg3
            int64_t* var_2c_2 = ecx_1
            sub_5cd100()
            st0 = var_18.q
        
        result = arg2
        arg1 += result
    
    return result
}

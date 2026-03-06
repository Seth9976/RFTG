// 函数名称: sub_4023f0
// 虚拟地址: 0x4023f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4023f0(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t** edx = data_27e7a40
    void* ecx = edx[0xa]
    int32_t eax_1
    eax_1.b = arg1
    char var_15 = eax_1.b
    
    if (ecx != 0)
        void* esi_1 = data_27e7bb8
        uint32_t eax_2 = zx.d(ecx.w)
        
        if (eax_2 u< *(esi_1 + 4))
            void* eax_4 = eax_2 * 0x4c + *esi_1
            
            if (*(eax_4 + 0x48) == ecx)
                int32_t var_14
                int32_t* var_24_1 = &var_14
                void* var_28_1 = eax_4 + 0x3c
                int32_t var_10_1 = 1
                int32_t var_c_1 = 0xf4259
                var_14 = 0xfeedface
                void* ecx_1
                int32_t** edx_1
                ecx_1, edx_1 = sub_4c72b0(0xc, edx, ecx)
                char* var_2c_1 = &var_15
                void* var_30_1 = eax_4 + 0x3c
                sub_4c72b0(1, edx_1, ecx_1)
                edx = data_27e7a40
    
    data_8c873c = fconvert.s(fconvert.t(5f))
    int32_t result = edx[0xa]
    
    if (result != edx[0xc])
        edx[0xc] = result
        result = data_27c05d8
        edx[0xd] = result
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}

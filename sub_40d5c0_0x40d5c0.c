// 函数名称: sub_40d5c0
// 虚拟地址: 0x40d5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_40d5c0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = data_27e7a40
    int32_t var_14
    
    if (eax_2 == 0)
        sub_4075c0()
        void* ecx_3 = *(data_27e7a40 + 0x28)
        
        if (ecx_3 != 0)
            int32_t** edx_3 = data_27e7bb8
            uint32_t eax_6 = zx.d(ecx_3.w)
            
            if (eax_6 u< edx_3[1])
                void* eax_8 = &(*edx_3)[eax_6 * 0x13]
                
                if (*(eax_8 + 0x48) == ecx_3)
                    int32_t* var_18_2 = &var_14
                    void* var_1c_2 = eax_8 + 0x3c
                    int32_t var_10_2 = 0
                    int32_t var_c_2 = 0xf426b
                    var_14 = 0xfeedface
                    sub_4c72b0(0xc, edx_3, ecx_3)
        
        eax_2 = sub_407670()
    else
        void* ecx = *(eax_2 + 0x28)
        
        if (ecx != 0)
            int32_t** edx_1 = data_27e7bb8
            eax_2 = zx.d(ecx.w)
            
            if (eax_2 u< edx_1[1])
                eax_2 = &(*edx_1)[eax_2 * 0x13]
                
                if (*(eax_2 + 0x48) == ecx)
                    int32_t* var_18_1 = &var_14
                    void* var_1c_1 = eax_2 + 0x3c
                    int32_t var_10_1 = 0
                    int32_t var_c_1 = 0xf426b
                    var_14 = 0xfeedface
                    int128_t* eax_5 = sub_4c72b0(0xc, edx_1, ecx)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}

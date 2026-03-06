// 函数名称: sub_468f50
// 虚拟地址: 0x468f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_468f50(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ecx = *arg1
    int32_t var_18 = 5
    
    if (ecx != 0)
        int32_t** edx_1 = data_27e7bb8
        uint32_t eax_2 = zx.d(ecx.w)
        
        if (eax_2 u< edx_1[1])
            void* eax_4 = &(*edx_1)[eax_2 * 0x13]
            
            if (*(eax_4 + 0x48) == ecx)
                int32_t var_14
                int32_t* var_20_1 = &var_14
                void* var_24_1 = eax_4 + 0x3c
                int32_t var_10_1 = 4
                int32_t var_c_1 = 0xf4252
                var_14 = 0xfeedface
                void* ecx_1
                int32_t** edx_2
                ecx_1, edx_2 = sub_4c72b0(0xc, edx_1, ecx)
                int32_t* var_28_1 = &var_18
                void* var_2c_1 = eax_4 + 0x3c
                sub_4c72b0(4, edx_2, ecx_1)
    
    sub_4c8d10()
    int32_t result = sub_4b8dc0(arg1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

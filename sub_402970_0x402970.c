// 函数名称: sub_402970
// 虚拟地址: 0x402970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_402970()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t result = data_27e7a40
    void* ecx = *(result + 0x28)
    int32_t var_1c = 0x5f9
    int32_t var_18 = 0x81
    
    if (ecx != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(ecx.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == ecx)
                int32_t var_14
                int32_t* var_28_1 = &var_14
                void* var_2c_1 = result + 0x3c
                int32_t var_10_1 = 8
                int32_t var_c_1 = 0xf4257
                var_14 = 0xfeedface
                void* ecx_1
                int32_t** edx_2
                ecx_1, edx_2 = sub_4c72b0(0xc, edx_1, ecx)
                int32_t* var_30_1 = &var_1c
                void* var_34_1 = result + 0x3c
                result = sub_4c72b0(8, edx_2, ecx_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
